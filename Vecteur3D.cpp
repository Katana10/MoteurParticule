#include "Vecteur3D.h"

Vecteur3D::Vecteur3D(float x=0, float y=0, float z=0){
  this->x=x;
  this->y=y;
  this->z=z;
}

Vecteur3D::~Vecteur3D(){
}

float Vecteur3D::norme(){
  return sqrt(pow(this->x,2)+pow(this->y,2)+pow(this->z,2));
}

float Vecteur3D::norme(Vecteur3D u){
  return sqrt(pow(u.x,2)+pow(u.y,2)+pow(u.z,2));
}

float Vecteur3D::squareNorme(Vecteur3D u){
  float norme1=sqrt(pow(u.x,2)+pow(u.y,2)+pow(u.z,2));
  return norme1*norme1;
}

Vecteur3D Vecteur3D::normalisation(Vecteur3D u){
  float norme=u.norme();
  return Vecteur3D(u.x/norme, u.y/norme, u.z/norme);
}

void Vecteur3D::mult_scalaire(float k){

  this->x*=k;
  this->y*=k;
  this->z*=k;

}

Vecteur3D Vecteur3D::mult_scalaire(float k, Vecteur3D u){
  Vecteur3D a=Vecteur3D(0,0,0);
  a.x=u.x*k;
  a.y=u.y*k;
  a.z=u.z*k;

  return a;
}


void Vecteur3D::addition(Vecteur3D u){
  this->x+=u.x;
  this->y+=u.y;
  this->z+=u.z;
}

void Vecteur3D::soustraction(Vecteur3D u){
  this->x-=u.x;
  this->y-=u.y;
  this->z-=u.z;
}
void Vecteur3D::prod_composantes(Vecteur3D u){

}
float Vecteur3D::prod_scalaire(Vecteur3D u, Vecteur3D v){
  return (u.x*v.x + u.y*v.y + u.z*v.z);
}

Vecteur3D Vecteur3D::prod_vectoriel(Vecteur3D u, Vecteur3D v){
  Vecteur3D a=Vecteur3D(0,0,0);
  a.x=u.y*v.z - u.z*v.y;
  a.y=u.z*v.x - u.x*v.z;
  a.z=u.x*v.y - u.y*v.x;
  return a;
}
