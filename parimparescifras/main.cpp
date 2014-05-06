#include <iostream>

using namespace std;

int main()
{
    int numero,ul,ccp,cci,ccc;
    cout<<"Ingresar un numero....:";
    cin>>numero;

    ccp=0; cci=0; ccc=0;
    while (numero!=0)

    {
        ul = numero % 10;
        numero = numero / 10;

        if ((ul % 2==0) and (ul!=0))
            ccp++;
        else if ((ul % 2!=0) and (ul!=0))
            cci++;

            if (ul==0)
                ccc++;

    }
    cout<<"Cifras pares.....:"<<ccp<<"\n";
    cout<<"Cifras impares....:"<<cci<<"\n";
    cout<<"Cifras ceros....:"<<ccc<<"\n";

    }
