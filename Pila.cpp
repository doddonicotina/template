#ifndef __PILA_CPP__
#define __PILA_CPP__

#include "Pila.h"

template <typename T>

Pila <T>::Pila(int cap): capacity(cap), size(0){
    cout<<"costruttore default"<<endl;
    ptr = new T[capacity];
}


#endif