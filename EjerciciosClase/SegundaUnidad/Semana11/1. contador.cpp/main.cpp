#include "contador.h"

int main(){
    contador c = contador (5);
    contador c2 = contador (1);
    c2.aumentar();
    c.aumentar();
    c.print_cont();
    c2.print_cont();
    c2.tama();
    return 0;
}