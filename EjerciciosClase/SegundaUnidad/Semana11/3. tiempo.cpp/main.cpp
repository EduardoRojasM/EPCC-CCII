#include "tiempo.h"
#include "tiempo.cpp"

int main(){
    tiempo t1 = tiempo(1,2,3);
    tiempo t2 = tiempo(1,2,3); 
    t1.suma(t2);
    return 0;
}
