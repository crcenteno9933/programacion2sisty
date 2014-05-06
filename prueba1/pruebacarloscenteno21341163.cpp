#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

/* Generar 10 numeros aleatorios y contar los numeros que son divisibles entre 5
y obtener su promedio.
obtener el promedio de todos los numeros ingresados y presentar la suma.
*/


int main()
{
    srand(time(0));
    int numero,suma1,suma2,prom,prom5,c,cd5;
    numero=0;
    suma1=0;
    suma2=0;
    prom=0;
    prom5=0;
    c=0;
    cd5=0;

    numero = 1 + rand() % (100-1);

   while(c<10)
   {
        numero = 1 + rand() % (100-1);
        cout<<"Numero que a sido generado es...."<<numero<<"\n";

        if((numero % 5) == 0)
        {
            suma1 += numero;
            cd5++;
        }

        suma2 += numero;
        c++;
   }

   prom5 = suma1 / cd5;
   prom = suma2 / c;

   cout << "la suma de numeros divisibles entre 5 = " << suma1 << " el promedio es " <<prom5;
   cout << "\n";
   cout << "la suma de total = " << suma2 <<"el promedio es"<<prom;
   cout << "\n";

   system("PAUSE");
}
