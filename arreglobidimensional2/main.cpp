#include <iostream>

using namespace std;


const int lin=3;
const int col=3;
char num[lin][col];
void rellenar (int num[lin][col])
{
    for (int l=0;<=lin;l++)
    {
        for(int c=0;c<=col;c++)
        {
            num[l][c]='*';
        }

    }

}


void presentar(char num[l][c])
{
    for(int l=0;l<=lin;l++)
    {
        for(int c=0;c<=col;c++)

        {
            cout<<[l][c]<<" ";
        }
        cout<<"\n";

    }
}

void pedir(char num[l][c])// en que linea o que columna nosotros queremos la marca
{

    int linea,columna;
    cout<<"ingresar marca"<<marca<<"\n";
    do
    {
    cout<<"Linea ";
    cin>>linea;
    }while (!((linea<1) or (linea>3)))
    linea-=1;
    do
    {
    cout<<"Columna";
    cin>>columna;
    } while (!((columna<1) or (columna>3)))
    columna-=1;

    num[linea][columna]= marca;


}

int main()
{
 rellenar(num);
 presentar(num);
 for (int i=0;i<=3;i++)
 {

 }



}
