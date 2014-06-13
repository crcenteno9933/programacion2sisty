#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


using namespace std;

struct pago
{

  int turno,horas;
  double pxh, pb, ihss, tp;
  char resp;
  char nombre[30];
  double maxisueldo;
  char maxnombre[30];


};

pago x;

int validarTurno()
{
    x.turno;
    do
    {
        cout<<"Ingresar el 1,2,3...:";
        cin>>x.turno;
    }while((x.turno<1)or (x.turno>3));
    return x.turno;
}



double pxhora(pago&x)
{
    switch(x.turno)
    {
      case 1:
      return 200;
      break;
      case 2:
      return 150;
      break;
      default:
      return 180;
      break;
    }
}



double seguro(pago&x)
{
    if (x.pb>7000)
        return 245;
    else
        return 0.035*x.pb;
}


void ingresar(pago x)
{

    cout<<"ingresar nombre...:";
    cin.getline(x.nombre,30);
    cout<<"Horas trabajadas...:";
    cin>>x.horas;
    x.turno=validarTurno();
}


void calcular(pago&x)

{
    x.pxh=pxhora(x);
    x.pb=x.horas*x.pxh;
    x.ihss= seguro(x);
    x.tp=x.pb-x.ihss;
}



void presentar(pago&x)

{
    cout<<"pago por hora es...:"<<x.pxh<<"\n";
    cout<<"pago bruto es..:"<<x.pb<<"\n";
    cout<<"seguro social es..:"<<x.ihss<<"\n";
    cout<<"total a pagar es..:"<<x.tp<<"\n";
}


char pedirsino()
{  _flushall();
     x.resp;
    do {
        cout<<"desea continuar...:";
        cin.get(x.resp);
        _flushall();
    }while((x.resp!='S') and (x.resp!='N'));
    return x.resp;

}


int main()

{
    x.maxisueldo=0;

    do
    {
    ingresar(x);
    calcular(x);
    presentar(x);
    if (x.tp>x.maxisueldo)
    {
        x.maxisueldo=x.tp;
        strcpy(x.maxnombre,x.nombre);
    }

     x.resp=pedirsino();

    }while(x.resp!='N');
cout<<"empleado mayor.....:"<<x.maxnombre<<"mayor sueldo...."<<x.maxisueldo<<"\n";

}

