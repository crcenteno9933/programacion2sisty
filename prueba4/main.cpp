#include <iostream>
#include <stdlib.h>
#include <stdio.h>


/*Ingresar en un arreglo de registros los siguientes datos ,nombres,horas
(arreglo4). totalhoras y pb.
elaborar un procedimiento para ingresar datos de arreglo luego
luego una funcion para devolver la suma del arreglo de horas.
elaborar un procedimiento para calcular el total de horas
(se llama la funcion de suma de horas) y el pb.
presentar todo el arreglo de registros usando un procedimiento
*/


using namespace std;



struct trab
{
    char nombre[30];
    double horas[4];
    double totalhoras, pb;
};

const int n=4;
trab trabx[n];


void ingresar (trab trabx[])

{

     for (int i=0;i<=n; i++)

    {   _flushall();


     cout<<"Nombre del empleado:";
     cin.getline(trabx[i].nombre,30);


      for(int k=0; k<=3; k++)
        {

            cout<<"Ingresar las horas....."<<k<<"...:";
            cin>> trabx[i].horas[k];
        }

        for (int g=0; g<=3;g++)
        {
            cout<<"ingresar el total de horas..."<<g<<"..:";
            cin>> trabx[i].totalhoras[g];

        }
          for (int h=0; h<=3;h++)
          {
              cout<<"Ingresar el pago bruto..."<<h<<"..:";
              cin>>trabx[i].pb[h];


          }

    }

}

//luego una funcion para devolver la suma del arreglo de horas

double suma (double horas[])
{
    double sumax =0;
    for(int i=0;i<=n;i++)
    {
        sumax+= horas [i];
    }
    return sumax;
}

//elaborar un procedimiento para calcular el total de horas
//(se llama la funcion de suma de horas) y el pb.


void calcular(trab trabx[])
{

    for( int i=0;i<=n;i++)

    {

      trabx[i].totalhoras = suma(trabx[i].horas);
      trabx[i].pb = suma(trabx[i].pb);



    }


//presentar todo el arreglo de registros usando un procedimiento
void presentar(trab trabx[])
//nombres,horas ,totalhoras y pb.
{

    for (int i=0;i<=n;i++)
    {
     cout<<"Nombre.."<<trabx[i].nombre<<"\n";
     cout<<" Horas."<<trabx[i].horas<<"\n";
     cout<<"Total Horas...."<<trabx[i].totalhoras<<"\n";
     cout<<" Pago Bruto....."<<trabx[i].pb<<"\n";

     cout<<"\n";
     cout<<"\n";
     cout<<"\n";
     cout<<"\n";
     cout<<"\n";



int main()
{

      ingresar(trabx);
      calcular(trabx);
      presentar(trabx)


}
