/* Exercise 4. countingWords.cpp
• Your task is to write a program that reads words and
counts the frequency of each unique word. 
• A word is a string of nonspace characters separated by
white space. */

#include <iostream>

using namespace std;

int main(){
    int cont=0,contador=0;
    string x;
    string palabras [5] = {"Hola","Hola","Hola","Eduardo","Katya"};

    for (int i=0; i<10; i++){
        for (int j=9; j>i; j--){
            if (palabras[i]==palabras[j]){
                cont++;
            }
        }
        if(cont>contador){
                x = palabras[i];
                contador = cont+1;
            }
        cont=0;
    }
    cout<<"La palabra '"<<x<<"' se repite "<<contador<<" veces.";
    return 0;
}