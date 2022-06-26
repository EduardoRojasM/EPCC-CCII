/* 1. contador.cpp. Implemente una clase Contador que represente un
contador de enteros simple. La clase debe satisfacer los siguientes
requisitos:
a) Proporcione un constructor que tome un solo argumento int que se
use para inicializar el valor del contador. El argumento debe ser cero
por defecto.
b) Sobrecarge los operadores de incremento prefijo y de incremento
posfijo para proporcionar un medio por el cual incrementar el valor
del contador.
c) Proporcione una función miembro valor() que devuelva el valor actual
del contador.
d) Además, la clase debe saber cuántos objetos Contador existen
actualmente. Proporcione una interfaz para consultar este valor. El
código no debe utilizar ninguna variable global. Use miembros
estáticos. */

#pragma once
#include <iostream>

using namespace std;

class contador
{
private:
    int cont;
public:
    int tamanio = 0;
    contador(int);
    ~contador();
    void tama();
    void aumentar();
    void print_cont();
};

contador::contador(int _cont)
{
    tamanio = tamanio + 1;
    cont = _cont;
}

contador::~contador()
{
}

void contador::tama(){
    cout<<"Se ha creado: "<<tamanio<<endl;
}

void contador::aumentar(){
    cont++;
}

void contador::print_cont(){
    cout<<"Contador en: "<<cont<<endl;
}



