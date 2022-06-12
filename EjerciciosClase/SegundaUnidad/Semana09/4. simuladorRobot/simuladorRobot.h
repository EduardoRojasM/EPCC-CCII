/* 4. simuladorRobot.cpp
Escribir un simulador de robot.
Una fábrica de robots necesita un programa para verificar los movimientos de sus robots.
Los robots tienen tres posibles movimientos:
* (D) Girar a la derecha
* (I) Girar a la izquierda
* (A) Avanzar una posición
Los robots se colocan en un plano cartesiano infinito (hipotético), mirando en una dirección particular
(norte, este, sur u oeste) en un punto {x, y}.
Luego, el robot recibe una serie de instrucciones

La cadena de letras "DAAIAI" significa:
* Gire a la derecha
* Avanzar dos veces
* Gire a la izquierda
* Avanzar una vez
* Gire a la izquierda una vez más
Digamos que un robot comienza en {7, 3} mirando hacia el norte. Luego de ejecutar este flujo de
instrucciones debería dejarlo en {9, 4} mirando al oeste.
Cree una clase robot con los atributos y métodos adecuados. */

#include <iostream>
#include <string.h>
#pragma once

using namespace std;


class Robot
{
protected:
    string instru;
    int plano[2];
    int aux;
    
public:
    Robot(string,int,int);
    ~Robot();
    void movimiento();
    void resultado();
};
