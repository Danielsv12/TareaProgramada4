#pragma once
#ifndef CONEXION_H
#define CONEXION_H
#include "neurona.h"
class Neurona;
class Conexion {
public:
    Neurona *nr = nullptr;
    float peso;
    Conexion( Neurona *n);
    float GetPeso(){return peso;}

    void SetPeso(float p){peso = p;}

};
#endif
