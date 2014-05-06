#include <iostream>
#include <limits>

using namespace std;

/*ingresar cinco numeros y presentar al final del ciclo el numero mayor.
*/

int main()

{
    int c,mayor,num,menor;
    mayor=0;
    c=0;
    menor=10000000000;

    while(c<5)
  {
      cout<<"Ingresar un numero....>";
      cin>>num;

      if(num > mayor)
      {
          mayor=num;
      }

    if(num < menor)
    {
        menor=num;
    }

      c++;
  }

  cout<<"Mayor de todos los numeros es"<<mayor<<"\n";
  cout<<"Menor de todos los numeros es"<<menor<<"\n";
}
