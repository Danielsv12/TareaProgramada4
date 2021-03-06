#include "redneuronal.h"
// constructor crea la red neuronal, el usuario manda la cantidad de capas y el numero de neuronas que tendra cada capa.
RedNeuronal::RedNeuronal(int cantidadCapas, int numerodeneuronas){

    for(int o = 0; o < cantidadCapas; o++){
        Capa *nuevac = new Capa(numerodeneuronas);
        capas->Insertar(nuevac);
        //capas->getI(0)->GetNeuronas().getI(0)->GetConexiones().getI(0);
    }
}
//Este metodo conecta cada neurona de cada capa con las neuronas de la capa siguiente.
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

// metodo principal, entrena la red neuronal.
void RedNeuronal::Entrenar(int cantidadCapas,int numerodeNeuronas, float datoEsperado){

    for(int i = 0; i<cantidadCapas;i++){
        if(i==(cantidadCapas-1)){i=cantidadCapas;}else{
        for(int j = 0; j<numerodeNeuronas;j++){
            for(int k = 0; k < numerodeNeuronas; k++){
               float aux = 0;
               if(capas ->getI(i)->GetNeuronas().getI(j)->GetCarga() > capas->getI(i+1)->GetNeuronas().getI(k)->GetUmbral()
                       ){
                aux = (capas ->getI(i)->GetNeuronas().getI(j)->GetCarga() * capas->getI(i+1)->GetNeuronas().getI(k)->GetCarga())
                        + capas->getI(i)->GetNeuronas().getI(j)->GetConexiones().getI(k)->GetPeso();
                capas->getI(i+1)->GetNeuronas().getI(k)->SetCarga(aux);}else{}
            }



        }
     }
   }
    float erroraux;
    for(int l = 0; l<cantidadCapas;l++){

 erroraux += ((capas->getI(cantidadCapas-1)->GetNeuronas().getI(l)->GetCarga()- datoEsperado)+1);

    }
    this->setError(erroraux);


}
// cambia los pesos de cada conexion en base al nuevo error.
void RedNeuronal::Retropropagar( int cantidadCapas,int numerodeNeuronas){

    for(int i = 0; i<cantidadCapas;i++){
        if(i==(cantidadCapas-1)){i=cantidadCapas;}else{
        for(int j = 0; j<numerodeNeuronas;j++){
            for(int k = 0; k < numerodeNeuronas; k++){
                float aux1;
                aux1 = capas ->getI(i)->GetNeuronas().getI(j)->GetConexiones().getI(k)->GetPeso();
                capas ->getI(i)->GetNeuronas().getI(j)->GetConexiones().getI(k)->SetPeso(aux1*this->getError());
            }

}

}}}
