#ifndef VECTEUR3D_H
#define VECTEUR3D_H

#include <iostream>
#include <cstdlib>
#include <unistd.h>
#include <cmath>


class Vecteur3D {
public:
	// Constructeur � 1 argument
	Vecteur3D(float x, float y, float z);
	// Destructeur
	~Vecteur3D();

	// accesseurs (getters) "inline"
  float norme();
	static float norme(Vecteur3D u);
  float squareNorme(Vecteur3D u);
  static Vecteur3D normalisation(Vecteur3D u);

  void mult_scalaire(int k, Vecteur3D u);
  void addition(Vecteur3D u);
  void soustraction(Vecteur3D u);

  void prod_composantes(Vecteur3D u);
  static float prod_scalaire(Vecteur3D u, Vecteur3D v);
  static Vecteur3D prod_vectoriel(Vecteur3D u, Vecteur3D v);

private:
	float x,y,z;


};
#endif
