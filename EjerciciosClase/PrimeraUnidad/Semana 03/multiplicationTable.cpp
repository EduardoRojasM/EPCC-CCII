/*Tabla de multiplicar*/

#include <iostream>

using namespace std;

int main(){

cout<<"   *|   ";
for (int i=1;i<=10;i++){
    cout<<i<<"    ";
}
cout<<endl;
cout<<"----+";
for (int i=1;i<=50;i++){
    cout<<"-";
}
for (int i=1;i<=10;i++){
    cout<<endl;
    cout<<"   "<<i<<"|   ";
    for (int j=1;j<=10;j++){
        cout<<i*j<<"    ";
    }
}

    return 0;
}