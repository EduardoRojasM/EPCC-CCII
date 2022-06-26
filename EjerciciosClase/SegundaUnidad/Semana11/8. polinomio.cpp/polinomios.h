/* 8. polinomio.cpp. Escribe una clase genérica para polinomios que al menos
debe contener:
a) Un constructor que reciba el grado del polinomio
b) Un array dinámico/vector/lista de tipo T para almacenar los
coeficientes
c) Un destructor
d) Un operador de salida para ostream
e) Operadores sobrecargados para operaciones aritméticas entre
polinomios. */

#pragma once
#include <iostream>

using namespace std;

template <class T> 
class polinomios
{
private:
    int grado;  
public:
    T *coeficientes;
    polinomios(int);
    ~polinomios();
    void mostrar_crear();
    void resolver();
};




