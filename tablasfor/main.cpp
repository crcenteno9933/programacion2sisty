#include <iostream>

using namespace std;
/* ingresar un numero entr4e 1-10 y presentar la tabla
de multiplicar de 1 a 10 hacerlo 5 veces */
int main()
{    int numero, tabla;
  for(int i=0;i<5;i++)  //para hacerlo 5 veces

  {  do  //solo para validar


  {
      cout<<"Ingresar un Numero entre 1-30...>";
      cin>>numero;

  }  while(!((numero>=1)  and (numero<=30)));

    for (int k=1; k<=30; k++)  //para multiplicar
    {
        tabla = numero * k;
        cout<<k<<" x "<<numero<<" = "<<tabla<<"\n";
    }
    cout<<"\n\n";
  }
}
