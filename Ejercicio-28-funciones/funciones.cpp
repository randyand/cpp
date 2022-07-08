#include<iostream>

using namespace std;

int sumar()
{
    return 5+7;
}

string nombreCompleto()
{
    string nombre = "Juan ";
     string apellido = "Perez ";
    return nombre +" "+ apellido;
}

int main(int argc, char const *argv[])
{
    int resultado=sumar();
    cout<< resultado;
    string nombreYapellido = nombreCompleto();
    cout<< endl;
    cout<< nombreYapellido;
        return 0;
}
