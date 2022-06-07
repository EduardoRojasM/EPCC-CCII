/* Exercise 1. convertTemperature.cpp
• Write a program that converts a temperature from Celsius
to Fahrenheit. 
• It should (1) prompt the user for input, (2) read a double
value from the keyboard, (3) calculate the result, and (4)
format the output to one decimal place. When it’s finished,
it should work like this:
Enter a temperature in Celsius: 24
24.0 C = 75.2 F
• Formula to do the conversion:
F = C × 9 / 5 + 32 */

#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    double cel,fah;
    cout<<"******DE CELSIUS A FAHRENHEIT******"<<endl;
    cout<<"Ingrese una temperatura en celsius: ";
    cin>>cel;
    fah = cel * 9 / 5  + 32;
    cout<<"Su temperatura ingresada en Fahrenheit es: "<< setprecision(1) << fixed <<fah<<" F";

    return 0;
}