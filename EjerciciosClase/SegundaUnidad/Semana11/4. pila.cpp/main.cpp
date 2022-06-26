#include "Pila.h"
#include "Pila.cpp"
#include "Nodo.h"
#include "Nodo.cpp"

int main(){
    Pila p1 = Pila();
    p1.Push(1);
    p1.Push(2);
    p1.Push(3);
    p1.Push(4);
    p1.Push(5);
    cout<<"Imprime toda la pila"<<endl;
    p1.Print();
    p1.Pop();
    cout<<"Imprime la pila eliminando el ultimo"<<endl;
    p1.Print();
    cout<<"Imprime el ultimo elemento"<<endl;
    p1.Top();
    p1.Size();
    p1.Full();
    //Borrar todo
    p1.Clear();
    p1.Empty();
    return 0;
}