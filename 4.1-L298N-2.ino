void setup() {
  pinMode(8,OUTPUT);
  pinMode(9,OUTPUT);
  pinMode(10,OUTPUT);
  
    digitalWrite(8,HIGH);
    digitalWrite(9,LOW);
    analogWrite(10,127);
    delay(3000);
    digitalWrite(8,LOW);
    digitalWrite(9,LOW);
    analogWrite(10,0);
    delay(2000);
    digitalWrite(8,LOW);
    digitalWrite(9,HIGH);
    analogWrite(10,255);
    delay(2000);
    digitalWrite(8,LOW);
    digitalWrite(9,LOW);
    analogWrite(10,0);
    
}
