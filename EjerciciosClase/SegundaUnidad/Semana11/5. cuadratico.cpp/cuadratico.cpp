#include "cuadratico.h"

cuadratico::cuadratico(int _a, int _b, int _c)
{
    a = _a;
    b = _b;
    c = _c;
}

cuadratico::~cuadratico()
{
}

void cuadratico::resolver(int x){
    float res;
    res = (a*(pow(x,2)))+(b*x)+(c);
    cout<<"El valor de f("<<x<<") es: "<<res;
}
