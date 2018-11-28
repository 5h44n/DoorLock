#include <WiFi.h>;
#include <WiFiClient.h>;
#include <BlynkSimpleEsp32.h>;

// You should get Auth Token in the Blynk App.
// Go to the Project Settings (nut icon).
char auth[] = "8*********************************d";

// Your WiFi credentials.
// Set password to "" for open networks.
char ssid[] = "Savarirayan Home";
char pass[] = "*******";


void setup() {
  // Debug console
  Serial.begin(9600);
  Blynk.begin(auth, ssid, pass);
}

void loop() {
  // put your main code here, to run repeatedly:

}
