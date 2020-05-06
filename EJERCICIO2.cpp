#include <iostream>
#define _USE_MATH_DEFINES
#include <cmath>
#define M_PI 3.14159265358979323846 

using namespace std;

int main()
{
    float r = 0, a = 0, p = 0;
    cout << "\n\tPor favor escriba el radio de un circulo para poder encontrar su area y su perimetro:";
    cout << "\n\t"; cin >> r;
    a = M_PI * (pow(r, 2));
    p = 2 * M_PI * r;
    cout << "\n\tEl area del circulo es: " << a << " y su perimetro es: " << p << endl;
    return 0; 
}
