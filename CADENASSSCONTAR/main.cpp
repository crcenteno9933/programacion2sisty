#include <iostream>

using namespace std;






















void contarpalabras(char nombre[t][30])
{
    int conta=0
    for(int i=0;i<=t;i++)
    {
        conta= contar(nombre[i])
        cout<<nombre[i]<<" Tiene <<"<<conta<<"letra<<"\n";
    }
}

int main()
{
 ingresoCadenas(nombre);
 contarpalabras(nombre);
}
