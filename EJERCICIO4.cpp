#include <iostream>
using namespace std;
int main()
{
    float cant = 0, prec = 0, total = 0;
    string producto;
    cout << "\n\tPor favor escriba el nombre del producto, cantidad que ha comprado y el precio de este para calcular el total de dinero gastado" << endl;
    cout << "\n\tProducto: "; cin >> producto;
    cout << "\n\tCantidad: "; cin >> cant;
    cout << "\n\tPrecio: $"; cin >> prec;
    total = cant * prec;
    cout << "\n\tEl total de dinero gastado en productos queda detallado asi:" << endl;
    cout << "\n\t" << producto << " - " << cant << " - $" << prec << endl;
    cout << "\t-------------------" << endl;
    cout << "\tTOTAL = $" << total << endl;
    return 0;


}