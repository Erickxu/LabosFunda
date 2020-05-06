#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    float a = 0, b = 0, c = 0, raiz = 0, x1 = 0, x2 = 0;
    cout << "\tPor favor introduzca los 3 numeros de la ecuacion cuadratica para poder resolverlo mediante su formula: " << endl;
    cout << "\tA: "; cin >> a;
    cout << "\tB: "; cin >> b;
    cout << "\tC: "; cin >> c;
    raiz = pow(b, 2) - 4*a*c;
    if(raiz < 0)
        cout << "\tEl problema no tiene solucion dentro de los reales." << endl;
    else{
        x1 = (-b + sqrt(raiz))/2*a;
        x2 = (-b - sqrt(raiz))/2*a;
        cout << "\tLa respuesta es: " << endl;
        cout << "\n\tX1 = " << x1 << ", " << "X2 = " << x2 << endl;
    }
    return 0;
}

