/*----------------------------------------
Asignatura: Programacion Estructurada
Nombre Programa: Ejercicio5.cpp
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

char nombres[40];
float nota1,nota2,nota3;
float prom;

void leer();
float promedio();
void mostrar();
main()
{
 leer();
 prom=promedio();
 mostrar();
 getche();
 return (0);
}

void leer()
{
 printf("Ingrese Nombres[40 caracteres maximo]: ");
 scanf("%s",nombres);
 printf("\nIngrese Primera Nota: ");
 scanf("%f",&nota1);
 printf("\nIngrese Segunda Nota: ");
 scanf("%f",&nota2);
 printf("\nIngrese Tercera Nota: ");
 scanf("%f",&nota3);
}

float promedio()
{
 float p; 
 p=(nota1+nota2+nota3)/3;
 return p;
}

void mostrar()
{
 printf("\nEl promedio de nota de %s es: %1.1f",nombres,prom);     
}
