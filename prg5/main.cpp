#include <iostream>
#include <stdlib.h>

using namespace std;


/*
  Determinar si un numero es par o impar
  */

int main()
{     int numero, numero2;
      srand(time(0));

     //cout<<"Ingresar un numero entero.....>";
     //cin>>numero;

    cout<<"Numero....>" ;
    cin>>numero;
    if(numero % 2==0)

    {
        cout<<"El numero es par";
    }

    else
    {

        cout<<"El numero es impar";
    }

    cout<<"\n";
    numero2= 1 + rand() % (1000-1);
    if((numero % 5==0) and (numero2 % 2==0));
    {
        cout<<el numero2 es "<<numero2<<" y es divisible entre 2 y 5"<<"\n";
    }




     else
    {
        cout<<"El numero 2 es"<<numero2<<" y no es divisible entre 2 y 5"<<"\n";
    }
    system("PAUSE");

}
