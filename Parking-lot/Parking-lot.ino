/* */

// Se declaran los terminales digitales a utilizar
const int BtnGetIn = 2;
const int BtnGetOut = 3;
const int ledParkingEmpty = 4;
const int ledParkingFull = 5;
const int ParkingLimit = 10;
int carsInside;
int state = LOW;

void setup() 
{
  Serial.begin(9600);
  pinMode(ledParkingEmpty, OUTPUT);
  pinMode(ledParkingFull, OUTPUT);
  pinMode(BtnGetIn, INPUT);
  pinMode(BtnGetOut,INPUT);

  // El estacionamiento se vacia
  carsInside = 0;
}

void loop() 
{
  // Se espera a que ingrese un usuario
  
}

/*
void pulsadorAntirrebote()
{
  while(digitalRead(pulsador) == LOW);  // Se espera hasta que el pulsador se presione
  
  estado = digitalRead(led);            // Se lee el estado del led
  digitalWrite(led, !estado);           // Se escribe el valor opuesto al estado
  while(digitalRead(pulsador) == HIGH); // Antirrebote
}
*/
