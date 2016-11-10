/*----------------------------------------
Asignatura: Programacion Estructurada
Nombre Programa: Ejercicio2.cpp
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

main()
{
float x;
printf("Ingrese X: ");
scanf("%f",&x);
if(x>3)
{x=x*x;}
if((x>=0)&&(x<=3))
{x=x*x*x;}
if(x<0)
{x=x*x*x*x;}
printf("El nuevo Valor de X es: %f",x);
getche();
return(0);
}
