/* 3. robot.cpp
Usted administra una fábrica de robots.
Cuando un robot sale de la fábrica, no tiene nombre.
La primera vez que enciende un robot, se genera un nombre aleatorio en
formato de dos letras mayúsculas seguidas de tres dígitos, como RZ123 o
CD731.
Cuando necesitamos resetear un robot a su configuración de fábrica, su
nombre se borra. De modo que la próxima vez que se le pregunte su nombre,
ese robot responderá con un nuevo nombre aleatorio.
Los nombres de los robot deben ser aleatorios: no deben seguir una
secuencia predecible. El uso de nombres aleatorios implica un riesgo de
colisiones. Su solución debe garantizar que cada robot existente tenga un
nombre único.
Use la cabecera <random>
Pruebe su solución generando 100 robots, luego en un ciclo resetee sus
nombres y asigne nuevos nombre, compruebe que sus nombres siguen
siendo únicos. */

#include <random>
#include <iostream>
#include <string.h>

using namespace std;

int main(){
    random_device rd;
    mt19937 gen(rd());
    int opc, tamanio;
    bool vf=true;
    
    uniform_int_distribution <> numeros(100,999);
    uniform_int_distribution <char> letra1('A','Z');
    uniform_int_distribution <char> letra2('A','Z');

    cout<<"Generar Robots"<<endl;
    cout<<"Cuantos robots desea: ";
    cin>>tamanio;
    int n1[tamanio];
    char l1[tamanio],l2[tamanio];
    for (int i=0; i<tamanio; i++){
        l1[i]=letra1(gen);
        l2[i]=letra2(gen);
        n1[i]=numeros(gen);
    }

    while (vf==true){
    cout<<"Que deseas hacer: "<<endl;
    cout<<"1.Eliminar robot"<<endl;
    cout<<"2.Resetear Robots"<<endl;
    cout<<"3.Mostrar Robots"<<endl;
    cout<<"4.salir"<<endl;
    cin>>opc;

    if (opc==1){
        int num;
        cout<<"Que robot deseas eliminar (numero): ";
        cin>>num;
        //Eliminar nombre
        l1[num] = 0;
        l2[num] = 0;
        n1[num] = 0;
    }
    else if (opc==2){
        for (int i=0; i<tamanio; i++){
            //Generados de nombres
            l1[i]=letra1(gen);
            l2[i]=letra2(gen);
            n1[i]=numeros(gen);
        }
        //Ver si son iguales de nombre
        for (int i=0; i<tamanio; i++){
            int aux=tamanio;
            if (l1[i]==l1[aux]){
                if (l2[i]==l2[aux]){
                    if (n1[i]==n1[aux]){
                        l1[i]=letra1(gen);
                        l2[i]=letra2(gen);
                        n1[i]=numeros(gen);
                        i--;
                    }
                }
            }
            aux--;
        }
        cout<<"Reseteados"<<endl;
    }
    else if (opc==3){
        //Generar nombre nuevo si esta eliminado
        for (int i=0; i<tamanio; i++){
            if (l1[i]==0 && l2[i]==0 && n1[i]==0){
                l1[i]=letra1(gen);
                l2[i]=letra2(gen);
                n1[i]=numeros(gen);
            }
        }
        //Ver si son iguales de nombre
        for (int i=0; i<tamanio; i++){
            int aux=tamanio;
            if (l1[i]==l1[aux]){
                if (l2[i]==l2[aux]){
                    if (n1[i]==n1[aux]){
                        l1[i]=letra1(gen);
                        l2[i]=letra2(gen);
                        n1[i]=numeros(gen);
                        i--;
                    }
                }
            }
            aux--;
        }
        //Imprimir los robots
        for (int i=0;i<tamanio;i++){
        cout<<l1[i]<<l2[i]<<n1[i]<<endl;
        }
    }
    else if (opc==4){
        //Terminar el bule (Programa)
        vf = false;
    }
    }
    return 0;
    }
