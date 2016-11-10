/*----------------------------------------
Asignatura: Programacion Estructurada
Nombre Programa: Ejercicio4.cpp
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

main()
{
float lado,sup,vol;
printf("ingrese el lado de el cubo: ");
scanf("%f",&lado);
sup=(lado*lado)*6;
vol=lado*lado*lado;
printf("\nSuperficie del Cubo: %f",sup);
printf("\nVolumen del Cubo: %f",vol);
getche();
return(0);      
}
