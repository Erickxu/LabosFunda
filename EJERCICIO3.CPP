#include <iostream>
using namespace std;
int main()
{
    int year;
    cout << "\n\tHola! Este programa sirve para decirte si un ano es bisiesto o no, ingresa el ano que quieras\n\ty te diremos la respuesta!\n\tAno: "; cin >> year;
    if(year % 400 == 0)                            //el if comprueba si el año es divisible entre 400, de no ser así va a otro if anidado donde para ser bisisesto, el año tiene que ser
    {                                              //divisible entre 4 pero no entre 100, de lo contrario, este no será bisiesto
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