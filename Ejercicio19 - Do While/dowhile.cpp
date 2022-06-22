#include<iostream>

using namespace std;
int main(int argc, char const *argv[])
{
    int a = 2;
    int b= 2;

    while (a > b)
    {
        cout << "(while) a > b "<< endl;
        break;
    }

    do
    {
         cout << "(while) a > b "<< endl;
        break;
    } while (a > b);
    
    return 0;
}
