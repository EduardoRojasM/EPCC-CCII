/* Exercise 3. guessMyNumber.cpp
• The goal of this exercise is to program a Guess My Number game. When it’s finished, it should work like this:
I'm thinking of a number between 1 and 100 (including both). Can you guess what it is?
Type a number: 45
Your guess is: 45
The number I was thinking of is: 14
You were off by: 31
• To choose a random number, use the random library of C++
<random> https://en.cppreference.com/w/cpp/numeric/random */

#include <iostream>
#include <random>

using namespace std;

int main(){
    int num,x;
    cout<<"Estoy pensando en un número entre 1 y 100 (incluyendo ambos). Puedes adivinar cual es?"<<endl;
    cout<<"Escriba un numero: ";
    cin>>num;
    cout<<"Tu numero es: "<<num<<endl;
    x = 1+rand()%(101-1);
    cout<<"En el que yo pensaba es: "<<x<<endl;
    if(num>x)
    cout<<"Estuviste lejos por: "<<num-x;
    else if (num<x)
    cout<<"Estuviste lejos por: "<<x-num;
    else{
        cout<<"Que suerte adivinaste mi numero!";
    }
    return 0;
}