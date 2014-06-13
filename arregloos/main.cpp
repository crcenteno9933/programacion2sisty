#include <iostream>

using namespace std;
/* ingresar50 numeros a un arreglo de enteros,luego elaborar una funcion para devolver
el numero mayor,una funcion para devolver el numero de pares que hay en el arreglo.
devuelva el menor
*/


const int tam=4;
int numero[tam];
void ingresar(int numero[])

{
    for(int i =0; i<=tam; i++)

    {
        cout<<"Ingresar el numero["<<i<<"]...:";
        cin>>numero[i];
    }
}

int pares(int numero[])

{
     int xpar=0;
     for(int i=0;i<=tam;i++)
     {
         if (numero[i]%2==0)
            xpar++;
     }
    return xpar;

}

int mayor(int numero[])
{

    int maxi=0;
    for(int i =0; i<=tam; i++)
    {
        if (numero[i]>maxi)
            maxi=numero[i];
    }
     return maxi;
}

int menor(int numero[])

{

    int xmini=numero[0];

    for(int i =0; i<=tam; i++)
    {
        if(numero[i]<xmini)
        xmini=numero[i];
    }

    return xmini;
}







int main()
{

    int cpar=0;
     int xmax=0;
     int xmini=0;
  ingresar(numero);
  xmax= mayor(numero);
  cout<<"Numero mayor del arreglo es"<<xmax<<"\n";
  cpar=pares(numero);
  cout<<"Numero pares es"<<cpar<<"\n";
   xmini= menor(numero);
   cout<<"Numero menor es"<<xmini<<"\n";
}
