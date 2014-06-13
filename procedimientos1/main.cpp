#include <iostream>
#include <stdalign.h>
#include <time.h>

using namespace std;
/* ingresar dos numeros usando un procedimiento
luego usando otro procesdimiento sumar los numeros y presentarlos
*/

void ingreso(int &numero1,int &numero2)

{

    cout<<"ingresar numero #1....:";
    cin>>numero1;
    cout<<" ingresar numero #2...:";
    cin>>numero2;

}

void sumar (int numero1,int numero2 ,int &suma)
{
      suma = numero1 + numero2;
}
int main()
{
   int numero1,numero2,suma;
   ingreso(numero1,numero2);
   sumar(numero1,numero2,suma);
   cout<<"Suma es "<<suma<<"\n";
}
