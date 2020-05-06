#include <iostream>
using namespace std;
int main()
{
    cout << "\n\tPorfavor escriba 3 numeros enteros" << endl;
    float num1 = 0, num2 = 0, num3 = 0;
    cout << "\n\t"; cin >> num1 >> num2 >> num3;
    float suma = num1 + num2 + num3;
    float prom = suma / 3;
    cout << "\a" << "\n\tEl promedio de esos numeros es: " << endl;
    cout << "\n\t" << prom << endl;
    return 0;
}
