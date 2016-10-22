//Eerst onze globale variabelen aangeven:

int redLED=9;       //het woord ledRED staat nu dus gelijk aan 9
int onTime=1000;    //hier geven we aan hoe lang de LED aan is
int offTime=1000;   //hier geven we aan hoe lang de LED uit is

void setup(){

  //pinMode aangeven:
  
  pinMode(redLED, OUTPUT);  //LET OP, we zeggen dus niet 9, maar
                            //de variabele die we boven hebben aan
                            //gegeven
}
void loop(){
 //hier schrijven de de code om de LED aan en uit te zetten
  
  digitalWrite(redLED,HIGH);  //LED aan zetten
  delay(onTime);              //wachten zo lang als aangegeven
  digitalWrite(redLED,LOW);   //LED uit zetten
  delay(offTime);             //wachten zo lang als aangegeven

}
