/*----------------------------------------
Asignatura: Programacion Estructurada
Nombre Programa: Ejercicio5.cpp
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
char nombres[40];
char apellidos[40];
char asignatura[30];
float nota1,nota2,nota3;
float promedio;
printf("\nIngrese Nombres(Maximo 40 letras): ");
scanf("%s",nombres);
printf("\nIngrese Apellidos(Maximo 40 letras): ");      
scanf("%s",apellidos);      
printf("\nIngrese Asignatura(Maximo 30 letras): ");
scanf("%s",asignatura);
printf("\nIngrese la primera nota: ");
scanf("%f",&nota1);
printf("\nIngrese la segunda nota: ");
scanf("%f",&nota2);
printf("\nIngrese la tercera nota: ");
scanf("%f",&nota3);     
promedio = (nota1+nota2+nota3)/3;
printf("\nEl Promedio de es: %2.1f",promedio);
  if (promedio<4)
  {printf("\nEl Alumno va a Examen.");}
  else
  {printf("\nEl Alumno NO va a Examen.");}     
getche();      
return(0);
}
