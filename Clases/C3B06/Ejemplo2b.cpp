/*----------------------------------------
Asignatura: Programacion Estructurada
Nombre Programa: Ejercicio2b.cpp
Grupo Nº6
Laboratorio Nº3
Integrantes:
           Dimitry Jannik Castex Castex
Profesores responsables:
           Julia Garrido S.
           Eric Jeltsch F.
----------------------------------------*/

#include <conio.h>
#include <stdio.h>
#include <stdlib.h>

int leer(int a[20], int *);
int ver(int a[20], int);
int par(int a[20],int n);
int n[2],a[2][20],;
//-----------------------------
int main()
{   int cant,k;
    system("cls");
    printf("Ingrese la cantidad de vectores: ");
    scanf("%d",&cant);
    for(k=1;k<=cant;k++)
    {
     leer(a[k],&n);
     ver(a[k],n);
     par(a[k],n);
    }
    getche();
    return(0);
 }
//-----------------------------
int leer(int a[2][20],int *p)
{   int i,nn;  
    printf ("\n Ingrese la cantidad :");
    scanf("%d",p);
    for (i=1;i<=*p;i++)
    { printf("Ingrese a[%d] = ",i);
      scanf("%d",&a[i]); }
    return(0);
 }
//-----------------------------
int ver(int a[2][20], int n[2])
{   int i;
    printf ("\n El Vector es: ");
    for (i=1;i<=n;i++)
    { printf("  %d", a[i]);}
    return(0);
 }
 //-----------------------------
 int par(int a[2][20],int n[2])
 {  int i,sumat=0;
    for (i=1;i<=n;i++)
    { 
     if ((i%2)==0)
      { 
       if ((a[i]%2)==0)
       sumat+=a[i];
      }
    }
    printf("\n La Suma de los pares de la posicion par es: %d",sumat);
    return(0);
 }
