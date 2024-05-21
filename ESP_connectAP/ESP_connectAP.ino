#include "WiFi.h"

const char* ssid = "Vaishak M";
const char* password = "03101997";
IPAddress staticIP(192, 168, 1, 123); // Define your desired static IP address
IPAddress gateway(192, 168, 1, 1);     // Define your router's IP address
IPAddress subnet(255, 255, 255, 0);    // Define your subnet mask

void setup() {
    Serial.begin(115200);
    WiFi.config(staticIP, gateway, subnet);
    WiFi.begin(ssid, password);
    Serial.print("Connecting to ");
    Serial.print(ssid);
    while (WiFi.status() != WL_CONNECTED) {
        delay(1000);
        Serial.print(".");
    }
    Serial.println("");
    Serial.println("WiFi connected.");
    Serial.print("IP address: ");
    Serial.println(WiFi.localIP());
}

void loop() {
    // Your code here
}
