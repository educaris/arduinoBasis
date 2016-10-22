int LEDPin=13;
int waitTimeOn=2000;
int waitTimeOff=1000;

void setup(){

  pinMode(LEDPin,OUTPUT);

}

void loop(){

  digitalWrite(LEDPin,HIGH);
  delay(waitTimeOn);
  digitalWrite(LEDPin,LOW);
  delay (waitTimeOff);

}
