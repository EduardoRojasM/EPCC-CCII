/* Exercise 2. convertSeconds.cpp
• Write a program that converts a total number of
seconds to hours, minutes, and seconds. 
• It should (1) prompt the user for input, (2) read an
integer from the keyboard, (3) calculate the result, and
(4) use std::cout to display the output. 
Enter the number of seconds to convert: 5000
5000 seconds = 1 hours, 23 minutes, and 20 seconds */

#include <iostream>
 
using namespace std;

int main(){
    int segundos,h,aux,s,m;
    cout<<"Ingrese los segundos para convertir: ";
    cin>>segundos;

    h = segundos/3600;
    aux = segundos - (3600*h);
    m = aux/60;
    s = aux - (60*m);

    cout<<h<<" Horas, "<<m<<" Minutos, y "<<s<<" Segundos.";


    return 0;
}