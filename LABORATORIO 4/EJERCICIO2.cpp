#include <iostream>
using namespace std;
int main()
{
    int n1 = 0;
    cout << "\tPor favor escriba un numero para verificar si es par o impar: " << endl;
    cout << "\t"; cin >> n1;
    if(n1 % 2 == 0)
        cout << "\n\tEl numero es par." << endl;
    else{
        cout << "\n\tEl numero es impar." << endl;
    }
    return 0;
}
