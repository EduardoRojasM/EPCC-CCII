/* Your job is to write a program that reads integers from
the standard input, sorts them into ascending order, and
then prints the sorted numbers, one per line. */

#include <iostream>

using namespace std;

int main(){
    int numeros[] = {1,5,7,9,8,4,6,3,2}, aux;
	
	for(int i=0;i<9;i++){
		for(int j=0;j<8;j++){
			if(numeros[j] > numeros[j+1]){
				aux = numeros[j];
				numeros[j] = numeros[j+1];
				numeros[j+1] = aux;
			}
		}
	}
	
	cout<<"Orden Ascendente: ";
	for(int i=0;i<9;i++){
		cout<<numeros[i]<<" ";
	}

    return 0;
}