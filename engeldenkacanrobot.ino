#define echoPin 12
#define trigPin 13
#define MotorR1 7
#define MotorR2 6
#define MotorRE 9
#define MotorL1 4
#define MotorL2 5
#define MotorLE 3

long sure,uzaklik;


void setup() {
  pinMode(echoPin,INPUT);
  pinMode(trigPin,OUTPUT);
  pinMode(MotorR1,OUTPUT);
  pinMode(MotorR2,OUTPUT);
  pinMode(MotorRE,OUTPUT);
  pinMode(MotorL1,OUTPUT);
  pinMode(MotorL2,OUTPUT);
  pinMode(MotorLE,OUTPUT);

}

void loop() {
  digitalWrite(trigPin,LOW);
  delayMicroseconds(5);
  digitalWrite(trigPin,HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin,LOW);

  sure = pulseIn(echoPin,HIGH);
  uzaklik = sure/29.1/2;


  if(uzaklik>15)
  {
    geri();

  }
  else{
    
    ileri();
    delay(500);
    sag();
    delay(500);
    
  }
}

void ileri()
{
  digitalWrite(MotorR1,LOW);
  digitalWrite(MotorR2,HIGH);
  digitalWrite(MotorRE,150);

  digitalWrite(MotorL1,LOW);
  digitalWrite(MotorL2,HIGH);
  digitalWrite(MotorLE,150);
}
void geri()
{
  digitalWrite(MotorR1,HIGH);
  digitalWrite(MotorR2,LOW);
  digitalWrite(MotorRE,150);

  digitalWrite(MotorL1,HIGH);
  digitalWrite(MotorL2,LOW);
  digitalWrite(MotorLE,150); 
}
void sag()
{
  digitalWrite(MotorR1,LOW);
  digitalWrite(MotorR2,HIGH);
  digitalWrite(MotorRE,150);

  digitalWrite(MotorL1,HIGH);
  digitalWrite(MotorL2,LOW);
  digitalWrite(MotorLE,150);
}
