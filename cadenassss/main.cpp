#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//comparacion  de cadenass

using namespace std;
const int t = 4;
char nombre [t][30];

void ingresodeCadenas(char nombre[t][30])
{
    for(int i=0;i<=t;i++)
    {
        cout<<"Ingresar el nombre...:";
        cin.getline(nombre[i],30);

    }

}

void presentar(char nombres[t][30],int num[])
{
    for(int i=0;i<=t;i++)
    {


     cout<<nombre[i]<<" tiene "<<num[i]<<" palabras"<<"\n";
    }
}



void comparar2(char nombre[t][30])
{   char cadcompa[30];
    cout<<"Ingresar cadena a comparar";
    cin.getline(cadcompa,30);


    for(int i=0;i<=t;i++)
    {
        if(strcmp(nombre[i],cadcompa)==0)
        {
            cout<<"Comparacion correcta con "<<nombre[i]<<"\n";
        }
    }
}

void comparar(char[t][30])
{char cadcompa[30];
    cout<<"Ingresar cadena a comparar";
    cin.getline(cadcompa,30);


    for(int i=0;i<=t;i++)
    {
        if(strncasecmp(nombre[i],cadcompa,strlen(cadcompa))==0)
        {
            cout<<"Comparacion correcta con "<<nombre[i]<<"\n";
        }
}
}

int main()
{


ingresodeCadenas(nombre);
comparar2(nombre);
cout<<"\n"<<"otro tipo de comparacion"<<"\n";
comparar (nombre);
return 0;
}
