#include <iostream>

using namespace std;


const int lin=5;
const int col=6;
int num[lin][col];


void ingreso(int num[lin][col])
{

    for (int l=0;l<=lin;l++)
    {

        for(int c=0;c<=col-1;c++)
        {

            cout<<"Numero ["<<l<<","<<c<<"]....";
            cin>>num[l][c];
        }
    }

}

void sumar(int num[lin][col])
{
    for(int c=0;c<=col-1;c++)
    {
        num[lin][c]=0;
        for(int l=0;l<=lin;l++)
        {

            num[lin][c]+= num[l][c] ;


        }

    }
}



void promedio(int num[lin][col])
{
    for( int l=0;l<=lin;l++)
    {
        for( int c=0;c<=col-1;c++)
    {

         num[lin][c]+= num[l][c] /4;
    }
    }


}


void presentar(int num[lin][col])
{

    for(int l=0;l<=lin;l++)
    {
        for(int c=0;c<=col;c++)
        {cout<<num[l][c]<<" ";
        }
       cout<<"\n";
       cout<<"\n";
       cout<<"\n"
    }

}
int main()
{
    ingreso(num);
    sumar(num);
    promedio(num)
    presentar(num);
}







#include <iostream>

using namespace std;


const int lin=5;
const int col=6;

int num[lin][col];
void ingreso(int num[lin][col])
{
   for (int l=0;l<=lin;l++)   //para dejar la ultima linea
    {

    for(int c=0;c<=col-1;c++)
        {

            cout<<"Numero ["<<l<<","<<c<<"]....";
            cin>>num[l][c];
        }
    }
    }

//el procedimiento de sumar una matriz
void sumar(int num[lin][col])
{
    for(int c=0;c<=col-1;c++)
    {

        num[lin][c]=0;
        for(int l=0;l<=lin;l++)
        {

            num[lin][c]+= num[l][c];


        }

    }
}



void mayor(int num[lin][col])
{
    for( int l=0;l<=lin;l++)
    {
        num[l][c]=0;
        for( int c=0;c<=col-1;c++)
    {
        if (num[l][c]>num[l][col])
            num[l][col] = num[l][c];

    }
    }


}


void presentar(int num[lin][col])
{

    for(int l=0;l<=lin;l++)
    {
        for(int c=0;c<=col;c++)
        {cout<<num[l][c]<<" ";
        }
       cout<<"\n";
       cout<<"\n";


    }

}
int main()
{
    ingreso(num);
    sumar(num);
    presentar(num);
}




13212331313123131231313131313


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


2312321093210831298312983


#include <iostream>

using namespace std;






const int lin=5;
const int col=4;


int num[lin][col];
void ingreso(int num[lin][col])
{

    for (int l=0;l<=lin-1;l++)   //para dejar la ultima linea
    {

        for(int c=0;c<=col;c++)
        {

            cout<<"Numero ["<<l<<","<<c<<"]....";
            cin>>num[l][c];
        }
    }

}

//el procedimiento de sumar una matriz
void sumar(int num[lin][col])
{
    for(int c=0;c<=col;c++)
    {

        num[lin][c]=0;
        for(int l=0;l<=lin-1;l++)
        {

            num[lin][c]+= num[l][c];


        }

    }
}

void presentar(int num[lin][col])
{

    for(int l=0;l<=lin;l++)
    {
        for(int c=0;c<=col;c++)
        {cout<<num[l][c]<<" ";
        }
       cout<<"\n";
    }

}
int main()
{
    ingreso(num);
    sumar(num);
    presentar(num);
}


312323213131231312312312312
13123123123123123123123213123


#include <iostream>

using namespace std;
const int  lin=4;
const int col=3;
int num[lin][col];


void ingreso(int num[lin][col])
{
    for (int l=0;l<lin;l++)
    {
        for(int c=0;c<col;c++)
        {
            cout<<"Ingresar Dato ["<<l<<","<<c<<"]..";
            cin>>num[l][c];
        }
    }

}
void presentar(int num[lin][col])
{ for (int l=0;l<lin;l++)
    {
        for(int c=0;c<col;c++)
        {  cout<<num[l][c]<<" ";
        }
        cout<<"\n";
    }

}
int main()
{
   ingreso(num);
   presentar(num);

    return 0;
}
