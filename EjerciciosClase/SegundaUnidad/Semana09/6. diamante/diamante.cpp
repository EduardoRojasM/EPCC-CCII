/* 6. diamante.cpp
El programa diamante toma como entrada una letra y la muestra en forma
de diamante. Dada una letra, imprime un diamante que comienza con 'A',
con la letra proporcionada en el punto más ancho.
Requisitos
* La primera fila contiene una 'A'.
* La última fila contiene una 'A'.
* Todas las filas, excepto la primera y la última, tienen exactamente dos
letras idénticas.
* Todas las filas tienen tantos espacios finales como espacios iniciales. (Esto
podría ser 0).
* El diamante es simétrico horizontalmente.
* El diamante es verticalmente simétrico.

* El diamante tiene una forma cuadrada (el ancho es igual a la altura).
* Las letras forman una forma de diamante.
* La mitad superior tiene las letras en orden ascendente.
* La mitad inferior tiene las letras en orden descendente.
* Las cuatro esquinas (que contienen los espacios) son triángulos.
En los ejemplos, los espacios se indican mediante ·.
Diamante para la letra 'A':
A
Diamante para la letra 'C':
··A··
·B·B·
C···C
·B·B·
··A··
Diamante para la letra 'E':
····A····
···B·B···
··C···C··
·D·····D·
E·······E
·D·····D·
··C···C··
···B·B···
····A····
Utilice la cabecera <sstream> para crear el diamante, luego utilice una
función adicional para mostrar el diamante. */

#include <iostream>
#include <sstream>

using namespace std;

int main(){
    char le, aux;
    int impar = 1;
    char a = 'A';
    cout<<"Ingrese que letra desee: ";
    cin>>le;
    aux = le-a;
    
    //Impresion de A
    for (int i=0;i<aux;i++){
        cout<<".";
    }
    cout<<a;
    for (int i=0;i<aux;i++){
        cout<<".";
    }
    cout<<endl;

    //Impresion hasta la mitad
    while(a!=le){
    aux--;
    a = a+1;
    for (int i=0;i<aux;i++){
        cout<<".";
    }
    cout<<a;
    for (int i=0;i<impar;i++){
        cout<<".";
    }
    cout<<a;
    for (int i=0;i<aux;i++){
        cout<<".";
    }
    impar = impar+2;
    cout<<endl;
    }

    a = a-1;
    impar = impar-2;

    //Impresion de la mitad para abajo
    while(a!=65){
    impar = impar-2;
    aux++;
    
    for (int i=0;i<aux;i++){
        cout<<".";
    }
    cout<<a;
    for (int i=0;i<impar;i++){
        cout<<".";
    }
    cout<<a;
    for (int i=0;i<aux;i++){
        cout<<".";
    }
    a = a-1;
    cout<<endl;
    }

    //Impresion de A de la parte inferior
    aux = aux+1;
    for (int i=0;i<aux;i++){
        cout<<".";
    }
    cout<<a;
    for (int i=0;i<aux;i++){
        cout<<".";
    }
    cout<<endl;

    return 0;
}