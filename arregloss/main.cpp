#include <iostream>
#include <stdlib.h>
#include <time.h>


/* generar 10 numeros comprendidos entre 1-10, luego usando
usando funcion ,generar el factorial de cada uno de los
numeros y copiar en  otra arreglo los resultados presentar los dos arreglos
*/


using namespace std;


const int tam=9;

int numero[tam];
int fact[tam];



void ingresar(int numero[])

{

    srand(time(0));
    for (int i=0;i<=tam;i++)
    {
        numero[i] = 1 + rand() % (10-1);
    }


}
int factorial(int numero)
{

    int fact=1;
    for (int i=1;i<=numero;i++)
    {
        fact = fact * i;


    }

return fact;
}


void calcular (int numero[], int fact[])
{
    for (int i=0;i<=tam;i++)

    fact[i] = factorial(numero[i]);

}


void presentar (int numero[],int fact[])
{
    for(int i=0;i<=tam;i++)

{
    cout<<"Factorial de "<<numero[i]<<" es "<<fact[i]<<"\n";


}


}



int main()
{
  ingresar(numero);
  calcular(numero,fact);
  presentar(numero,fact);

  return 0;
}
