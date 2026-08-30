// MYCROMARS 2026
// ALEXANDER RUDI
// ESP32: esp32doit-devkit-v1

#include <Arduino.h>
#include "header.h"

// #include "../include/function_a.cpp"
// #include "../include/function_a.h"

// Create
int a = 4;
int b = 16;
int c = 17;
int d = 2;
int button = 0;
int on = 0;

// Main Function
void setup() {
  // Connect
  Serial.begin(115200);
  //Serial.begin(9600);
  //Serial.setTimeout(50);

  // Create 
  pinMode(a, OUTPUT);
  pinMode(b, OUTPUT);
  pinMode(c, OUTPUT);
  pinMode(d, INPUT_PULLUP);

  Serial.println("\n");

  // LED green
  function_a(b);
}

// Loop Function
void loop() {

  // press button
  if (digitalRead(d) == LOW)
  {  
    if (button == 0){
      button = 1;
 
      // Switch ON/OFF
      if (on == 0) {
        on = 1;
        Serial.println("LED blue ON");
        digitalWrite(c, HIGH);
      }
      else if (on == 1)
      {
        on = 0; 
        Serial.println("LED blue OFF");
        digitalWrite(c, LOW);
      }
    }
  }
  else {
    // button free
    button = 0;
  }

  // LED blue blink
  function_b(a, on);
  

  delay(10);
}
