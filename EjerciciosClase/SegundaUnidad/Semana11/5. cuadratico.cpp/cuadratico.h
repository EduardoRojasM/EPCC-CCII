/* 5. cuadrático.cpp. Desarrolle una clase Cuadrática que represente una
función de la forma f(x) = ax

2 + bx + c, donde x es un variable real
y a, b, c son constantes reales. La clase debe cumplir con los siguientes
requisitos:
a) Proporcione un constructor que tome los valores de a, b y c como
argumentos. Estos argumentos deben ser cero por defecto.
b) La clase debe proporcionar constructor copia y operador de
asignación
c) Proporcione el operador de llamada a función que tome un solo
argumento x y devuelva el valor f(x). */

#include <iostream>
#include <math.h>
#pragma once

using namespace std;

class cuadratico
{
private:
    int a,b,c;
public:
    cuadratico(int, int, int);
    ~cuadratico();
    void resolver(int x);
};