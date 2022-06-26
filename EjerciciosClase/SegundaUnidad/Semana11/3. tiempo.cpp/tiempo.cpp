#include "tiempo.h"

tiempo::tiempo(int _horas, int _minutos, int _segundos)
{
    horas[0] = _horas;
    horas[1] = _minutos;
    horas[2] = _segundos;
}

tiempo::~tiempo()
{
}

void tiempo::suma(tiempo){
    for(int i=0;i<3;i++){
        horas[i] = horas[i] + horas[i];
    }
}

