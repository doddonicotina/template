#ifndef __PILA_CPP__
#define __PILA_CPP__

#include "Pila.h"
using namespace std;

template <typename T>

Pila <T>::Pila(int cap): capacity(cap), size(0){
    cout<<"costruttore default"<<endl;
    ptr = new T[capacity];
}

template <typename T>
Pila <T>::~Pila(){
    cout<<"distruttore"<<endl;
    delete ptr:
    ptr = NULL;
}

template <typename T>
T Pila<T>::pop(){
    T elem;

    if (size)
    {
        elem = ptr[size];
        size--;
    }
    else
    {
        cout<<"Pila is empty"<<endl;
    }

}

template <typename T>
void Pila<T>::push(const T& elem){
    if (size<capacity)
        {
            ptr[size]=elem;
            size++;
        }
        else
        {
            cout<<"Pila is full"<<endl;
        }
}

template <typename T>
int Pila<T>::getSize(){
    return size;
}

#endif