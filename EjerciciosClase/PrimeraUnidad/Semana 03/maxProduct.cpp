/* Producto máximo de dos números en una secuencia
• Dada una secuencia de n números no negativos y mayores que cero. 
• El objetivo es encontrar el mayor número que se pueda 
  obtener multiplicando dos números de esta secuencia.
• Usando un bucle for */

#include <iostream>

using namespace std;

int main(){
    int maxpro,aux;
    int numeros[10] = {8,1,6,3,4,10,3,9,14,2};
    for (int i=0; i<10; i++){
        for (int j=9; j>i; j--){
            aux = numeros[i]*numeros[j];
            if (maxpro<aux){
                maxpro = aux;
            }
        }
    }
    cout<<"El producto maximo de la secuencia es: "<<maxpro<<endl;
    return 0;
}