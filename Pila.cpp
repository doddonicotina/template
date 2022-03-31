#ifndef __PILA_CPP__
#define __PILA_CPP__
#include <iostream>
#include "Pila.h"

template <typename T>

Pila <T>::Pila(int cap): capacity(cap), size(0){
    std::cout<<"costruttore parametrico \n";
    ptr = new T[capacity];
    
    if (!ptr){
    	std::cout<<"Error allocating memory \n";
	}
}

template <typename T>
Pila<T>::~Pila(){
    std::cout<<"distruttore \n";
    delete[] ptr;
    ptr = NULL;
}

template <typename T>
T Pila<T>::pop(){
    T elem;

    if (size)
    {
        elem = ptr[size-1];
        size--;
    }
    else
    {
        std::cout<<"Pila is empty \n";
    }
		return elem;
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
            std::cout<<"Pila is full \n";
        } 
        
}

template <typename T>
int Pila<T>::getSize(){
    return size;
}

template <typename T>
bool Pila<t>::isFull(){
	if (size==capacity){
		return true;
	}
	return false;
}

template <typename T>
bool Pila<t>::isEmpty(){
	if (size==0){
		return true;
	}
	return false;
}


#endif
