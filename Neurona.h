#ifndef NEURONA_H
#define NEURONA_H
#include "Lista.h"
#include "Conexion.h"
class Neurona{

float umbral;
float carga;
  Lista<Conexiones>;
  Neurona * siguiente;
  
public:
   {
Neurona( float u , float c){}     
        umbral= u ;
        carga = c;
        siguiente= nullptr;
    }

  



}









#endif
