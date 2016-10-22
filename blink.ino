/*
  Blink
  Zet een LED aan voor een seconde en daarna uit voor een seconde. Dit blijft herhalen.

  De meeste Arduinos hebben een LED on-board zitten. Op de UNO, MEGA and ZERO 
  is deze LED verbonden aan digitale pin 13, op de MKR1000 aan 6. LED_BUILTIN zorgt er voor 
  dat de goede LED pin op het bord gebruikt wordt.
  Als je wilt weten welke pin gebruikt wordt voor de on-board LED op jou Arduino model, bekijk
  de Technical Specs van je bord op https://www.arduino.cc/en/Main/Products
  
  Deze voorbeeld code is in het publieke domijn.

  modified 8 May 2014
  by Scott Fitzgerald
  
  modified 2 Sep 2016
  by Arturo Guadalupi
  
  modified 22 Sep 2016
  by Jasper Luijendijk
*/


// De setup functie draait een keer wanneer je op de reset knop drukt of stroom op het bord zet.

void setup() {
  // Maakt van de digitale pin LED_BUILTIN een output.
  pinMode(LED_BUILTIN, OUTPUT);
}

// Deze functie loopt voor altijd door
void loop() {
  digitalWrite(LED_BUILTIN, HIGH);   // Zet de LED aan (HIGH is het voltage level)
  delay(1000);                       // wacht een seconde
  digitalWrite(LED_BUILTIN, LOW);    // Zet de LED uit door het voltage LOW te maken
  delay(1000);                       // wacht een seconde
}
