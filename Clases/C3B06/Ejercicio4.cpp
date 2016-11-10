/*----------------------------------------
Asignatura: Programacion Estructurada
Nombre Programa: Ejercicio4.cpp
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

int cod[20],edad[20];
char city[20][40],gen[20][5];
float alt[20];
int usuarios[20];
int n;

int leer_usuario(int *);
int ver_usuario(int n);

main()
{
 leer_usuario(&n);
 ver_usuario(n);
 getche();
 return(0);
}

int leer_usuario(int *p)
{
 printf("Ingrese la cantidad de usuarios: ");
 scanf("%d",&n);  
 int i; 
 for (i=1;i<=*p;i++)
 {
  printf("\nIngrese Codigo: ");
  scanf("%d",&cod[i]);
  printf("Ingrese Ciudad [maximo 40 caracteres]: ");
  scanf("%s",city[i]);
  printf("Ingrese Genero [dama o varon]: ");
  scanf("%s",gen[i]);
  do
  {
  printf("Ingrese Edad [entre 15  y 55]: ");
  scanf("%d",&edad[i]);
  }while((edad[i]<15)||(edad[i]>55));
  do
  {
  printf("Ingrese Altura [entre 1.25 y 2.10]: ");
  scanf("%f",&alt[i]);
  }while((alt[i]<1.25)||(alt[i]>2.10));
  printf("\n");
 }
 
}

int ver_usuario(int n)
{
 int i;   
 for (i=1;i<=n;i++)
 {
  printf("\nCodigo: %d",cod[i]);
  printf("\nCiudad: %s",city[i]);
  printf("\nGenero: %s",gen[i]);
  printf("\nEdad: %d",edad[i]);
  printf("\nAltura: %1.2f",alt[i]);
  printf("\n");
 }
}
