#include <iostream>
using namespace std;
int main()
{
    string palabra;
    cout << "\n\tPor favor ingresa una palabra y este programa te dira si tiene mas de 10 caracteres y si la cantidad de estos es\n\tpar o impar." << endl;
    cout << "\n\t"; cin >> palabra;
    if(palabra.length() < 10){
    cout << "\n\tLa palabra tiene menos de 10 caracteres." << endl;
    }
    else{
        cout << "\n\tLa palabra tiene mas de 10 caracteres." << endl;
    }
    if(palabra.length() % 2 == 0){
        cout << "\n\tAdemas, la palabra tiene una cantidad par de caracteres." << endl;
    }
    else{
        cout << "\n\tAdemas, la palabra tiene una cantidad impar de caracteres." << endl;
    }
    return 0;
}