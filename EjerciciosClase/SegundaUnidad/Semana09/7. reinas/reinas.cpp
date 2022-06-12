/* 7. reinas.cpp
Dada la posición de dos reinas en un tablero de ajedrez, indicar si están o no
colocadas de modo que puedan atacarse entre sí.
En el juego de ajedrez, una reina puede atacar piezas que están en la misma
fila, columna o diagonal.
Un tablero de ajedrez se puede representar mediante una matriz de 8 por 8.
Utilice vector de vectores para implementar la matriz.
Entonces, si le dicen que la reina blanca está en (2, 3) y la reina negra en (5,
6), entonces sabrá que tiene una configuración como esta:
_ _ _ _ _ _ _ _
_ _ _ _ _ _ _ _
_ _ _ B _ _ _ _
_ _ _ _ _ _ _ _
_ _ _ _ _ _ _ _
_ _ _ _ _ _ N _
_ _ _ _ _ _ _ _
_ _ _ _ _ _ _ _

Debe responder si las reinas pueden atacarse entre sí. En este ejemplo, la
respuesta es sí, porque ambas piezas comparten una diagonal. */

#include <iostream>

using namespace std;

int main(){
    //Tabla tamaño
    int tabla[8][8];

    //Auxiliares para las diagonales
    int auxX=0, auxY=0, x=0;

    //Rellenar tabla de 0
    for (int i=0;i<8;i++){
        for (int j=0;j<8;j++){
            tabla[j][i] = 0;
        }
    }

    //Dama Blanca
    int xB = 2;
    int yB = 3;

    //Dama Negra
    int xN = 5;
    int yN = 6;

    //Para la fila 
    if (xB == xN){
        cout<<"Si, porque ambas piezas comparten una fila.";
    }

    //Para la columna
    if (yB == yN){
        cout<<"Si, porque ambas piezas comparten una columna.";
    }

    //Para las diagonales
    auxX = xB;
    auxY = yB;

    //1er Caso + / + 
    if (x==0){
        while (auxX<7 or auxY<7){
        auxX++;
        auxY++;
        if (tabla[xN][yN] == tabla[auxX][auxY]){
            cout<<"Si, porque ambas piezas comparten una diagonal.";
            x++;
            break;
            }
        }
    }

    auxX = xB;
    auxY = yB;

    //2do Caso - / -
    if (x==0){
        while(auxX>1 or auxY>1){
        auxX--;
        auxY--;
        if (tabla[xN][yN]==tabla[auxX][auxY]){
            cout<<"Si, porque ambas piezas comparten una diagonal.";
            x++;
            break;
            }
        }
    }
    auxX = xB;
    auxY = yB;
    //3er Caso + / -
    if (x==0){
    while(auxX>1 or auxY>1 or auxX<7 or auxY<7){
        auxX++;
        auxY--;
        if (tabla[xN][yN]==tabla[auxX][auxY]){
            cout<<"Si, porque ambas piezas comparten una diagonal.";
            x++;
            break;
            }
        }
    }    
    auxX = xB;
    auxY = yB;
    //4to Caso - / +   
    if (x==0){
        while(auxX>1 or auxY>1 or auxX<7 or auxY<7){
        auxX--;
        auxY++;
        if (tabla[xN][yN]==tabla[auxX][auxY]){
            cout<<"Si, porque ambas piezas comparten una diagonal.";
            x++;
            break;
            }
        }
    }

    return 0;
}