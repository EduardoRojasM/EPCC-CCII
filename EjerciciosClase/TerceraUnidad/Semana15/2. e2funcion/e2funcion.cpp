/*
2. e2funcion.cpp.
Escriba una función de tal forma que usted pueda invocar a cualquiera de
las funciones siguientes.

float sumafi(float a, int b) {
return a + b;
}
double restalf(float a, double b) {
return a - b;
}
long multiplicaid(int a, long b) {
return a * b;
}

Forma de llamar a la función:
funcion(sumafi, 4.0f, 5);
funcion(restalf, 4.0f, 5.0);
funcion(multiplicaid, 4, 5L);
*/

#include <iostream>

using namespace std;

float sumafi(int a, float b) {
    return a + b;
}

double restalf(float a, double b) {
    return a - b;
}

long multiplicaid(int a, long b) {
    return a * b;
}

template <class A, class B>
B funcion(B (func)(A, B),A a, B b){
    return func(a,b);
}

int main(){
    //Llamada de la funciones
    funcion(sumafi, 5, 4.0f);
    funcion(restalf, 4.0f, 5.0);
    funcion(multiplicaid, 4, 5L);
    //Comprobacion imprimiendo
    cout<<funcion(sumafi, 5, 4.0f)<<endl;
    cout<<funcion(restalf, 4.0f, 5.0)<<endl;
    cout<<funcion(multiplicaid, 4, 5L)<<endl;

    return 0;
}