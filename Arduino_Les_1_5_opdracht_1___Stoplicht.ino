int rood=9;
int geel=8;
int groen=7;
int roodAan=100000
int groenAan=10000
int geelAan=2000

  void setup(){
  
  pinMode(rood,OUTPUT);
  pinMode(geel,OUTPUT);
  pinMode(groen,OUTPUT);
  
  }
  
  void loop(){
    
    digitalWrite(rood,HIGH);    //Rode LED aan 
    delay(roodAan);             //10 seconden wachten
    digitalWrite(rood,LOW);     //Rode LED uit
    digitalWrite(groen,HIGH);   //Groene LED aan
    delay(groenAan);            //10 seconden wachten 
    digitalWrite(groen,LOW);    //Groene LED uit
    digitalWrite(geel,HIGH);    //Gele LED aan
    delay(geelAan);             //2 seconden wachten
    digitalWrite(geel,LOW);     //Gele LED uit
    
  }
