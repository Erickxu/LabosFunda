#include <iostream>
using namespace std;
int main()
{
    int year;
    cout << "\n\tHola! Este programa sirve para decirte si un ano es bisiesto o no, ingresa el ano que quieras\n\ty te diremos la respuesta!\n\tAno: "; cin >> year;
    if(year % 400 == 0)                            
    {                                              
        cout << "\n\t\a" << year << " es un ano bisiesto!";
    }
    else
    {
        if(year % 4 == 0 && year % 100 != 0)
        {
            cout << "\n\t\a" << year << " es un ano bisiesto!";
        }
        else
        {
            cout << "\n\t\a" << year << " no es un ano bisiesto!";
        }
    }
    return 0;
}