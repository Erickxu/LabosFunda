#include <iostream>
using namespace std;
int main()
{
    int magico = 76, jugar, numero, intentos = 5;
    cout << "\n\tHola! Listo para jugar al numero magico? Trata de adviniar un numero \t\ndel 1 al 100, si aciertas ganas el juego pero solo tienes 5 intentos!" << endl;
    cout << "\n\tSi quieres jugar solo elige una de las teclas que salen en pantalla:\n\tJugar: 1\tSalir: 0 " << endl;
    cout << "\n\tRespuesta: "; cin >> jugar;
    while((jugar < 0)||(jugar > 1))                 //Le pide que ingrese una opción para que el usuario juegue o salga del programa, si este no ingresa una opción valda
    {                                               //el while le pide que intente otra vez.
        cout << "\n\tHaz ingresado una opcion incorrecta vuelve a intentarlo." << endl;
        cout << "\n\tRespuesta: "; cin >> jugar;
    }
    switch(jugar)                                   //Un switch que ejecutará o cerrará el programa dependiendo de la respuesta del usuario
    {
        case 0: cout << "\n\tGracias por jugar!";
                exit(0);
        break;
        case 1: 
                cout << "\n\tBien! Ahora ingresa un numero para tratar de adivinar el numero magico, de momento tienes " << intentos << " intentos\n\tpero si quieres salir solo escribe 0: ";cin >> numero;
                if(numero == 0)
                {
                    cout << "\n\tGracias por jugar!";
                    exit(0);
                }
                while(numero != magico && intentos != 1)        /*Un while para decirle al usuario si su numero es mayor o menor al mágico y para decirle los intentos restantes.
                                                                  además, este parará cuando el usuario acierte el número o se le acaben los intentos.*/
                {
                    if(numero < magico)
                    {
                        cout << "\n\tEl numero magico es mayor que este. ";
                    }
                    else
                    {
                        cout << "\n\tEl numero magico es menor que este. ";
                    }
                    --intentos;
                    cout << "Te quedan " << intentos << " intentos, Si quieres seguir jugando solo escribe otro numero,\n\tsino, escribe 0 y el juego terminara: "; cin >> numero;
                    if(numero == 0)
                    {
                        cout << "\n\tGracias por jugar!";
                        exit(0);
                    }
                    
                }
                if(numero == magico)
                {
                    cout << "\n\tHaz adivinado el numero!, este era: " << numero << ". Felicitaciones!" << endl;
                    exit(0);
                }
                if(intentos == 1)
                {
                        cout << "\n\tSe te han acabado los intentos, mejor suerte para lo proxima!";
                        exit(0);
                }
        break;            
    }
    return 0;
}
    