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

  float getCarga(){return carga;}
   void setCarga(float c1){carga=c1;}
  float getUmbral(){return umbral;}
  void  setUmbral(float u1){umbral= u1;}
  
  
  



}









#endif
