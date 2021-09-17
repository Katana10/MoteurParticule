#ifndef PARTICULE_H
#define PARTICULE_H

#include <iostream>
#include "Vecteur3D.h"

class Particule {
public:
  Particule(double masse, int velocite);
  ~Particule();

  void integrer(float temps);

  double getInverseMasse() const {return inverseMasse;}
  void setInverseMasse(double inverseMasse) {this->inverseMasse = inverseMasse;}

protected:
  double inverseMasse;

private:
  double masse;
  int velocite;
  float temps;

};
#endif
