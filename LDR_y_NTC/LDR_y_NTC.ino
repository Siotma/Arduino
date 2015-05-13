int sensePin=0;
int ledPin=9;
int val=0;
int lightLevel=0;

void setup(){
  analogReference(EXTERNAL);
  pinMode(ledPin, OUTPUT);
}

void loop(){
  val=analogRead(sensePin);
  val=val/4;
  lightLevel=map(val, 0, 255, 255, 0);
  //analogWrite(ledPin, ledLevel);
  Serial.println(lightLevel);
  delay(100);
}
