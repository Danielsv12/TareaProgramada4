 #include "capa.h"

Capa::Capa(int numerodeneuronas ){

    for(int o = 0; o < numerodeneuronas; o++){
        Neurona *nuevan = new Neurona();
        neuronas->Insertar(nuevan);
    }
}

 void Capa::CambioDeCarga(float carga, int x){

        neuronas->getI(x)->SetCarga(carga);
    }

