#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    double subtotal;
    double total;
    double impuesto= 0.15;
    int descuento = 0;
    double calculoDescuento;
    double calculoImpuesto;

    cout<< "Ingrese subtotal de la factura: ";
    cin>> subtotal;

    cout<< "Ingrese descuento (0,10,15,20): ";
    cin>> descuento;

    calculoDescuento= (subtotal*descuento)/100;
    calculoImpuesto = (subtotal- calculoDescuento)*impuesto;
    total=  subtotal - calculoDescuento + calculoImpuesto;

     cout<< "El total a pagar es: " << total;


    return 0;
}
