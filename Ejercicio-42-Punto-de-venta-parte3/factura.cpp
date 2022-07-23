#include <iostream>

using namespace std;

double subtotal;
string listaProductos;
void agregarproducto(string descripcion,int cantidad,double precio)
{
    listaProductos = listaProductos + descripcion + '\n';
    subtotal = subtotal + (cantidad*precio);
}