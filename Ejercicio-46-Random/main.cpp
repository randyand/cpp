#include<iostream>
#include<stdlib.h>
#include<time.h>

using namespace std;

int main(int argc, char const *argv[])
{
    int numero = 0;
    srand(time(NULL));
for (size_t i = 0; i < 20; i++)
{
    numero = rand()% 10 + 1;
    cout<< "Numero al azar: " << numero<< endl;
}
    return 0;
}
