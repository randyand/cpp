#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;


int main(int argc, char** argv) {
	int dado1 = 0,dado2 = 0;
	char continuar ='Y' ;
	int resultadoLanzamiento= 0;
	
	while(continuar == 'Y' || continuar == 'y'){
		srand(time(NULL));
		dado1= rand() % 9 + 1;
		cout<<"El resultado del dado 1 es: "  << dado1 <<endl;
		dado2= rand() % 9 + 1;
		cout<<"El resultado del dado 2 es: "  << dado2 <<endl;
	
		resultadoLanzamiento= dado1 + dado2;
	
		cout<<"El resultado del lanzamiento es: "  << resultadoLanzamiento <<endl;
		cout<<"Desea realizar otro lanzamiento  (Y/N)): ";
		cin>> continuar;
	}
	
	return 0;
}
