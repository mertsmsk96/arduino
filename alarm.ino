void setup() {
  // put your setup code here, to run once:
  pinMode(8,OUTPUT);
  pinMode(9,INPUT);
  pinMode(4,OUTPUT);
  pinMode(12,OUTPUT);
  pinMode(13,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  long sure,mesafe;
  digitalWrite(8,LOW);
  delayMicroseconds(2);
  digitalWrite(8,HIGH);
  delayMicroseconds(10);
  digitalWrite(8,LOW);

  sure = pulseIn(9,HIGH);
  mesafe = (sure/2)/29.1;

  if(mesafe < 15){
    digitalWrite(4,HIGH);
    digitalWrite(12,HIGH);
    digitalWrite(13,HIGH);
  }
  else{
    digitalWrite(4,LOW);
    digitalWrite(12,LOW);
    digitalWrite(13,LOW);
  }
  delay(100);
}
