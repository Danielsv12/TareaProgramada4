#ifndef CAPA_H
#define CAPA_H

#include "lista.h"
#include "neurona.h"

class Capa {

Lista <Neurona*> *neuronas;
public:

Capa(int neuronas);
//void AgregarNeurona(Neurona n);


void CambioDeCarga(float carga, int x);

 Lista <Neurona*> GetNeuronas(){
    return *neuronas;

}



};
#endif
