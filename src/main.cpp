#include <Arduino.h>

// MYCROMARS 2026
// ALEXANDER RUDI
// ESP32


int a = 4;
int b = 16;
int c = 17;
int d = 2;
int button = 0;
int on = 0;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  Serial.println("Hello, ESP32!");

  pinMode(a, OUTPUT);
  pinMode(b, OUTPUT);
  pinMode(c, OUTPUT);
  pinMode(d, INPUT_PULLUP);
}

void loop() {
  // LED green
  digitalWrite(b, HIGH);

  // press button
  if (digitalRead(d) == LOW)
  {  
    if (button == 0){
      button = 1;
 
      if (on == 0) {
        on = 1;
        Serial.println("ON");
        digitalWrite(c, HIGH);
      }
      else if (on == 1)
      {
        on = 0; 
        Serial.println("OFF");
        digitalWrite(c, LOW);
      }
    }
  }
  else {
    // button free
    button = 0;
  }

  if (on == 1){
     // LED blue blink
      digitalWrite(a, HIGH);
      delay(200);
      digitalWrite(a, LOW);
      delay(200);
  }

  delay(10);
}
