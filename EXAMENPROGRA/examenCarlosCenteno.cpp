#include <iostream>
#include <stdalign.h>
#include <stdio.h>
#include <time.h>

using namespace std;

int (turno)
{

       do
        {  cout<<"Ingresar el turno 1,2,3...:";
           cin>>turno;

        } while((turno<1) or (turno>3));


}


int pagoxhora(turno)


{

turno1=200;
turno2=150;
turno3=180;


}



char nombre[20]; int turno,horas,pb,ihss,tp,pxh;

void ingresos ( char nombre[],int &turno,)
{
        cout<<"Ingresar el nombre de .......:";
        cin.getline(nombre,30);


        do
        {  cout<<"Ingresar el turno 1,2,3...:";
           cin>>turno;

        }while((turno<1) or (turno>3));


            _flushall();
}



void calcular(int turno , int horas,int &pxh , int &pb , int &ihss , int &tp)
{


       switch (turno)

    {
        case 1 :
            pxh = 200;

            break;

        case 2 :

            pxh = 150;

            break;

        default:

            pxh = 180;

            break;
    }


        pb = pxh * horas;

    if (pb>7000)
    {

        ihss = 245;

    }


    else

    {

        ihss = 0.035 * pb;

    }

    tp =  pb - ihss;


void presentarcalculos(int pxh,int pb,int ihss,int tp)

{

    cout<<"Pago por Hora  "<<pxh <<"\n";
    cout<<"Pago Bruto "<<pb <<"\n";
    cout<<"Seguro Social "<<ihss <<"\n";
    cout<<"Total a pagar "<<tp <<"\n";


}


     do
       {
           cout<<"Desea Continuar S/N..:";
           cin.get(resp);

           _flushall();

       }while ((resp !='S') and  (resp !='N'));

   } while (resp !='N');




int main()
{

 for(int c=0;c<3;c++)
    {
         ingresos(nombre,turno,horas);

        calcular(turno,horas,pxh,pb,ihss,tp);

        presentarcalculos(pxh,pb,ihss,tp);
    }


    return 0;
}

