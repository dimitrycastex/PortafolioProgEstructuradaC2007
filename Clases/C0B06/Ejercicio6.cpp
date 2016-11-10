/*----------------------------------------
Asignatura: Programacion Estructurada
Nombre Programa: Ejercicio6.cpp
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
char nombres1[40],apellidos1[40];
float nota1_1,nota2_1,nota3_1;
float promedio_1;

char nombres2[40],apellidos2[40];
float nota1_2,nota2_2,nota3_2;
float promedio_2;

char nombres3[40],apellidos3[40];
float nota1_3,nota2_3,nota3_3;
float promedio_3;
//
printf("\t***Alummno Nº1***");
printf("\nNombres(Maximo 40 letras): ");
scanf("%s",nombres1);
printf("\nApellidos(Maximo 40 letras): ");      
scanf("%s",apellidos1);      
printf("\nprimera nota: ");
scanf("%f",&nota1_1);
printf("\nsegunda nota: ");
scanf("%f",&nota2_1);
printf("\ntercera nota: ");
scanf("%f",&nota3_1);     

printf("\n\t***Alummno Nº2***");
printf("\nNombres(Maximo 40 letras): ");
scanf("%s",nombres2);
printf("\nApellidos(Maximo 40 letras): ");      
scanf("%s",apellidos2);      
printf("\nprimera nota: ");
scanf("%f",&nota1_2);
printf("\nsegunda nota: ");
scanf("%f",&nota2_2);
printf("\ntercera nota: ");
scanf("%f",&nota3_2); 

printf("\n\t***Alummno Nº3***");
printf("\nNombres(Maximo 40 letras): ");
scanf("%s",nombres3);
printf("\nApellidos(Maximo 40 letras): ");      
scanf("%s",apellidos3);      
printf("\nprimera nota: ");
scanf("%f",&nota1_3);
printf("\nsegunda nota: ");
scanf("%f",&nota2_3);
printf("\ntercera nota: ");
scanf("%f",&nota3_3); 
//
promedio_1=(nota1_1+nota2_1+nota3_1)/3;
promedio_2=(nota1_2+nota2_2+nota3_2)/3;
promedio_3=(nota1_3+nota2_3+nota3_3)/3;
//
printf("\nPromedio de %s en Prog.Estructurada es: %f",nombres1,promedio_1);
printf("\nPromedio de %s en Prog.Estructurada es: %f",nombres2,promedio_2);
printf("\nPromedio de %s en Prog.Estructurada es: %f",nombres3,promedio_3);
getche();
return(0);
}
