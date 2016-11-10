/*----------------------------------------
Asignatura: Programacion Estructurada
Nombre Programa: Ejercicio2.cpp
Grupo Nº6
Laboratorio Nº2
Integrantes:
           Dimitry Jannik Castex Castex
Profesores responsables:
           Julia Garrido S.
           Eric Jeltsch F.
----------------------------------------*/

#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int op;
int n;

char nombre[2][20];
int edad[20];
float altura[20];

int comp;

int ingresar(int *);
int p_edad(int k);
float p_altura(int y);
int buscar(int q);

main()
{
 while(op!=5)
 {
  system("cls");
  printf("\t** Ingrese una opcion **");
  printf("\n<1> Ingresar alumnos");
  printf("\n<2> Obtener promedio de edad");
  printf("\n<3> Obtener promedio de altura");
  printf("\n<4> Buscar Alumno");
  printf("\n<5> Salir");
  scanf("%d",&op);
  switch(op)
  {
   case 1:ingresar(&n);break;
   case 2:p_edad(n);break;
   case 3:p_altura(n);break;
   case 4:buscar(n);break;
   case 5:exit(1);
   default: printf("\nError");getche();
  }
 }
}

int ingresar(int *p)
{
 int i;   
 printf("Ingrese la cantidad de Alumnos: ");
 scanf("%d",p);
 for (i=1;i<=*p;i++)
 {
  printf("\nIngresar Nombre[%d]: ",i);
  scanf("%s",nombre[i]);
  printf("Ingresar Edad[%d]: ",i);
  scanf("%d",&edad[i]);
  printf("Ingresar Altura[%d]: ",i);
  scanf("%f",&altura[i]);
  printf("\n");
 }
 return(0);
}
//-------------------------------
int buscar(int q)
{
 char chatemp[20];
 int j;   
 printf("Ingrese el Nombre para Buscar: ");
 scanf("%s",chatemp);
 for (j=1;j<=q;j++)
 {
 comp=strcmp(nombre[j],chatemp);
 if (comp==0)
  {
   printf("\nNombre: %s",nombre[j]);
   printf("\nEdad: %d",edad[j]);
   printf("\nAltura: %f",altura[j]);
  }
 }
 if (comp!=0)
  {printf("El nombre ingresado no se encuentra en la base de datos.");}
 getche();
 return(0);
}
//-------------------------------
int p_edad(int n)
{
 int k,tot,sum=0;
 for(k=1;k<=n;k++)
 {
  sum+=edad[k];
 }
 tot=sum/n;
 printf("\nEl promedio de las edades es: %d",tot);
 getche();
 return(0);
}
//-------------------------------
float p_altura(int y)
{
 int k;
 float tot,sum=0;
 
 for(k=1;k<=y;k++)
 {
  sum+=altura[k];
 }
 tot=sum/n;
 printf("\nEl promedio de las alturas es: %f",tot);
 getche();
 return(0);
}
