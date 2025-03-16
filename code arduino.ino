#include <Servo.h>

// les pins
#define btnPin 2
#define M1Pin 3

// position du servo M1
#define POSITION_HAUTE_M1 12
#define POSITION_BASSE_M1 180

// init M1
Servo M1;
int M1position = POSITION_HAUTE_M1;

// init btn
int btnStatut = HIGH;

void setup() {
  // Initialisation
  M1.attach(M1Pin);
  M1.write(M1position);
  
  pinMode(btnPin, INPUT);
}

void loop() {
  // boucle principale
  btnStatut = digitalRead(btnPin);
  
  if(btnStatut == HIGH){
    M1position = POSITION_BASSE_M1;
    M1.write(M1position);
    delay(2500);
    
    M1position = POSITION_HAUTE_M1;
    M1.write(M1position);
    delay(500);
  }
}
