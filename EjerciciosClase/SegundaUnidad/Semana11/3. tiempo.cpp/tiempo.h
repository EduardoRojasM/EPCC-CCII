/* 3. tiempo.cpp. Implemente una clase que maneje tiempos sin fechas, en
formato de 24 horas. Por ejemplo, Tiempo(6, 45, 30) representa 6 horas
con 45 minutos y 30 segundos.
a) Sobrecargue los operadores + y - para sumar y restar tiempos. Por
ejemplo si definimos Tiempo t1(12, 45, 30) y t2(0, 30, 35) la suma t1 +
t2 debe resultar en Tiempo(13, 16, 5)
b) Sobrecargue los operadores de igualdad ==, != y de comparación <, >,
<=, >=
c) Sobrecargue el operador de extracción para mostrar las horas.
d) Implemente métodos adecuados para mostrar las horas en formato
am / pm. */

#pragma once
#include <iostream>

using namespace std;

class tiempo
{
private:
    //horas,minutos,segundos
    int horas [3];
public:
    tiempo(int, int, int);
    ~tiempo();
    void suma (tiempo);
};