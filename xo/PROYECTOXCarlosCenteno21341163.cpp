#include <iostream>
#include <ctime>
#include <cstdio>
#include <stdlib.h>
//este programa
// es casi parecido
// al que hemos echo en clase
// un tipo de procesos repetitivos
//el proyecto de x-0
//la parte de las lineas y columnas
// pedi un poco de ayuda porque tenia una idea pero queria facilitar
// la forma de como era
// el programa sirve a su perfeccion
//use  bidimensional
// bastante compuertas  analogicas y procedimientos
using namespace std;


const int lin=3;
const int col=3;
char num[lin][col];

void rellenar(char num[lin][col])
{
    for (int l=0;l<lin;l++)
    {
        for (int c=0;c<col;c++)
        {
            num[l][c]='*';
        }
    }
}

void presentar (char num[lin][col])
{
    for (int l=0;l<lin;l++)
    {
        for (int c=0;c<col;c++)
        {
            cout<<num[l][c]<<" ";

        }
        cout<<"\n";
    }
}

void laptop(char num[lin][col],char marca)
{
    int linea,columna;
    int conti=0;

    cout<<"Ingresar tu Marca"<<marca<<"\n";
    do
    {

        int num3;
        srand(time(0));
        num3 = rand()% (3);

        linea=num3;


        int num2;
        srand(time(0));
        num2 =rand()% (3);
        columna=num2;


        if(num[linea][columna]=='*')
        {
            num[linea][columna]=marca;
            conti=1;
        }
        else
        {
            conti=0;
        }
    }
    while(conti==0);
}

void pedir(char num[lin][col],char marca)
{
    int linea,columna;
    int conti=0;
    cout<<"Ingresar Marca"<<marca<<"\n";
    do
    {
        do
        {
            cout<<" Linea ";
            cin>>linea;
        }
        while (!(linea>=1 and linea<=3));
        linea-=1;
        do
        {
            cout<<" Columna ";
            cin>>columna;
        }
        while (!(columna>=1 and columna<=3));
        columna-=1;

        if(num[linea][columna]=='*')
        {
            num[linea][columna]=marca;
            conti=1;
        }
        else
        {
            cout<<"Casilla Repetida...\n";
            conti=0;
        }
    }
    while(conti==0);
}

int DiagX(){

    if(num[0][0]=='X' and num[1][1]=='X' and num[2][2]=='X')
        return 1;
    if(num[0][2]=='X' and num[1][1]=='X' and num[2][0]=='X')
        return 1;

return 0;
}

int Diag0(){

    if(num[0][0]=='0' and num[1][1]=='0' and num[2][2]=='0')
        return 1;
    if(num[0][2]=='0' and num[1][1]=='0' and num[2][0]=='0')
        return 1;

return 0;
}

int RecX(){
    if(num[0][0]=='X' and num[0][1]=='X' and num[0][2]=='X')
        return 1;
    if(num[1][0]=='X' and num[1][1]=='X' and num[1][2]=='X')
        return 1;
    if(num[2][0]=='X' and num[2][1]=='X' and num[2][2]=='X')
        return 1;

 return 0;
}

int Rec0(){
    if(num[0][0]=='0' and num[0][1]=='0' and num[0][2]=='0')
        return 1;
    if(num[1][0]=='0' and num[1][1]=='0' and num[1][2]=='0')
        return 1;
    if(num[2][0]=='0' and num[2][1]=='0' and num[2][2]=='0')
        return 1;

 return 0;
}

int VertX(){
    if(num[0][0]=='X' and num[1][0]=='X' and num[2][0]=='X')
        return 1;
    if(num[0][1]=='X' and num[1][1]=='X' and num[2][1]=='X')
        return 1;
    if(num[0][2]=='X' and num[1][2]=='X' and num[2][2]=='X')
        return 1;

 return 0;

}

int Vert0(){
    if(num[0][0]=='0' and num[1][0]=='0' and num[2][0]=='0')
        return 1;
    if(num[0][1]=='0' and num[1][1]=='0' and num[2][1]=='0')
        return 1;
    if(num[0][2]=='0' and num[1][2]=='0' and num[2][2]=='0')
        return 1;

 return 0;

}

int main()
{
    rellenar(num);
    presentar(num);
    for(int i=0;i<11;i++)
    {
        pedir(num,'X');
        presentar(num);
        if(DiagX()==1 or RecX()==1 or VertX()==1){
            cout<<"GANASTE!!!!!!'X' ";
            break;
            cout<<"\n";
            cout<<"\n";
            cout<<"\n";
            cout<<"\n";
        }
        laptop(num,'0');
        presentar(num);
         if(Diag0()==1 or Rec0()==1 or Vert0()==1){
            cout<<"GANASTE!!!!!! '0' ";
            break;
        }
    }
    ;
}
