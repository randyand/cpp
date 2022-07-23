#include<iostream>
#include<stdlib.h>
#include<time.h>

using namespace std;

int main(int argc, char const *argv[])
{
    int numeroSecreto = 0;
    int miNumero = 0;

    srand(time(NULL));

    numeroSecreto = rand()% 10 + 1;
    cout<< numeroSecreto;
    do
    {
             cout<< "Adivina el numero ( 1 a 10): ";
        cin >> miNumero;

        if (miNumero < numeroSecreto)
        {
            cout<< " El Numero secreto puede ser mayor."<< endl;
        }

        if (miNumero == numeroSecreto)
        {
            cout<< " Ganaste."<< endl;
        }
            
       
    } while (numeroSecreto!= miNumero);
    
        

    return 0;
}
