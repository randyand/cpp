#include<iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int nota = 0;

    cout<< "Ingrese la nota que obtuvo: ";
    cin>> nota;

    if (nota < 0 || nota > 100 )
    {
        cout << " Ingrese una nota valida entre 0 y 100"<< endl;
        return 0;
    }
    if (nota <= 100 && nota > 95 )
    {
        cout << "La nota que usted obtuvo es S(A++)"<< endl;
    
    }
    if (nota <=95  && nota > 90)
    {
        cout << "La nota que usted obtuvo es AD"<< endl;
    
    }
        if (nota <= 90 && nota >  85)
    {
        cout << "La nota que usted obtuvo es A"<< endl;
    
    }
     if (nota <= 85 && nota >  80)
    {
        cout << "La nota que usted obtuvo es A-"<< endl;
    }
        if (nota <= 80  && nota >  75)
    {
        cout << "La nota que usted obtuvo es B+"<< endl;
    
    }
        if (nota <=75  && nota >  70)
    {
        cout << "La nota que usted obtuvo es B "<< endl;
    
    }
        if (nota <=  70 && nota >  65)
    {
        cout << "La nota que usted obtuvo es B-"<< endl;
    
    }
        if (nota <= 65 && nota >  60)
    {
        cout << "La nota que usted obtuvo es C+"<< endl;
    
    }
        if (nota <= 60 && nota >  55)
    {
        cout << "La nota que usted obtuvo es C"<< endl;

    }
        if (nota <= 55 && nota >  50)
    {
        cout << "La nota que usted obtuvo es C-"<< endl;
    
    }
        if (nota <= 50 && nota > 45)
    {
        cout << "La nota que usted obtuvo es D+"<< endl;
    
    }
        if (nota <= 45 && nota >  40)
    {
        cout << "La nota que usted obtuvo es D"<< endl;
    }
        if (nota <= 40 && nota > 35)
    {
        cout << "La nota que usted obtuvo es D-"<< endl;
    
    }
    if (nota <= 35 && nota >  30)
    {
        cout << "La nota que usted obtuvo es E+"<< endl;

    }
    if (nota <= 30 && nota >  25)
    {
        cout << "La nota que usted obtuvo es E"<< endl;

    }
    if (nota <= 25 && nota >  20)
    {
        cout << "La nota que usted obtuvo es E-"<< endl;
    }
    if (nota <= 20 && nota >  15)
    {
        cout << "La nota que usted obtuvo es F+"<< endl;
    
    }
    if (nota <= 15 && nota > 10 )
    {
        cout << "La nota que usted obtuvo es F"<< endl;

    }
    if (nota <= 10 && nota > 5 )
    {
        cout << "La nota que usted obtuvo es  F"<< endl;
    
    }
    if (nota <= 5 && nota > 0 )
    {
        cout << "La nota que usted obtuvo es F-"<< endl;
    
    }
    if (nota = 0)
    {
        cout << "La nota que usted obtuvo es F--"<< endl;

    }
    return 0;
}
