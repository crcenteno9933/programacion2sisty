#include <iostream>
#include <stdlib.h>
/*
Ingresar el nombre del empleados
las horas trabajadas y el turno
luego calcular el pago por hora , la deduccion del IHSS y total a pagar
turno     PagoxHora
1           200
2           300
3           370

 la deduccion del ihss es 245 si el sueldo del empleado es mayor a 7000
 el total a pagar es ingresos pago de horas -ihss.

 tiene un bono si trabaja en el turno 1 o 3 de 400 lps.
*/
using namespace std;

int main()
{

    char nombre[30];
    int horas, pagoxhora, pbruto, ihss, tp;
    int turno;
    int bono;

    cout<<"Ingresar nombre del empleado.....:";
    cin.getline(nombre, 30);


    cout<<"Horas trabajadas...:";
    cin>>horas;

    cout<<"Turno de trabajo...:";
    cin>>turno;

    if (turno==1)
    {
        pagoxhora=200;
    }
        else if (turno==2)

        {
            pagoxhora=300;

        }
     else if (turno==3)
     {
         pagoxhora =370;

            }

            else
            {
                pagoxhora=0;
            }

             if ((turno==1) or (turno==3))//|| es iguall a escribir or

             {
                 bono=400;
             }

             else
                {
                    bono=0;
                }

            pbruto= (pagoxhora * horas)+ bono;

            if(pbruto>7000)

            {
                ihss=245;
            }


        else
        {
            ihss=0.035 * pbruto;
        }

         tp = pbruto - ihss;
         cout<<"Pago por Hora"<<pagoxhora<<"\n";
         cout<<"bono ganado es ..."<<bono<<"\n";
         cout<<"Pago antes de deduccion..."<<pbruto<<"\n";
         cout<<"Seguro Social...."<<ihss<<"\n";
         cout<<"Total a Pagar..."<<tp<<"\n";
         system ("PAUSE");


    return 0;
}
