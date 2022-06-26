/* 4. pila.cpp. Escriba una implementación de pila para un tipo genérico. Se
debe definir el tamaño máximo de la pila. Proporcione las siguientes
funciones:
a) Constructor
b) Destructor si es necesario
c) top: muestra el último elemento
d) pop: retorna el último elemento y lo elimina de la pila
e) push: inserta un nuevo elemento
f) clear: borra todos los elementos
g) size: número de elementos
h) full: comprueba si la pila está llena, y
i) empty: comprueba si la pila está vacía.

Se debe generar una excepción cuando la pila esté llena y se quiera
colocar un nuevo elemento, y también cuando la pila esté vacía y se
quiera obtener un elemento. */

#pragma once
#include "Nodo.h"

class Pila{
    public:
        Nodo *limite;
        int tamanio;
        //Constructor
        Pila();
        //Top
        void Top();
        //Pop
        int Pop();
        //Push
        void Push(int n);
        //Clear
        void Clear();
        //Size
        void Size();
        //Full
        void Full();
        //Empty
        void Empty();
        //Print
        void Print();
};