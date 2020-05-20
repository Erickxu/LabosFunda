#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "\t\nPor favor escriba un numero y este programa determinara si es positivo, negativo o cero." << endl;
    cout << "\t"; cin >> num;
    if(num < 0)
        cout << "\t\nEl numero es negativo." << endl;
    else
    {
        if(num > 0)
            cout << "\t\nEl numero es positivo." << endl;
        else
        {
            if(num == 0) 
                cout << "\t\nEl numero es igual a 0." << endl;
        } 
    }
    return 0;
}