#include <iostream>
#include"menu.h"
#include"productos.h"
#include"factura.h"
using namespace std;

double subtotal;
string listaProductos;

void agregarproducto(string descripcion,int cantidad,double precio)
{
    setlocale(LC_CTYPE, "Spanish");
    listaProductos = listaProductos + descripcion + '\n';
    subtotal = subtotal + (cantidad*precio);
}

void imprimirFactura(){
    system("cls");
    cout<< "*******"<< endl ;
    cout<< "FACTURA"<< endl ;
    cout<< "*******"<< endl ;
    cout<<endl ;

    double impuesto =0, total=0;

    impuesto = subtotal*0.15;
    total= subtotal+ impuesto;
    cout<< "Productos"<< endl ;
    cout<< listaProductos;

    cout<<endl ;

    
    cout<< "Subtotal"<< subtotal ;

    cout<<endl ;
    cout<< "Impuesto:"<< impuesto ;
    cout<<endl ;
    cout<< "total:"<< total ;
    cout<<endl ;
    cout<<endl ;
    cout<<endl ;
    system("pause");

}
