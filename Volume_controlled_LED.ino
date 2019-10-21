void setup()
{
  pinMode(13, OUTPUT);
  pinMode(10, INPUT);
  pinMode(9,INPUT);
  pinMode(12,OUTPUT);
}


void loop()
{
  
  if(digitalRead(10)==HIGH)
  {
    digitalWrite(13, HIGH);
  delay(20);
    digitalWrite(13,LOW);
    delay(20);
  } 
  else if(digitalRead(9)==HIGH)
  {
    digitalWrite(12, HIGH);
    delay(40);
    digitalWrite(12,LOW);
    delay(40);
  } 
  
  }