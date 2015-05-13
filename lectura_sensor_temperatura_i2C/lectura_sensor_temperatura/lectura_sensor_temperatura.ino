// Created by David Alvarez Medina aka 0xDA_bit for tallerarduino.wordpress.com
// Under cc licence
// Funcionalidad del programa:
//   - Comunicacion I2C
//   - Sensor de temperatura TC74A0

#include  <Wire.h>                          // Cargo libreria

int direccion_sensor = 72;                  // Direccion de memoria para comunicacion sensor
byte envio=0;

void setup(){
  Serial.begin(9600);                       // Inicio comunicacion serie
  Wire.begin();                             // Inicio comunicacion I2C
  Serial.println("Inicio lectura sensor");
}

void loop(){
  Wire.beginTransmission(direccion_sensor); // Inicio la comunicacion con el sensor
  envio=0;
  Wire.write(envio);                             // Pregunto por el registro "0"
  Wire.endTransmission();                   // Espero fin de transmision
  Wire.requestFrom(direccion_sensor, 1);    //
  while(Wire.available() == 0);             // Sensor disponible?
  int temperatura = Wire.read();         // Cargo temperatura en variable "temperatura"
  
  Serial.print(temperatura);                // Imprimo temperatura
  Serial.println(" C");                     // Imprimo "ºC"
  
  delay(1000);                              // Espero un segundo
}
