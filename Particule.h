#ifndef PARTICULE_H
#define PARTICULE_H

#include <iostream>
#include "Vecteur3D.h"

#define GRAVITE 10
#define FRAME 30


class Particule {
public:
  Particule(float masse, float dumping, Vecteur3D position);
  ~Particule();

  void integrer();

  float getInverseMasse() const {return inverseMasse;}
  void setInverseMasse(double inverseMasse) {this->inverseMasse = inverseMasse;}

protected:
  float inverseMasse;

private:
  float masse;
  float dumping;
  Vecteur3D velocite;
  Vecteur3D position;


};
#endif
