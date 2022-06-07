/* • Escriba una función arePrimeFactors que tome un número
entero n y un vector de números enteros, que devuelva true
si los números en el vector son todos primos y su producto
es n. */

#include <iostream>

using namespace std;

bool arePrimeFactors (int n, int vec[]);

int main(){
    int x=567;
    int vector[5] = {7,3,3,3,3};
    if (arePrimeFactors(x,vector)==1){
        cout<<"Verdadero";
    }
    else{
        cout<<"Falso";
    }
    return 0;
}

bool arePrimeFactors (int n, int vec[]){
    int c,d, mult=1;
    for (int i=0;i<5;i++){
        for (int j=2;j<vec[i];j++)
        if (vec[i]%j==0){
            c++;
        }
        if (c==0){
            d++;
        }
        c=0;
    }
    if (d==5){
        for (int i=0;i<5;i++){
            mult = mult * vec[i];
        }
        if (mult == n){
        return true;
        }
        else{
        return false;
        }
    }
    else{
        return false;
    }
}