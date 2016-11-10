/*----------------------------------------
Asignatura: Programacion Estructurada
Nombre Programa: Ejercicio4.cpp
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
#include <stdlib.h>

//---[Variables]---
char ciudad1[20],ciudad2[20],ciudad3[20];
float temp1,temp2,temp3;
float min,prom;
//---[Funciones]---
void leer();
float temp_minima();
float promedio();
void mostrar();

main()
{
leer();
min=temp_minima();
prom=promedio();
mostrar();
getche();
return(0);
}

void leer()
{
 printf("Ingrese Ciudad 1[20 caracteres]: ");
 scanf("%s",ciudad1);
 printf("Ingrese La temperatura a las 7.00am de %s: ",ciudad1);
 scanf("%f",&temp1);
 //
 printf("\nIngrese Ciudad 2[20 caracteres]: ");
 scanf("%s",ciudad2);
 printf("Ingrese La temperatura a las 7.00am de %s: ",ciudad2);
 scanf("%f",&temp2);
 //
 printf("\nIngrese Ciudad 3[20 caracteres]: ");
 scanf("%s",ciudad3);
 printf("Ingrese La temperatura a las 7.00am de %s: ",ciudad3);
 scanf("%f",&temp3);
}

float temp_minima()
{
 float a;
 if ((temp1==temp2)&&(temp2==temp3))
 {a=temp1;}
 else
 {
  if((temp1==temp2)&&(temp1<temp3))
  {a=temp1;}
  if((temp2==temp3)&&(temp2<temp1))
  {a=temp2;}
  if((temp1==temp3)&&(temp1<temp2))
  {a=temp1;}
  else
  {
   if ((temp1<temp2)&&(temp2<temp3))
   {a=temp1;}
   if ((temp2<temp1)&&(temp2<temp3))
   {a=temp2;}
   if ((temp3<temp1)&&(temp3<temp2))
   {a=temp3;}   
  }
} 
 return(a);
}

float promedio()
{
  float p;
 p=(temp1+temp2+temp3)/3;
 return(p);
}

void mostrar()
{
 system("cls");
 printf("La temperatura minima fue: %f",min);
 printf("\nEl promedio de las temperaturas es: %f",prom);
}
