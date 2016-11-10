/*----------------------------------------
Asignatura: Programacion Estructurada
Nombre Programa: Ejercicio1.cpp
Grupo Nº6
Laboratorio Nº2
Integrantes:
           Dimitry Jannik Castex Castex
Profesores responsables:
           Julia Garrido S.
           Eric Jeltsch F.
----------------------------------------*/
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int v[20];
int n;
int op;
int ingresar(int *);
int promedio(int ss);
int mayor(int kk);
int sumar_pares(int zz);
int sumar_primos(int hh);
int mostrar(int p);
int es_primo(int num);

main()
{
while(op!=7)
{
system("cls");
printf("\t** Ingrese una opcion **");
printf("\n<1> Ingresar el Vector");
printf("\n<2> Obtener el promedio");
printf("\n<3> Obtener el mayor");
printf("\n<4> Sumar los pares");    
printf("\n<5> Sumar los primos");
printf("\n<6> Mostrar el vector");  
printf("\n<7> Salir");
scanf("%d",&op);
switch(op)
{
 case 1:ingresar(&n);break;
 case 2:promedio(n);break;
 case 3:mayor(n);break;
 case 4:sumar_pares(n);break;
 case 5:sumar_primos(n);break;
 case 6:mostrar(n);break;
 case 7:exit(1);
 default: printf("\nError");getche();
}
}
getche();
return(0);
}
//-------------------------------------
int ingresar(int *t)
{
 int i;
 printf("Ingrese el tamaño del vector: ");
 scanf("%d",t);
    for(i=1;i<=*t;i++)
   {
    printf("Elemento[%d]: ",i);
    scanf("%d",&v[i]);
   }
   return(0);
}
//-------------------------------------
int mostrar(int p)
{
 int i;
 for(i=1;i<=p;i++)
  {
   printf("%d ",v[i]);
  }
  getche();
  return(0);
}
//-------------------------------------
int promedio(int ss)
{
 int i;
 int tot,sum=0;
 for (i=1;i<=ss;i++)
 {
  sum+=v[i];
 }
 tot=sum/ss;
 printf("\nEl promedio de los elementos es: %d",tot);
 getche();
 return(0);              
}
//-------------------------------------
int mayor(int kk)
{
 int may;
 int i=1;
 may=v[i-1];
 for (i=1;i<=kk;i++)
 {
  if(v[i]>may)
   {may=v[i];}
 } 
 printf("El elemento mayor es: %d",may);
 getche();
 return(0);
}
//-------------------------------------
int sumar_pares(int zz)
{
 int zuma=0,i;
 for (i=1;i<=zz;i++)
 {
  if(v[i]%2==0)
  {
   zuma+=v[i];
  }
 }
 printf("la suma de los pares es: %d",zuma);
 getche();
 return(0);
}
//-------------------------------------
int es_primo(int num)
{
int cont=0,aux=1;
 while(aux<num)
 {
  if(num%aux==0)
  {
   cont++;
  }
  aux++;
 }
 if (cont<=2)
 {return(1);}
 else
 {return(0);}
}
//-------------------------------------
int sumar_primos(int hh)
{
 int suma=0,i,isp;
 for (i=1;i<=hh;i++)
 {
  isp=es_primo(v[i]);
  if(isp==1)
  {
   suma+=v[i];
  }
 }
 printf("la suma de los primos es: %d",suma);
 getche();
 return(0);
}
