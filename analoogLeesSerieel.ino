/*
  AnaloogLeesSerieel
  We lezen de analoge input van pin 0 en printen dit naar een seriele monitor.
  Grafische vertegenwoordiging is beschikbaar met de serial plooter (Tools > Serial Plotter menu)
  Verbind de middelste pin van een potentiometer met pin A0 en de buitenste met +5V en ground.

  Deze voorbeeld code is in he tpublieke domein
*/

// Dit is wat je altijd moet hebben als je een nieuw programma start:
void setup() {
  // We beginnen met de seriele communicatie met 9600 bits per seconde:
  Serial.begin(9600);
}

// De loop gaat net zo lang door als het programma loopt; hij stopt niet:
void loop() {
  // Lees de input van analog pin 0:
  int sensorValue = analogRead(A0);
  // print de waarde die gelezen wordt:
  Serial.println(sensorValue);
  delay(1);        // vertraging tussen waarnemingen voor stabiliteit
}
