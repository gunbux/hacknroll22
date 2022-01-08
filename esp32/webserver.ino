#include <Arduino.h>
#include <WiFi.h>
#include <WebServer.h>
#include <FreeRTOS.h>
 
const char *SSID = "Hotspot";
const char *PWD = "iamafreeloader";

int unopin = 25;
 
// Web server running on port 80
WebServer server(80);
 
void connectToWiFi() {
  Serial.print("Connecting to ");
  Serial.println(SSID);
  
  WiFi.begin(SSID, PWD);
  
  while (WiFi.status() != WL_CONNECTED) {
    Serial.print(".");
    delay(500);
    // we can even make the ESP32 to sleep
  }
 
  Serial.print("Connected. IP: ");
  Serial.println(WiFi.localIP());
}

void setup_routing() {          
  server.on("/on", HTTP_POST, handleOn);
  server.on("/off", HTTP_POST, handleOff);    
       
  // start server    
  server.begin();    
}

void handleOn() {
  Serial.println("on received");
  // INSERT SQUEEZE START CODE HERE
  digitalWrite(unopin, HIGH);
  digitalWrite(LED_BUILTIN, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(1000);
  digitalWrite(LED_BUILTIN, LOW);
  server.send(200, "application/json", "{}");
}

void handleOff() {
  Serial.println("off received");
  // INSERT TURN OFF SQUEEZE CODE HERE
  digitalWrite(LED_BUILTIN, LOW);    // turn the LED off by making the voltage LOW

  server.send(200, "application/json", "{}");
}

void setup() {     
  Serial.begin(115200);    
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(unopin, OUTPUT); 
     
  connectToWiFi();     
  setup_routing();     
}    
       
void loop() {    
  digitalWrite(unopin, LOW);
  server.handleClient();     
}
