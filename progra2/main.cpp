#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{   int notaa,notae,notaf;
    char nombre[30];

    cout<<"Nombre del alumno.....:";
    cin.getline (nombre, 30);


    cout<<"Ingresar la nota Acumulada..:";
    cin>>notaa;


    cout<<"Ingresar la nota examen......:";
    cin>>notae;

    notaf=notaa + notae;
    cout<<"\n";
    if (notaf>=60)

    {
        cout<<"El alumno esta APROBADO"<<"\n";

    }

    else

    {
        cout<<"El Alumno esta REPROBADO"<<"\n";
    }

    cout<<"\n";

    cout<<"n"<<nombre<<" Nota Final es "<<notaf;// este es mi programa bitch
    cout<<"\n";
    system("PAUSE");

    return 0;
}
