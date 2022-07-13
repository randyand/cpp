#include<iostream>

#include<math.h>

using namespace std;

double raiz(double a){
	
	return sqrt( a);
}

int main(int argc, char const *argv[]){
	double numero= 0 ;
	double resultado = 0 ;
	
	cout<< "Ingrese el valor al que le desea calcular la raiz cuadrada: " ;
	cin>> numero;
	if (numero > 0){
		cout<< "El resultado de la raiz es: " << raiz(numero);	
	}
	else{
		cout<< "El numero ingresado es un valor negativo, no se puede calcular la raiz cuadrada." ;
	}
		
	}
