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

int calculadora(int a , int b , char operador)
{
    if (operador == '+'){
        return sumar(a,b);
    }
    if (operador == '-'){
        return restar(a,b);
    }
    if (operador == '*'){
        return multiplicar(a,b);
    }
    if (operador == '/'){
        return dividir(a,b);
    }
    return -1;
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

    cout<< "El resultado de " << n1 <<" "<< operador<< " "<< n2 <<" "<<"es :";
    cout<<calculadora(n1, n2, operador);

    return 0;
}
