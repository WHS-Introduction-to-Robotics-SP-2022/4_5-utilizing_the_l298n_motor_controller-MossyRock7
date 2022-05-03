int a;

void setup() {
  pinMode(8,OUTPUT);
  pinMode(9,OUTPUT);
  pinMode(10,OUTPUT);
  
  digitalWrite(10,255);
  
    for (int a = 0; a <= 250; a = a + 1){
        digitalWrite(8,HIGH);
        digitalWrite(9,LOW);
        analogWrite(10,a);
        delay(22);
    }
    for(int a = 225;a >= 1; a = a - 1){
      digitalWrite(8,HIGH);
      digitalWrite(9,LOW);
      analogWrite(10,a);
      delay(22);
    }
    
    
    
}
