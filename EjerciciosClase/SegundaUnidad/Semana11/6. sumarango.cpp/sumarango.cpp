/* 6. sumarango.cpp. Escriba una función template que tome un único
parámetro de tipo T y que acepte cuatro argumentos: un array de tipo T,
un índice de inicio, un índice de finalización (inclusivo) y un valor inicial
opcional. La función debe devolver la suma de todos los elementos del
array en el rango especificado y el valor inicial. */

#include <iostream>

using namespace std;

template <class T>
T sumarango (T*,T,T);
//Con valor Inicial opcional
template <class T>
T sumarango (T*,T,T,T);

int main(){
    int *numeros=NULL;
    sumarango(numeros,1,5);
    //Añadiendo el valor inicial opcional
    sumarango(numeros,1,8,10);
    return 0;
}

template <class T>
T sumarango (T *array,T ind_ini,T ind_fin){
    T suma_total = 0;
    T aux;

    int tamanio = ind_fin - ind_ini;

    ind_fin = ind_fin-1;

    aux = ind_ini;
    array = new T[tamanio];

    for (int i=0;i<tamanio;i++){
        aux = aux + 1;
        array[i] = aux;
    }

    for (int i=0;i<tamanio;i++){
        suma_total = suma_total + array[i];
    }
    cout<<"La suma de los valores es: "<<suma_total<<endl;
    cout<<endl;
}

//Con valor Inicial opcional
template <class T>
T sumarango (T *array,T ind_ini,T ind_fin, T valor_ini){
    T suma_total = 0;
    T aux;

    int tamanio = ind_fin - ind_ini;

    ind_fin = ind_fin-1;

    aux = ind_ini;
    array = new T[tamanio];

    for (int i=0;i<tamanio;i++){
        aux = aux + 1;
        array[i] = aux;
    }

    for (int i=0;i<tamanio;i++){
        suma_total = suma_total + array[i];
    }
    cout<<"La suma de los valores es: "<<suma_total<<endl;
    cout<<"El valor inicial es: "<<valor_ini<<endl;
    cout<<endl;
}