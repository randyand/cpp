#include<iostream>
using namespace std;

int numeroSecreto= 7;
void adivinarnumeroSecreto( int miNumero){
if (miNumero ==numeroSecreto)
{
    cout<< " Adivinaste. "<< endl;
}
else{
    cout<< "Intento Fallido con . "<< miNumero<< endl;

    int otroNumero =0;
    cout<< "Ingrese otro numero :";
    cin>> otroNumero;
    adivinarnumeroSecreto(otroNumero);
}

}

int main(int argc, char const *argv[])
{
    adivinarnumeroSecreto(5);
    return 0;
}
