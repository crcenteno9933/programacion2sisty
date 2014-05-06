#include <iostream>

using namespace std;

int main()
{ int numero,ul;
    cout<<"Ingresar un numero.....:";
    cin>>numero;
    while (numero>10)

    {
        ul = numero % 10;
        numero = numero / 10;
        cout<<ul;
    }
    cout<<numero;
}
