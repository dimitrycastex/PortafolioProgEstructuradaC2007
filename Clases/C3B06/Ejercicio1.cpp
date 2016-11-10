/*----------------------------------------
Asignatura: Programacion Estructurada
Nombre Programa: Ejercicio1.cpp
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
int n, a[20],n1,b[20];
//-----------------------------
int main()
{   system("cls");
    leer(a,&n);  
    ver(a,n); 
    par(a,n);
    getche();
    return(0);
 }
//-----------------------------
int leer(int a[20],int *p)
{   int i;  
    printf ("\n Ingrese la cantidad :");
    scanf("%d",p);
    for (i=1;i<=*p;i++)
    { printf("Ingrese a[%d] = ",i);
      scanf("%d",&a[i]); }
    return(0);
 }
//-----------------------------
int ver(int a[20], int n)
{   int i;
    printf ("\n El Vector es: ");
    for (i=1;i<=n;i++)
    { printf("  %d", a[i]);}
    return(0);
 }
//-----------------------------
 int par(int a[20],int n)
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
