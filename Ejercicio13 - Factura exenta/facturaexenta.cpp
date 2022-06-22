#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    double subtotal=0;
    double total=0;
    double impuesto= 0.15;
    int descuento = 0;
    double calculoDescuento=0;
    double calculoImpuesto=0;
    string exenta;

    cout<< "Ingrese subtotal de la factura: ";
    cin>> subtotal;

    cout<< "Ingrese descuento (0,10,15,20): ";
    cin>> descuento;
	cout<< "factura exenta (S o N): ";
    cin>> exenta;
    calculoDescuento= (subtotal*descuento)/100;

    if (exenta == "N" || exenta == "n" )
    {
        calculoImpuesto = (subtotal- calculoDescuento)*impuesto;
    }
    if (exenta == "S" || exenta == "s" )
    {
        calculoImpuesto = 0;
    }
   
    
    total=  subtotal - calculoDescuento + calculoImpuesto;

     cout<< "El total a pagar es: " << total;


    return 0;
}