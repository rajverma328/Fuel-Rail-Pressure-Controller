void setup() {  
  DDRD = |= B00000100;  //Set only D2 as OUTPUT
}

void loop() { 
  PORTD |= B00000100;         //Sets only D2 to HIGH 
  delay(1000);
  PORTD &= !B00000100;        //Sets only D2 to LOW (we use ! to invertt the byte)
  delay(1000);
}
