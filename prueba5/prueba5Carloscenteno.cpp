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
    for( int c=0;c<=col-1;c++)
    {


        for( int l=0;l<=lin;l++)
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
       cout<<"\n";
    }

}
int main()
{
    ingreso(num);
    sumar(num);
    promedio(num);
    presentar(num);
}

