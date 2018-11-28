#include "redneuronal.h"

RedNeuronal::RedNeuronal(int cantidadCapas, int numerodeneuronas){

    for(int o = 0; o < cantidadCapas; o++){
        Capa *nuevac = new Capa(numerodeneuronas);
        capas->Insertar(nuevac);
        //capas->getI(0)->GetNeuronas().getI(0)->GetConexiones().getI(0);
    }
}
void RedNeuronal::AgregarConexiones(int cantidadCapas,int numerodeNeuronas){

    for(int i = 0; i<cantidadCapas;i++){
        if(i==(cantidadCapas-1)){i=cantidadCapas;}else{
        for(int j = 0; j<numerodeNeuronas;j++){
            for(int k = 0; k < numerodeNeuronas; k++){
                capas->getI(i)->GetNeuronas().getI(j)->AgregarConexion(capas->getI(i+1)->GetNeuronas().getI(k));
            }
        }
     }
     }
}

void RedNeuronal::Entrenar(int cantidadCapas,int numerodeNeuronas){
    for(int i = 0; i<cantidadCapas;i++){
        if(i==(cantidadCapas-1)){i=cantidadCapas;}else{
        for(int j = 0; j<numerodeNeuronas;j++){
            for(int k = 0; k < numerodeNeuronas; k++){
               float aux = 0;
                aux = (capas ->getI(i)->GetNeuronas().getI(j)->GetCarga() + capas->getI(i+1)->GetNeuronas().getI(k)->GetCarga())
                        * capas->getI(i)->GetNeuronas().getI(j)->GetConexiones().getI(k)->GetPeso();
                capas->getI(i+1)->GetNeuronas().getI(k)->SetCarga(aux);
            }
        }
     }
   }
