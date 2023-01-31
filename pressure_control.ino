float prec = 0;
void setup() 
{
  pinMode(A5,INPUT);
  pinMode(A2,INPUT); 
  pinMode(A0,INPUT); 
  DDRD = DDRD|= B10000000; //D7
  DDRD = DDRD|= B00000100; //D2
//  Serial.begin(9600);
}

void loop() 
{
  double val = analogRead(A2);
  val = val*5/318; //check
  prec = analogRead(A0);
  prec = (prec/1023*5);
//  prec =  map(analogRead(A0),0,1023,0,5);
  if (val<prec)
  {
        PORTD &= !B00000100;    //LOW
    PORTD &= !B10000000; 
  }
  else
  {
    PORTD |= B00000100; //HIGH
    PORTD |= B10000000; //HIGH
  }
//  Serial.print(val);
//  Serial.print("\t");
//  Serial.print(prec);
//  Serial.println();
}
