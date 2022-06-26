#include "polinomios.h"
#include "polinomios.cpp"

#include <iostream>

using namespace std;

int main(){
    int grado = 5;
    polinomios <int> pl(grado);
    pl.mostrar_crear();
    pl.resolver();
    return 0;
}