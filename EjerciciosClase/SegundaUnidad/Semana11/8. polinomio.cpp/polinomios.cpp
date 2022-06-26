#include "polinomios.h"
#include <math.h>

template <class T> 
polinomios<T>::polinomios(int _grado)
{
    grado = _grado;
}

template <class T> 
polinomios<T>::~polinomios()
{
}

template <class T> 
void polinomios<T>::mostrar_crear(){
    cout<<"Ingrese los "<<grado<<" coeficientes: "<<endl;
    coeficientes = new T[grado+1];
    for (int i=0; i<grado+1; i++){
        cout<<"Ingrese el coeficiente "<<i+1<<": ";
        cin>>coeficientes[i];
    }
    int aux = grado;
    for (int i=0; i<=grado; i++){
        if (aux > 0)
        cout<<coeficientes[i]<<"x sobre "<<aux<<" + ";
        else if (aux == 0)
        cout<<coeficientes[i]<<endl;
        aux--;
    }
}

template <class T> 
void polinomios<T>::resolver(){
    int x;
    cout<<"En el polinimio x seria:  ";
    cin>>x;
    float respuesta = 0;
    int aux = grado;
    for (int i=0; i<=grado; i++){
        respuesta = respuesta + (coeficientes[i] * pow(x,aux));
        aux--;
    }
    cout<<"La respuesta es: "<<respuesta<<endl;
}