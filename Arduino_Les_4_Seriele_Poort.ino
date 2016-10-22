//Door kommentaar toe te voegen kan iedereen precies zien wat je doet

int redLED=9;                //dit is de rode LED op pin 9
int yellowLED=10;            //dit is de gele LED op pin 10
int redOnTime=250;           //dit is de tijd dat redLED aan is
int redOffTime=250;          //dit is de tijd dat redLED uit is
int yellowOnTime=250;        //dit is de tijd dat yellowLED aan is
int yellowOffTime=250;       //dit is de tijd dat yellowLED uit is
int numRedBlinks=5;          //aantal rode knippers
int numYellowBlinks=5;       //aantal gele knippers

void setup(){
  Serial.begin(9600);         //set seriele poort open
  pinMode(redLED, OUTPUT);    //redLED (eigenlijk pin 9) is een output
  pinMode(yellowLED, OUTPUT); //yellowLED (eigenlijk pin 10) is een output
  
}
void loop(){
  
Serial.println("De rode Led knippert");
  for(int j=1;j<=numRedBlinks;j=j+1){
    Serial.print("   Je bent bij knipper #: ");
    Serial.println(j);
    digitalWrite(redLED, HIGH);    //redLED aan zetten
    delay(redOnTime);              //wachten
    digitalWrite(redLED, LOW);     //redLED uit zetten
    delay(redOffTime);             //wachten
  } 
 
  Serial.println(" ");          //print lege regel 
  
for (int j=1;j<=10;j+1){
  
  digitalWrite(yellowLED, HIGH); //yellowLED aan
  delay (yellowOnTime);          //wachten
  digitalWrite(yellowLED,LOW);   //yellowLED uit
  delay (yellowOffTime);         //wachten
}

  Serial.println(" ");          //print lege regel
}
