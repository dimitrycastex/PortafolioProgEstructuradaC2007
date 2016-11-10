/*----------------------------------------
Asignatura: Programacion Estructurada
Nombre Programa: Ejercicio1.cpp
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
float num,num_cuad,num_cubo;
printf("Ingrese un Valor real: ");
scanf("%f",&num);
num_cuad = num*num;
num_cubo = num*num*num;
printf("\nValor al Cuadrado: %f",num_cuad);
printf("\nValor al Cubo: %f",num_cubo);
getche();
return(0);      
}
