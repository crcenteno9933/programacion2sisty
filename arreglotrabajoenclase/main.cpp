#include <iostream>
#include <stdlib.h>
#include <stdio.h>

/* con estructura
alumno
arreglo
parciales( 3 parciales)
promedio
obs
elaborar un arreglo de registros 5 alumnos
elaborar un procedimiento para el ingreso de datos
elaborar una funcion para devolver el promedio ingresando el arreglo de parciales
elaborar un procedimiento para calcular el promedio( se llama la funcion de promedio)
y la observacion
elaborar un procedimiento para presentar un registro de alumnos y
otro para presentar todos los registros llamando el procedimiento de presentar un registro

*/

using namespace std;

struct alum
{
    char alumno[30];
    double parcial[2];
    double promedio;
    char obs[15];
};

const int n=5;

void ingresar(alum alumx[])
{
    for(int i=0; i<=n; i++)
    {
        cout<<"Ingresar nombre del alumno..:";
        cin.getline(alumx[i].alumno,30);


        for(int k=0; k<=3; k++)
        {
             cout<<"Ingresar nota parcial.."<<k<<"..:";
             cin>> alumx[i].parcial[k];
        }
}

double promediox (double parcial[])
{   double suma=0
    for(int i=0;i<3; i++)
    {
        suma+= parcial[i];
    }
    return suma/3;
}

void calcular(alum alumx[])
{
    for (int i=0;i<=n;i++)
    {
         alumx[i].promedio = promediox(alumx[i].parcial);
         if (alumx[i].promedio >= 60)
         {
            strcpy(alumx[i].obs,"Aprobado");
         }
         else
         {
            strcpy(alumx[i].obs,"Reprobado");
         }
    }
}

void presentar(alum alumx)
{

    cout<<"Alumno " << alumx.nombre;
    cout<<"promedio " << alumx.promedio;
    cout<<"obs  " << alumx.obs<<"\n";
    // Posiblemente tambien tenias que imprimir las notas parciales de este alumno haciendo un for que recorra los parciales
}

void presentarTodos()
{
    for (int i=0;i<=n;i++){
         presentar(alumx[i]);
    }
}



int main()
{
    alum alumx[n];
    ingresar(alumx);
    calcular(alumx);
    presentarTodos();
    
    // desde mi punto de vista te pndria 70%
    return 0;
}
