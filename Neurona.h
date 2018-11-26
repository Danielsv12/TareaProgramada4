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

  float getCarga(){return carga};
   void setCarga(c1){c=c1};
  float getUmbral(){return umbral};
  void  setUmbral(u1){u= u1};
  
  
  



}









#endif
