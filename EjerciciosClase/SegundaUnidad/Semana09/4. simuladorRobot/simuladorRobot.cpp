#include "simuladorRobot.h"

Robot::Robot(string _instru, int _plano, int _plano2)
{
    instru = _instru;
    plano[0] = _plano;
    plano[1] = _plano2;
}

Robot::~Robot()
{
}

void Robot::movimiento(){
    //Empieza mirando a la derecha  
    int tamanio = instru.length();
    aux=4;
    for (int i=0; i<tamanio; i++){
        if (instru[i]=='D'){
            if (aux==4){
                aux=3;
            }
            else if (aux==3){
                aux=2;
            }
            else if (aux==2){
                aux=1;
            }
            else if(aux==1){
                aux=4;
            }
        }
        else if(instru[i]=='I'){
            if (aux==4){
                aux=1;
            }
            else if (aux==1){
                aux=2;
            }
            else if (aux==2){
                aux=3;
            }
            else if(aux==3){
                aux=4;
            }
        }
        if (instru[i]=='A'){
            if(aux==1){
                plano[0] = plano[0] - 1;
            }
            else if(aux==2){
                plano[1] = plano[1] - 1;
            }
            else if(aux==3){
                plano[0] = plano[0] + 1;
            }
            else if(aux==4){
                plano[1] = plano[1] + 1;
            }
        }
    }
}

void Robot::resultado(){
   
    
    cout<<plano[0]<<" - "<<plano[1]<<" ";
    if (aux==1){
        cout<<"Mirando hacia el oeste";
    }
    else if (aux==2){
        cout<<"Mirando hacia el norte";
    }
    else if (aux==3){
        cout<<"Mirando hacia el este";
    }
    else if (aux==4){
        cout<<"Mirando hacia el sur";
    }
}