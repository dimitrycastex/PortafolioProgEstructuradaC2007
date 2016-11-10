/*----------------------------------------
Asignatura: Programacion Estructurada
Nombre Programa: Ejercicio3.cpp
Grupo Nº6
Laboratorio Nº0
Integrantes:
           Dimitry Jannik Castex Castex
Profesores responsables:
           Julia Garrido S.
           Eric Jeltsch F.
----------------------------------------*/
#include <stdio.h>
#include <conio.h>
#define pi 3.1416
main()
{
float r,a,p;
printf("Ingrese el Radio de la Circunferencia: ");
scanf("%f",&r);
//calculando
a=pi*r*r;
p=2*pi*r;
printf("\nEl Area es: %f",a);
printf("\nEl Perimetro es: %f",p);
getche();
return(0);
}
