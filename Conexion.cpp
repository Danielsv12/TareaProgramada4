#include "conexion.h"
#include <QTime>

Conexion::Conexion(Neurona *n){

       nr = n;
       peso = qrand();
       peso/=RAND_MAX;
    }
