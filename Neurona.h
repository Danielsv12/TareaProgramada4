#pragma once
#ifndef NEURONA_H
#define NEURONA_H
#include "conexion.h"
#include "lista.h"
#include <QTime>
class Conexion;
class Neurona{
public:


float umbral = qrand();
float carga = qrand();
  Lista<Conexion*> *conexiones;
  Neurona* siguiente;


  Neurona (){
    carga /= RAND_MAX;
    umbral /= RAND_MAX;
      siguiente = nullptr;
  }
  void SetCarga(float c1){carga=c1;}
  float GetCarga(){ return carga;}
  float GetUmbral(){return umbral;}
  void AgregarConexion(Neurona *r);
  

  Lista<Conexion*> GetConexiones(){
     return *conexiones;
}


};


#endif









