#include <iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;

int main(int argc, char** argv) {
	int i = 0;
	int j = 0;
	int numero[5][5] ;
	int num = 0;
	int suma = 0;
	srand(time(NULL));
	
	for ( i = 0; i < 5; i++)
	{	
		for ( j = 0; j < 5; j++)
		{
			num = rand()% 100 + 1;
			cout << endl;
			numero[i][j] = num ;
			suma = suma + num;
		}
	}
			
	for ( i = 0; i < 5; i++)
	{	
		for ( j = 0; j < 5; j++)
		{
			cout << numero[i][j] << " ";
			
	
		}
		cout << endl;
	}
	    	cout <<" Total suma: " <<suma<<endl;
	return 0;
}