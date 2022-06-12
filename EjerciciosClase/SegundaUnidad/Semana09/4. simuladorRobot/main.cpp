#include "simuladorRobot.h"
#include "simuladorRobot.cpp"

int main(){
    string cadena = "DAAIAI";
    int plano[2]={7,3};
    Robot r1 = Robot(cadena,plano[0],plano[1]);
    r1.movimiento();
    r1.resultado();
    
    return 0;
}