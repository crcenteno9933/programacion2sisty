#include <iostream>


using namespace std;

/* ingresar cinco numeros y determinar cuales son pares e impares
luego debera de representar al final el primedio de los numeros pares e
impares y los contadores  */

int main()

{
    int cpar, cimpar, num,c,prom1par,prom2impar,sum1par,sum2impar;
    cpar=0;
    cimpar=0;
    c=0;
    prom1par=0;
    sum1par=0;
    sum2impar=0;
    prom2impar=0;

    while(c<5)
    {
         cout <<"Ingresar un numeros.....>";
         cin>>num;
    if(num % 2==0)
    {
        cpar++;
        sum1par = sum1par + num;

            }
    else
    {
        cimpar++;
        sum2impar = sum2impar + num;
    }
    c++;
}


prom2impar = sum2impar/cimpar;
prom1par = sum1par/cpar;
cout<<"promedio de los numeros pares...."<<prom1par<<"\n";
cout<<"promedio de los numeros impares..."<<prom2impar<<"\n";
cout<<"Numero de pares es..."<<cpar<<"\n";
cout<<"Numero de numeros impares..."<<cimpar<<"\n";
}
