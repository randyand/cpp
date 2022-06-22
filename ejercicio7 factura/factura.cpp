#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    double subtotal;
    double total;
    double impuesto= 0.15;
    double calculoDescuento;
    double calculoImpuesto;

    cout<< "Ingrese subtotal de la factura: ";
    cin>> subtotal;

    calculoImpuesto = subtotal*impuesto;
    total=  subtotal + calculoImpuesto;

     cout<< "El total a pagar es: " << total;


    return 0;
}
