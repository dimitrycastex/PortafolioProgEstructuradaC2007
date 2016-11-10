#include <stdio.h>
#include <math.h>
#include <conio.h>

int Num,i;
float f,x,y;

int leer();
int procesar();
int ver();

main()
{
printf("cuantas veces desea usar la funcion?:");
scanf("%d",&Num);
for(i=1;i<=Num;i++)
{
leer();
procesar();
ver();
}
printf("\n\n\nGracias por usar nuestro programa");
getche();
return(0); 
}

int leer()
{
 printf("\n***Programa que calcula una funcion***\n");
 printf("inserte un valor para X:");
 scanf("%f",&x);      
 printf("\ninserte un valor para Y:");
 scanf("%f",&y);
}

int procesar()
{
 if ((x>30)&&((-20>y)||(y>30)))
 f=(x*x)+(y*y);
 if ((-15>x)||(x>=15)&&(y>=-15))
 f=sqrt(x*y);
 else
 f=x+(y*y*y);
}

int ver()
{
 printf("\nel Valor de la funcion, segun los datos entregados fue de: %f",f);
}
