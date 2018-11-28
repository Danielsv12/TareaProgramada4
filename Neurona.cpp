#include "neurona.h"
#include "conexion.h"

void Neurona::  AgregarConexion(Neurona *r){
Conexion *c1 = new Conexion(r);
   conexiones ->Insertar(c1);
}
