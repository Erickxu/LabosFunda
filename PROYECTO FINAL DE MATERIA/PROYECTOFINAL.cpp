#include <iostream>
#include <string>
using namespace std;

const int longCad = 20;                         

struct costoPorArticulo{
char nombreArticul[longCad + 1];
int cantidad;
float precio;
float costoPorArticulo;
};                                                                  
//Se declaran las funciones que se utilizarán en el programa
void InsertarDatos(costoPorArticulo *articulo, int cantidad);           
void CalcularCosto(costoPorArticulo * articulo, int cantidad);
void ImprimirDatos(costoPorArticulo * articulo, int cantidad);
int ObtenerTotal(costoPorArticulo * articulo, int cantidad);

int main() 
{
    int narticulos;
    //Declarando el arreglo de tipo struct
    struct costoPorArticulo *articulo = new costoPorArticulo[narticulos];  
     
    cout << "\n\tHola! Este programa te ayudara a clasificar tus productos." << endl;
    cout << "\n\tPor favor escribe el numero de productos que deseas clasificar: "; cin >> narticulos;

    //invocación de funciones
    InsertarDatos(articulo, narticulos);
    CalcularCosto(articulo, narticulos);
    ImprimirDatos(articulo, narticulos);
    cout << "\n\tTOTAL:      $" << ObtenerTotal(articulo, narticulos) << endl;
    	
    return 0;
};
void InsertarDatos(costoPorArticulo * articulo, int cantidad){
   for(int i=0; i<cantidad; i++){
		cout << "\n\tPor favor ingrese el nombre del articulo:";cin >> articulo[i].nombreArticul;

    	cout << "\n\tIngrese la cantidad de " << articulo[i].nombreArticul << " adquiridos:";cin >> articulo[i].cantidad;

    	cout << "\n\tIngrese el costo unitario de "<<articulo[i].nombreArticul<<" adquirido:";cin>> articulo[i].precio;
    	
	}  	
};
void CalcularCosto(costoPorArticulo * articulo, int cantidad){
    for(int i= 0;i < cantidad;i++){
        articulo[i].costoPorArticulo = articulo[i].precio * articulo[i].cantidad; 
    }
};
void ImprimirDatos(costoPorArticulo * articulo, int cantidad){
    for (int j = 0; j < cantidad; j++)
    {
        cout << "\n\tARTICULO " << j+1 << ": ";
    	cout<< "\n\tNOMBRE DEL ARTICULO: "<<articulo[j].nombreArticul;
    	cout<< "\n\tUNIDADES: "<<articulo[j].cantidad;
		cout<< "\n\tPRECIO UNITARIO: $"<<articulo[j].precio;
		cout<< "\n\tSUB-TOTAL DEL ARTICULO: $"<<articulo[j].costoPorArticulo;
        cout<< "\n\t----------------------------------------------" << endl;
	}
};
int ObtenerTotal(costoPorArticulo * articulo, int cantidad){
    double ObtenerTotal = 0;
    for (int l = 0; l < cantidad; l++){
        ObtenerTotal += articulo[l].costoPorArticulo;
    }

    return ObtenerTotal;
};




