/*
   Motor.cpp

   Ce code sert au pilotage du moteur, marche, direction, arrêt

*/



#include "Motor.h"

// Constructeur
Motor::Motor(uint8_t const pinA_In1, uint8_t const pinA_In2, uint8_t const pinB_In1) {
  this->pinA_In1 = pinA_In1;
  this->pinA_In2 = pinA_In2;
  this->pinB_In1 = pinB_In1;

  pinMode(pinA_In1, OUTPUT);
  pinMode(pinA_In2, OUTPUT);
  pinMode(pinB_In1, OUTPUT);

  digitalWrite(pinA_In1, LOW);
  digitalWrite(pinA_In2, HIGH);
  digitalWrite(pinB_In1, HIGH);
}

void Motor::drive(bool dir) {
  if (dir == 0)
    rev();
  else
    fwd();
}

void Motor::brake() {
  digitalWrite(pinB_In1, HIGH);
}

void Motor::fwd() {
  digitalWrite(pinA_In1, HIGH);
  digitalWrite(pinA_In2, HIGH);
  digitalWrite(pinB_In1, LOW);
}

void Motor::rev() {
  digitalWrite(pinA_In1, LOW);
  digitalWrite(pinA_In2, LOW);
  digitalWrite(pinB_In1, LOW);
}
