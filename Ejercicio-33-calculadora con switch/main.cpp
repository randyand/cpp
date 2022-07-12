#include<iostream>
using namespace std;

int sumar(int a , int b)
{
    return a+b;
}

int restar(int a , int b)
{
    return a-b;
}

int multiplicar(int a , int b)
{
    return a*b;
}

int dividir(int a , int b)
{
    return a/b;
}
int calculadora(int a , int b , char operador){

    switch (operador)
    {
    case '+':
        return sumar(a,b);
        break;
    case '-':
        return restar(a,b);
        break;
    case '*':
        return multiplicar(a,b);
        break;
    case '/':
        return dividir(a,b);
        break;
    
    default:
        break;
    }
    throw"El operador no existe.";
}

int main(int argc, char const *argv[])
{
    int n1=0 , n2= 0;
    char operador;

    cout<< "Ingrese a: ";
    cin>>n1;
    
    cout<< "Ingrese a: ";
    cin>>n2;

    cout<< "Ingrese el operador (+ , - , * , / ) : ";
    cin>>operador;

    
    try
    {
        cout<< "El resultado de " << n1 <<" "<< operador<< " "<< n2 <<" "<<"es :";
        cout<<calculadora(n1, n2, operador);
    }
    catch(const char* error)
    {
        cout << error;
    }
    
    return 0;
}
