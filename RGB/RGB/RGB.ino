
int potenciometro=0;
int R=3;
int G=6;//////////
int B=5;
int Rvalue=0;
int Gvalue=0;
int Bvalue=0;

void setup(){
  Serial.begin(9600);
  pinMode(R, OUTPUT);
  pinMode(G, OUTPUT);
  pinMode(B, OUTPUT);
}

void loop(){
  Serial.println("Valor leido");
  Serial.print("R ");
  Serial.print(Rvalue);
  Serial.print("   G ");
  Serial.print(Gvalue);
  Serial.print("   B ");
  Serial.println(Bvalue);
  delay(100);
  analogWrite(R, Rvalue);
  analogWrite(G, Gvalue);
  analogWrite(B, Bvalue);
  delay(100);
}
