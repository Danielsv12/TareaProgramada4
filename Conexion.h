#ifndef CONEXION_H
#define CONEXION_H
#include "Neurona.h"

class Conexión {
	float peso ;
	void Conexión(neurona n, float peso);
		void setPeso(float p){peso = p;}
};
#endif
