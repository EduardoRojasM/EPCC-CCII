#include <iostream>

using namespace std;

int main(){
    int n,maxpro;
    int sec[n];
    cout<<"Ingrese la cantidad de numeros que desea: ";
    cin>>n;
    sec[n]=-1;
    if(sec[n]==-1){
        for(int k=0;k<n;k++){
            cout<<k<<". Ingrese el numero: ";
            cin>>sec[k];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(j==n){
                break;
            }
            else if(j!=n){
                if(maxpro<(sec[i]*sec[j])){
                maxpro=sec[i]*sec[j];
                }
            }         
        }
    }
    cout<<maxpro;
    return 0;
}