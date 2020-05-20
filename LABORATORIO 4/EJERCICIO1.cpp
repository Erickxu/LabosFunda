#include <iostream>
using namespace std;
int main()
{
    int num1 = 0, num2 = 0;
    cout << "\tPor favor escriba 2 numeros para ver si el primero es divisible entre el segundo: " << endl;
    cout << "\t"; cin >> num1;
    cout << "\t"; cin >> num2;
    if(num1 % num2 == 0)
        cout << "\t" << num1 << " es divisble entre " << num2 << endl;
    else
        cout << "\t" << num1 << " no es divisible entre " << num2 << endl;
        return 0;
}
