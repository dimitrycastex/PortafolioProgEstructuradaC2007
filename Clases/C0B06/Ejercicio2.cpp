/*----------------------------------------
Asignatura: Programacion Estructurada
Nombre Programa: Ejercicio2.cpp
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
char nombre[25];
int edad,altura;
float peso;
//ingreso de datos
printf("\t***Ingrese los siguientes Datos***");
printf("\nNombre(25 letras Maximo): ");
scanf("%s",nombre);
printf("\nEdad: ");
scanf("%d",&edad);
printf("\nAltura(en cms): ");
scanf("%d",&altura);
printf("\nPeso(en kilogramos): ");
scanf("%f",&peso);
//salida de datos
printf("\n\nNombre: %s",nombre);
printf("\nEdad: %d",edad);
printf("\nAltura: %d",altura);
printf("\nPeso: %.1f",peso);
getche();      
return(0);
}
