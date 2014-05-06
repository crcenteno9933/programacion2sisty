#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;
/*   Ingresar un numero divisible entre 5, validarlo
luego preguntar si desea continuar, al final presentar la suma de los numeros.
*/
int main()

{  int numero,suma;
char resp;
    do

    {
        do
        {  cout<<"Ingresar un numero divisible entre 5...:";
            cin>>numero;

        } while (numero % 5=0); // // para validar que el numero sea divisible entre 5//

        suma = suma + numero;
        _flushall();

        do

        {
          cout<<"Desea continuar S/N....:";
          cin.get(resp);
        }  while((resp !='S')and (resp!='N')); //validar respuesta

    }
    while (resp!='N')
        cout<<"Suma de los numeros div 5..:"<<suma<<"\n";
        // presentar la suma de los numeros.
}
