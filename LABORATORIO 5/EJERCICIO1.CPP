#include <iostream>
using namespace std;
int main()
{
    int iniciar, mayor, menor, residuo;
    cout << "\n\tHola! Este programa puede encontrar el MCD de dos numeros.\n\tPresiona una tecla para seguir:\n\tIniciar: 1\tSalir: 0" << endl;
    cout << "\n\t"; cin >> iniciar;
    while((iniciar < 0)||(iniciar > 1))
    {
        cout << "\n\tHaz ingresado una opcion incorrecta, vuelve a intentarlo.";
        cout << "\n\t"; cin >> iniciar;
    }
    switch(iniciar)
    {
        case 0: cout << "\n\tGracias por usar el programa!";
                exit(0);
        break;
        case 1: 
                cout << "\n\tBien! Ahora ingresa dos numeros de mayor a menor y encontraremos su MCD." << endl;
                cout << "\n\tNumero mayor: "; cin >> mayor;
                cout << "\n\tNumero menor: "; cin >> menor;
                do
                {
                    residuo = mayor % menor;
                    if(residuo != 0)
                    {
                        mayor = menor;
                        menor = residuo;
                    }
                } 
                while (residuo != 0);
                cout << "\n\tEl MCD es: " << menor << endl;
                return 0;
                
    }
}