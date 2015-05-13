int entrada=0;
int led=10;
int value=0;

void setup(){
  Serial.begin(9600);
  pinMode(led, OUTPUT);
}

void loop(){
  value=analogRead(entrada);
  Serial.print("Valor leido: ");
  Serial.println(value);
  delay(100);
  value =map(value, 0, 1024, 0, 9);
  Serial.print("Valor convertido: ");
  Serial.println(value);
  delay(100);
      digitalWrite(9,LOW);
      digitalWrite(8,LOW);
      digitalWrite(7,LOW);
      digitalWrite(6,LOW);
      digitalWrite(5,LOW);
      digitalWrite(4,LOW);
      digitalWrite(3,LOW);
      digitalWrite(2,LOW);
      digitalWrite(1,LOW);
      digitalWrite(0,LOW);
  switch (value)
  {
    case 9:
      digitalWrite(9,HIGH);
    case 8:
      digitalWrite(8,HIGH);
    case 7:
      digitalWrite(7,HIGH);
    case 6:
      digitalWrite(6,HIGH);
    case 5:
      digitalWrite(5,HIGH);
    case 4:
      digitalWrite(4,HIGH);
    case 3:
      digitalWrite(3,HIGH);
    case 2:
      digitalWrite(2,HIGH);
    case 1:
      digitalWrite(1,HIGH);
    case 0:
      digitalWrite(0,HIGH);
   default:
   Serial.println("Valor no valido");
   }
   
      
}
