#include "Particule.h"


Particule::Particule(float masse, float dumping, Vecteur3D position){
  this->masse = masse;
  this->dumping = dumping;
  this->velocite = Vecteur3D(1,1,0);
  this->position = position;
}

Particule::~Particule(){

}

void Particule::integrer(){
  float temps = 1/FRAME;

  Vecteur3D acceleration=Vecteur3D(0,0,0);
  Vecteur3D gravite=Vecteur3D(0,-GRAVITE,0);

  acceleration.addition(gravite);
  // Update de la position.
  this->position.addition(Vecteur3D::mult_scalaire(temps, this->velocite));
  this->position.addition(Vecteur3D::mult_scalaire(pow(temps,2)/2, acceleration));

  // Update de la vitesse.
  this->velocite.mult_scalaire(dumping);
  this->velocite.addition(Vecteur3D::mult_scalaire(temps, acceleration));
}
