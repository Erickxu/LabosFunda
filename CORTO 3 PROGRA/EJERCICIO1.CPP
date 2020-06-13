#include <iostream>
using namespace std;
int main()
{
    int pregunta, pregunta2;
    float horas, extra, dhoras, dextra, total, real;
    cout << "\n\tHola! Este programa puede calcular el salario de los empleados de la \n\tempresa por separado.\n\tEmpezar: 1\tCerrar programa: 0" << endl;
    cout << "\n\tRespuesta: "; cin >> pregunta;  //Se le pide al usuario que ingrese si quiere usar el programa o no, luego un while se encarga de pedir que intente de nuevo
    while((pregunta > 1)||(pregunta < 0))        //si  no ingresa una opción valida
    {
        cout << "Haz ingresado un opcion incorrecta, vuelve a intentarlo.";
        cout << "\n\t"; cin >> pregunta;
    }
        switch(pregunta)            //Un switch que correrá o cerrará el programa dependiendo de la elección del usuario.
        {
           case 0: cout << "\n\tGracias por usar el programa!";
           break;
           case 1:
                do
                {
                    cout << "\n\tNumero de horas trabajadas: "; cin >> horas; cout << "\tHoras extras realizadas: "; cin >> extra;
                    dhoras = 1.75 * horas;              //Se multiplican las horas por la paga por unidad de estas y se suman para obtener el salario total
                    dextra = 2.5 * extra;
                    total = dhoras + dextra;
                    cout << "\n\tEl salario total de este empleado es de: $" << total << endl;
                    if(total < 500)                     //Este if sirve para descontar el impuesto sobre la renta solo si el salario total del empleado es mayor a $500
                    {                                               
                        real = ((total)-((total) * 0.1025));        
                        cout << "\n\tEl salario real de este empleado, luego de descuentos es de: $" << real << endl; 
                    }
                    else
                    {
                        real = ((total)-((total) * 0.2025));
                        cout << "\n\tEl salario real de este empleado, luego de descuentos es de: $" << real << endl;
                    }
                    cout << "\n\tQuieres seguir con otro usuario?\n\tSi: 1\tNo: 0" << endl;
                    cout << "\n\tRespuesta: "; cin >> pregunta2;
                    if (pregunta2 == 0)
                    {
                        cout << "\n\tGracias por usar el programa!";            //Una secuencia de if & while que sirve para preguntar al usuario si quiere seguir con otro empleado
                    }
                }
                while(pregunta2 == 1);
           break;
        }
        
         
         return 0;

    

    
}