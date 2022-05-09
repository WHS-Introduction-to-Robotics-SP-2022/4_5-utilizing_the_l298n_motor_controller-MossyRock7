void setup() {
  pinMode(5,OUTPUT);
  pinMode(6,OUTPUT);
  pinMode(7,OUTPUT);
  
  digitalWrite(5,HIGH);
  digitalWrite(6,LOW);
  analogWrite(7,255);
  delay(5000);
  digitalWrite(5,LOW);
  digitalWrite(6,LOW);
  analogWrite(7,0);
  
  
  
}
