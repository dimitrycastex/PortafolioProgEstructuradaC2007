/*----------------------------------------
Asignatura: Programacion Estructurada
Nombre Programa: Ejercicio3.cpp
Grupo Nº6
Laboratorio Nº1
Integrantes:
           Dimitry Jannik Castex Castex
Profesores responsables:
           Julia Garrido S.
           Eric Jeltsch F.
----------------------------------------*/
#include <stdio.h>
#include <conio.h>

float x,y,r;
int dentro;
//---[ Funciones ]---
int leer();
int mostrar();
//---[ Main ]---
main()
{
 leer();
 mostrar();
 getche();
 return(0);     
}

int leer()
{
 printf("Ingrese el Radio de la Circunferencia: ");
 scanf("%f",&r);
 printf("\nIngrese la coordenada del punto \"X\": ");
 scanf("%f",&x);
 printf("\nIngrese la coordenada del punto \"Y\": ");
 scanf("%f,&y");
}

int mostrar()
{
 if ((x*x)+(y*y)<=(r*r))
 printf("\nEl punto esta dentro de la circunferencia o es parte de ella");
 else
 printf("\nEl punto esta fuera de la circunferencia");
}
