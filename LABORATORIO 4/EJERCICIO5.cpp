#include <iostream>
using namespace std;
int main()
{
    string palabra;
    cout << "\n\tPor favor ingrese una palabra y este programa verificara \n\tsi este inicia con la misma letra con la que termina." << endl;
    cout << "\n\t"; cin >> palabra;
    string letra1 = palabra.substr(0, 1);
    string letra2 = palabra.substr( palabra.length() - 1, 1);
    if(letra1 == letra2){
        cout << "\n\tLa palabra empieza con la misma letra con la que termina." << endl;
    }
    else
    {
        cout << "\n\tLa palabra no empieza con la misma letra con la que termina." << endl;
    }
    return 0;
}