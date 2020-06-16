#include <iostream>
using namespace std;
int main()
{
   int pregunta, dia, mes, ano; 
   cout << "\n\tHola! Si introduces una fecha este programa te dira la fecha un dia despues de la que hayas ingresado.\n\tSi quieres iniciar o salir elige una opcion:\n\tIniciar: 1\tSalir: 0" << endl;
   cout << "\n\t"; cin >> pregunta;
   while(pregunta < 0 || pregunta > 1)
   {
       cout << "\n\tHaz ingresado una opcion incorrecta, vuelve a intentarlo." << endl;
       cout << "\n\t"; cin >> pregunta;
   }
   switch(pregunta)
   {
       case 0: cout << "\n\tGracias por usar el programa!" << endl;
               exit(0);
       break;
       case 1: cout << "\n\tBien! Ahora por favor ingresa la fecha en el orden que se te mostrara." << endl;
               cout << "\n\tDia: "; cin >> dia; cout << "\n\tMes: "; cin >> mes; cout << "\n\tAno: "; cin >> ano;
               while(!(dia >= 1 && dia <= 31 || mes >= 1 && mes <= 12)){
                   cout << "\n\tEl formato de fecha es incorrecta, vuelve a intentarlo." << endl;
                   cout << "\n\tDia: "; cin >> dia; cout << "\n\tMes: "; cin >> mes; cout << "\n\tAno: "; cin >> ano;
                   }
                while(dia == 31 && !(mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 10 || mes == 12))
               {
                   cout << "\n\tHaz ingresado un dia que no cabe en este mes, por favor ingresa el dia de nuevo." << endl;
                   cout << "\n\tDia: "; cin >> dia;
               }
                       
                if(!(ano%4==0) && (ano%100!=0) || (ano%400==0)){
                while(!(dia >= 1 && dia <= 28)&& mes == 2){
                            cout << "\n\tHaz ingresado un dia que no cabe en el mes de febrero en un ano que no es bisiesto, por favor ingresa el dia otra vez." << endl;
                            cout << "\n\tDia: "; cin >> dia;  
                            }
                           }
                           else
                           {
                               while(!(dia >= 1 && dia <= 29)&& mes == 2){
                            cout << "\n\tHaz ingresado un dia que no cabe en el mes de febrero en un ano que es bisiesto, por favor ingresa el dia otra vez." << endl;
                            cout << "\n\tDia: "; cin >> dia; 
                            }
                           }
                           
                       
               
               
                   
                    if(!((ano%4==0) && (ano%100!=0) || (ano%400==0)))
                    {
                        if(mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 10 || mes == 12)
                        {
                            ++dia;
                            if(dia == 32)
                            {
	                            dia = 1;
	                            ++mes;
	                            if(mes == 13)
	                            {
		                            mes = 1;
		                            ++ano;
	                            }
                            }	 
                        }
                        else
                        {
                            if(mes == 2)
                            {
                                ++dia;
                                if(dia == 29)
                                {
                                    dia = 1;
                                    ++mes;
                                }
                            }
                            else
                            {
                                ++dia;
                                if(dia == 31)
                                {
                                    dia = 1;
                                    ++mes;            
                                }
                            }
                        
                        }
                    
                    }
                    else
                    {
                        if(mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 10 || mes == 12)
                        {
                            ++dia;
                            if(dia == 32)
                            {
	                            dia = 1;
	                            ++mes;
	                            if(mes == 13)
	                            {
		                            mes = 1;
		                            ++ano;
	                            }
                            }	 
                        }
                        else
                        {
                            if(mes == 2)
                            {
                                ++dia;
                                if(dia == 30)
                                {
                                    dia = 1;
                                    ++mes;
                                }
                            }
                            else
                            {
                                ++dia;
                                if(dia == 31)
                                {
                                    dia = 1;
                                    ++mes;            
                                }
                            }
                        
                        }  
                    }
                    
                 
                cout << "\n\tUn dia despues, la fecha es: " << dia << "/" << mes << "/" << ano;
        break;               
    }    
    return 0;    
}




