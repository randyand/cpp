#include <iostream>

using namespace std;
int main(int argc, char const *argv[])
{
    int a=0;
    int b=0;
    int suma=0, resta = 0, multiplicacion= 0, division = 0;

    cout<< "ingrese el valor de a: ";
    cin>> a;
    cout<< "ingrese el valor de b: ";
    cin>> b;
    suma = a+b;
    resta= a-b;
    multiplicacion= a*b;
    division = a/b;
    cout<< "El resultado de la  suma es: "<< suma<< endl;
    cout<< "El resultado de la resta es:"<< resta<< endl;
    cout<< "El resultado de la  multiplicacion es:"<< multiplicacion<<endl;
    cout<< "El resultado de la division es: "<< division<<endl;
    return 0;
}
