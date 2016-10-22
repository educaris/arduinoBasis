/*
  DigitalReadSerial
 Leest de digitale input op pin 2 en print het resultaat op de serial monitor

 Dit voorbeeld is in het publieke domein.
 */

// Aan digital pin 2 zit een drukknop. Geef het een naam:
int pushButton = 2;

// De setup routine draait een keer:
void setup() {
  // initialiseer de seriele communicatie met 9600 bits per seconde:
  Serial.begin(9600);
  // maak de pin van de drukknop een input:
  pinMode(pushButton, INPUT);
}

// Dit loopt voor altijd:
void loop() {
  // lees de input pin:
  int buttonState = digitalRead(pushButton);
  // print de status van de drukknop:
  Serial.println(buttonState);
  delay(1);        // vertraging tussen de waarnemingen voor stabiliteit
}
