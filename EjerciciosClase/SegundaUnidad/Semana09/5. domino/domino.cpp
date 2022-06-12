/* 5. domino.cpp
Haga una cadena de fichas de dominó.
Calcular una manera de ordenar un conjunto de fichas de dominó de tal
manera que formen una cadena de dominó correcta (los puntos en la mitad
de una ficha coinciden con los puntos en la mitad vecina de una ficha
adyacente) y que los puntos en las mitades de las fichas que no tienen un
vecino (la primera y la última ficha) se emparejan entre sí.
Ejemplo, dadas las fichas [2|1], [2|3] y [1|3], las salidas válidas son [1|2]
[2|3] [3|1] o [3|2] [2 |1] [1|3] o [1|3] [3|2] [2|1] etc., donde el primer y el
último número son iguales.
Para las fichas [1|2], [4|1] y [2|3], la cadena resultante no es válida: el primer
y el último número de [4|1] [1|2] [2|3] no son iguales, 4 != 3 */

#include <iostream>

using namespace std;

int main(){
    int cant, c, x;
    cout<<"Cuantas fichas desea ingresar: ";
    cin>>cant;
    cant = cant*2;
    int f[cant];
    for (int i=0;i<cant;i++){
        x++;
        cout<<"Ingrese la ficha numero "<<x<<": ";
        cin>>f[i]>>f[i+1];
        i++;
    }
    for (int i=0;i<cant;i++){
        for (int j=0;j<cant;j++){
            if(f[j]==f[i+1]){
                c++;
            }
        }
    }
    
    //Si es impar las fichas no pueden unirse entre si
    if(c%2!=0){
        cout<<"Las fichas no se pueden unir.";
    }
    //Si es par las fichas pueden unirse entre si
    else if(c%2==0){
        cout<<"La fichas se pueden unir.";
    }

    return 0;
}