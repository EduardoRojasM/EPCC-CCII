#include "Pila.h"

//Constructor
Pila::Pila(){
    this->limite = NULL;
    this->tamanio = 0;
}

//Top
void Pila::Top(){
    Nodo *aux = this->limite;
    cout<<aux->dato<<endl;
}

//Pop
int Pila::Pop(){
    Nodo *aux = this->limite;
    if (aux != NULL){
        aux = aux->siguiente;
        this->limite = aux;
        tamanio--;
        return 0;
    }
}

//Push
void Pila::Push(int n){
    Nodo *nuevo = new Nodo();
    nuevo->dato = n;
    nuevo->siguiente = this->limite;
    this->limite = nuevo;
    tamanio++;
}

//Clear
void Pila::Clear(){
    Nodo *aux = this->limite;
    while (aux != NULL){
        aux = aux->siguiente;
        this->limite = aux;
    }
    tamanio = 0;
}

//Size
void Pila::Size(){
    cout<<"El tamanio es: "<<tamanio<<endl;
}

//Full
void Pila::Full(){
    if (tamanio>0){
        cout<<"La pila esta llena."<<endl;
    }
}

//Empty
void Pila::Empty(){
    if (tamanio==0){
        cout<<"La pila esta vacia."<<endl;
    }
}

//Print
void Pila::Print(){
    Nodo *aux = this->limite;
    while(aux != NULL){
        cout<<"Dato: "<<aux->dato<<endl;
        aux = aux->siguiente;
    }  
}


