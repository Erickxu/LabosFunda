#include <iostream>
using namespace std;
int main()
{
    int pregunta, hora, minuto, segundo;
    cout << "\n\tHola! Este programa puede decirte cual es la hora un segundo despues de la hora que quieras.\n\tSi quieres continuar o salir solo ingresa una de las siguientas teclas:\n\tContinuar: 1\tSalir: 0" << endl;
    cout << "\n\t"; cin >> pregunta;
    while((pregunta < 0)||(pregunta > 1))
    {
        cout << "\n\tHaz ingresado una opcion incorrecta, vuelve a intentarlo." << endl;
        cout << "\n\t";cin >> pregunta;
    }
    switch(pregunta)
    {
        case 0: cout << "\n\tGracias por usar el programa!";
                exit(0);
        break;
        case 1: 
                cout << "\n\tBien! Ahora ingresa la hora en formate 24h en el siguiente orden:" << endl;
                cout << "\n\tHora: "; cin >> hora; cout << "\n\tMinutos: "; cin >> minuto; cout << "\n\tSegundos: "; cin >> segundo;
                while(!(hora >= 0 && hora <= 23 && minuto >= 0 && minuto <= 59 && segundo >= 0 && segundo <= 59))
                {
                    cout << "\n\tEl formato de la hora es incorrecto, por favor prueba de nuevo." << endl;
                    cout << "\n\tHora: "; cin >> hora; cout << "\n\tMinutos: "; cin >> minuto; cout << "\n\tSegundos: "; cin >> segundo;
                }
                if(hora >= 0 && hora <= 23 && minuto >= 0 && minuto <= 59 && segundo >= 0 && segundo <= 59)
                {
                    ++segundo;
                    if (segundo == 60)
                    {
                        segundo = 0;
                        ++minuto;
                        if(minuto == 60)
                        {
                            minuto = 0;
                            ++hora;
                            if (hora == 24)
                            hora = 0;
                        }
                    }
                    cout << "\n\tUn segundo despues de la hora es: " << hora << ":" << minuto << ":" << segundo << endl;
                }
        break;       
    }   
    return 0;
}