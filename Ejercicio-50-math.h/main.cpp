#include<iostream>
#include<math.h>
#define pi 3.1416
using namespace std;

int main(int argc, char const *argv[])
{
    double numero= 0;
    double seno= 0;
    double coseno= 0;
    double tangente= 0;

    numero= 2*pi;
    seno= sin(numero);
    coseno= cos(numero);
    tangente=tan(numero);

    cout<< " numero " << numero;
    cout<< " Seno " << seno;
    cout<< " Coseno " << coseno;
    cout<< " Tangente " << tangente;
    return 0;
}
