/* 1. histogramaTemplate.cpp
Escriba una clase usando templates que tome una colección de elementos
como parámetro. La clase debe tener un método que devuelva el histograma
de los elementos de la colección. El método histograma debe aceptar un
parámetro que indique en cuantos intervalos agrupar a los elementos de la
colección. La clase debe tener además un método para imprimir el
histograma. Ejemplo: Dada la colección de enteros {10, 2, 9, 7, 5, 6, 1, 8, 8, 4}
y con el número de intervalos igual a 5, el histograma debe retornar 2 1 2 2 3 */

#include <iostream>

using namespace std;

template <class T>
class Histograma
{
protected:
    int tamanio = 10;
    int aux, inter;
    T vec[];
public:
    Histograma(T,T,T,T,T,T,T,T,T,T);
    ~Histograma();
    void imprimir();
    void histograma();
};

template <class T>
Histograma<T>::Histograma(T avec,T bvec,T cvec,T dvec,T evec,T fvec,T gvec,T hvec,T ivec,T jvec)
{
    vec[0] = avec;
    vec[1] = bvec;
    vec[2] = cvec;
    vec[3] = dvec;
    vec[4] = evec;
    vec[5] = fvec;
    vec[6] = gvec;
    vec[7] = hvec;
    vec[8] = ivec;
    vec[9] = jvec;
}

template <class T>
Histograma<T>::~Histograma()
{
}

template <class T>
void Histograma<T>::imprimir()
{
    cout<<"Dada la coleccion de enteros {"<<vec[0]<<", "<<vec[1]<<", "<<vec[2]<<", "<<vec[3]<<", "<<
    vec[4]<<", "<<vec[5]<<", "<<vec[6]<<", "<<vec[7]<<", "<<vec[8]<<", "<<vec[9]<<"}";
    cout<<" y con el numero de intervalos igual a "<<inter<<", el histograma es: "<<endl;
    int aux2=0,aux3=0, aux4;
    for(T i=aux; i<=tamanio; i++){
        aux2=0;
        for (T j=0; j<tamanio; j++){
            if (i>=vec[j]){
                aux2++;
            }
        }
        if(aux2>2){
            aux4 = aux3;
            cout<<aux2-aux4<<" ";
        }
        else{
            cout<<aux2<<" ";
        }
        aux3=aux2;
        i++;   
    }
}

template <class T>
void Histograma<T>::histograma(){
    cout<<"Cuantos intervalos deseas usar: ";
    cin>>inter;
    aux = tamanio/inter;   
}

int main(){
    int vect[10] = {10, 2, 9, 7, 5, 6, 1, 8, 8, 4};
    Histograma <int> Histograma1(vect[0],vect[1],vect[2],vect[3],vect[4],vect[5],vect[6],vect[7],vect[8],vect[9]);
    Histograma1.histograma();
    Histograma1.imprimir();
    return 0;
}