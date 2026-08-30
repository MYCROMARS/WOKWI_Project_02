// LED blue
void function_b(int y, int x){

  if (x == 1){
     // LED blue blink
      digitalWrite(y, HIGH);
      delay(250);
      digitalWrite(y, LOW);
      delay(250);
  }
}