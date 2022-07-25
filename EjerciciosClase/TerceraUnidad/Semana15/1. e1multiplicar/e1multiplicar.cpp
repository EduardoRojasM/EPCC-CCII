/*
1. e1multiplicar.cpp.
Implemente una función que reciba dos parámetros, una matriz "x" y un
valor, que multiplique los elementos de dicha matriz por ese valor.

int x[3][4][2] = {{{1, 2}, {4, 5}, {7, 8}, {1, 2}},
{{10, 11}, {13, 14}, {16, 17}, {1, 2}},
{{19, 20}, {22, 23}, {25, 26}, {1, 2}}};

La implementación debe funcionar para cualquier tamaño de matriz
tridimensional.
La implementación debe deducir el tamaño para cada dimensión.
Forma de llamar a la función multiplicar(x, 4); significa que cada
elemento de la matriz se multiplicará por 4.
Implemente además una función para imprimir la matriz tridimensional.
*/

#include <iostream>

using namespace std;

//Funcion para imprimir la matriz tridimensional
void imprimir_matriz_tridimensional (int num[][4][2], int x, int y, int z){
    num[x,y,z];
    for (int i=0; i<x; i++){
        for (int j=0; j<y; j++){
            for (int k=0; k<z; k++){
                cout<<num[i][j][k]<<" ";
            }
        }
    }
    cout<<endl;
}

//Funcion para multiplicar cada elemento de la matriz tridimensional por un numero
void multiplicar (int num[][4][2], int x, int y, int z, int por){
    num[x,y,z];
    for (int i=0; i<x; i++){
        for (int j=0; j<y; j++){
            for (int k=0; k<z; k++){
                num[i][j][k] = num[i][j][k] * por;
            }
        }
    }
}

int main(){
    int n,numeros [3][4][2] = 
    {{{1, 2}, {4, 5}, {7, 8}, {1, 2}},
    {{10, 11}, {13, 14}, {16, 17}, {1, 2}},
    {{19, 20}, {22, 23}, {25, 26}, {1, 2}}};

    //Impresion de la matriz normal
    imprimir_matriz_tridimensional(numeros,3,4,2);
    cout<<"Por cuanto desea multiplicar los elementos de la matriz: ";
    cin>>n;

    //Multiplicar los elementos de la matriz por el numero
    multiplicar(numeros,3,4,2,n);

    //Imprimir la matriz luego de la multiplicacion
    imprimir_matriz_tridimensional(numeros,3,4,2);

    return 0;
}