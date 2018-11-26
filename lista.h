#ifndef LISTA_H
#define LISTA_H
#include <iostream>
#include <NodoLista.h>
template <class T>
class Lista {
    NodoLista<T> *cabeza ;
public:
    Lista<T>(){ cabeza= nullptr ;}

    void Insertar(T dato) {
        
        
        NodoLista<T>n = new NodoLista<T>(dato) ;
        NodoLista<T>*t = cabeza ;
        NodoLista<T>* aux = cabeza;
        if(t==nullptr){
        cabeza = n;
        }else{
        while(t!= nullptr){
        t = t-> getSiguient();
        if(t != nullptr){
         aux = aux->getSiguiente;
        }
            aux->setSiguiente(dato);
        
        }
        
        }
        
    }

    int Longitud() {
        NodoLista<T> *n= cabeza ;
        int c=0 ;
        while (n!=nullptr){
            c++;
            n= n->getSiguiente();
        }
        return c;
    }

    T getI(int i) {
        NodoLista<T> *n= cabeza ;
        int c=0 ;
        while (n!=nullptr&& c<i){
            c++;
            n= n->getSiguiente();
        }
        return n!=nullptr?n->getDato():nullptr;
    }

};
#endif
