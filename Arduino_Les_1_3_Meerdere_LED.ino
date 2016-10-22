//Door kommentaar toe te voegen kan iedereen precies zien wat je doet

int redLED=9;                //dit is de rode LED op pin 9
int yellowLED=10;            //dit is de gele LED op pin 10
int redOnTime=250;           //dit is de tijd dat redLED aan is
int redOffTime=250;          //dit is de tijd dat redLED uit is
int yellowOnTime=250;        //dit is de tijd dat yellowLED aan is
int yellowOffTime=250;       //dit is de tijd dat yellowLED uit is

void setup(){
  
  pinMode(redLED, OUTPUT);    //redLED (eigenlijk pin 9) is een output
  pinMode(yellowLED, OUTPUT); //yellowLED (eigenlijk pin 10) is een output
  
}
void loop(){
  
  digitalWrite(redLED, HIGH);    //redLED aan zetten
  delay(redOnTime);              //wachten
  digitalWrite(redLED, LOW);     //redLED uit zetten
  delay(redOffTime);             //wachten
  
  digitalWrite(yellowLED, HIGH); //yellowLED aan
  delay (yellowOnTime);          //wachten
  digitalWrite(yellowLED,LOW);   //yellowLED uit
  delay (yellowOffTime);         //wachten

}
