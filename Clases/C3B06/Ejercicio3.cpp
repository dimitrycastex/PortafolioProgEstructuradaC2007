/*----------------------------------------
Asignatura: Programacion Estructurada
Nombre Programa: Ejercicio3.cpp
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

int cod,edad;
char city[40],gen[5];
float alt;

int leer_usuario();
int ver_usuario();

main()
{
 leer_usuario();
 ver_usuario();
 getche();
 return(0);
}

int leer_usuario()
{
 printf("Ingrese Codigo: ");
 scanf("%d",&cod);
 printf("Ingrese Ciudad [maximo 40 caracteres]: ");
 scanf("%s",city);
 printf("Ingrese Genero [dama o varon]: ");
 scanf("%s",gen);
 do
 {
 printf("Ingrese Edad [entre 15  y 55]: ");
 scanf("%d",&edad);
 }while((edad<15)||(edad>55));
 do
 {
 printf("Ingrese Altura [entre 1.25 y 2.10]: ");
 scanf("%f",&alt);
 }while((alt<1.25)||(alt>2.10));
 
}

int ver_usuario()
{
 printf("Codigo: %d",cod);
 printf("\nCiudad: %s",city);
 printf("\nGenero: %s",gen);
 printf("\nEdad: %d",edad);
 printf("\nAltura: %1.2f",alt);
}
