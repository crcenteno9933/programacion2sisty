#include <iostream>
#include <stdalign.h>
#include <time.h>

using namespace std;
/* Ingresar 3 numeros usando un procedimiento, luego
determinar el numero mayor usando otro procedimiento
 presentar el mayor en el main.
 */


 void ingresar(int &numero1,int &numero2, int &numero3)
 {
     cout<<"Ingresar numero #1..:";
     cin>>numero1;
     cout<<"Ingresar numero #2...:";
     cin>>numero2;
     cout<<"Ingresar numero #3...:";
     cin>>numero3;
 }
void maximo(int numero1,int numero2,int numero3, int &mayor)
{
    if ((numero1>numero2) and (numero1>numero3))
        maximo = numero1;
    else if (numero2>numero3);
    maximo = numero2;
    else
        maximo = numero3;

}
int main()
{
 int numero1,numero2,numero3,mayor;
 ingresar(numero1,numero1,numero3);
 maximo(numero1,numero2,numero3,mayor);
 cout<<"El mayor es..."<<mayor<<"\n";
}
