#include <WiFi.h>

const char* ssid = "Vaishak M";
const char* password = "03101997";

void setup() {
    Serial.begin(115200);
    connectToWiFi();
    scanNetwork();
}

void loop() {
    // Your code here
}

void connectToWiFi() {
    Serial.println("Connecting to WiFi...");
    WiFi.begin(ssid, password);
    while (WiFi.status() != WL_CONNECTED) {
        delay(1000);
        Serial.print(".");
    }
    Serial.println("");
    Serial.println("WiFi connected.");
    Serial.print("IP address: ");
    Serial.println(WiFi.localIP());
}

void scanNetwork() {
    Serial.println("Scanning network for active hosts...");
    int numDevices = WiFi.scanNetworks();
    if (numDevices == 0) {
        Serial.println("No devices found.");
    } else {
        Serial.print("Number of devices found: ");
        Serial.println(numDevices);
        for (int i = 0; i < numDevices; i++) {
            Serial.print("Device ");
            Serial.print(i + 1);
            Serial.print(": ");
            Serial.println(WiFi.SSID(i));
            Serial.print("  MAC address: ");
            printMACAddress(WiFi.BSSID(i));
            Serial.print("  IP address: ");
            Serial.println(WiFi.BSSID(i)[5]); // Print only the last byte of MAC address as IP address
        }
    }
}

void printMACAddress(uint8_t mac[]) {
    for (int i = 0; i < 6; i++) {
        Serial.print(mac[i], HEX);
        if (i < 5) {
            Serial.print(":");
        }
    }
    Serial.println();
}
