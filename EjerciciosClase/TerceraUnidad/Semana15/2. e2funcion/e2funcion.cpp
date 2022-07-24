#include <iostream>

using namespace std;

float sumafi(float a, int b) {
    return a + b;
}

double restalf(float a, double b) {
    return a - b;
}

long multiplicaid(int a, long b) {
    return a * b;
}

void funcion(int a, int b){
    cout<<sumafi(a,b);
}

int main(){
    funcion(sumafi,2,3);

    return 0;
}