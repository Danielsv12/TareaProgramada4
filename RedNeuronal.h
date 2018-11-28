#ifndef REDNEURONAL_H
#define REDNEURONAL_H
#include "lista.h"
#include "capa.h"

class RedNeuronal{
    float datos;
    Lista <Capa*> *capas ;
public:

    RedNeuronal(int cantidadCapas, int numerodeneuronas);
    //void AgregarCapa(int cNeuronas) ;
    void Entrenar(int cc, int cn) ;
    void AgregarConexiones(int cCapas, int cNeuronas);
};

#endif // REDNEURONAL_H
