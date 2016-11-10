/*----------------------------------------
Asignatura: Programacion Estructurada
Nombre Programa: Ejercicio5.cpp
Grupo Nº6
Laboratorio Nº3
Integrantes:
           Dimitry Jannik Castex Castex
Profesores responsables:
           Julia Garrido S.
           Eric Jeltsch F.
----------------------------------------*/
#include <stdio.h>
#include <conio.h>
#include <math.h>
int expon,base;

void ingresar();
long potencia(int a,int b);
long factorial(int n);

main()
{
 long form0,form1,form2,form3,form4;
 ingresar();
 //
 form0=potencia(base,expon);
 printf("\n%d elevado a %d es: %d",base,expon,form0);
 //
 form1=potencia(2,5)+potencia(5,5)+potencia(2,2)+potencia(7,5);
 printf("\n2^5+5^5+2^2+7^5 [X^Y equivale a \"X elevado a Y\"]: %d",form1);
 //
 form2=potencia(base,expon)+potencia(expon,base)+potencia((base+expon),expon);
 printf("\n(b^e)+(e^b)+(b+e)^e [b=base, e=exponente]: %d",form2);
 //
 form3=factorial(5)+factorial(3)+factorial(6);
 printf("\nEl total de la formula 5!+3!+6! es: %d",form3);
 //
 form4=potencia(base,expon)+factorial(expon);
 printf("\nEl total de la formula b^e+e! [b=base, e=exponente] es: %d",form4);
 getche();
 return(0);
}
//------------------
void ingresar()
{
 do
 {
  printf("Ingrese La Base del 2 al 7: ");
  scanf("%d",&base);
 }while((base<2)||(base>7)); 
 do
 {
  printf("Ingrese el exponente del 1 al 10: ");
  scanf("%d",&expon);
 }while((expon<1)||(expon>10));  
 
}
//------------------
long potencia(int a, int b)
{
 if (b<=0)
  return (1);
 else
  return (a*potencia(a,b-1));
}

long factorial(int n) 
{
if(n<0)
 return(0);
else
 if(n>1) 
 {return (n*factorial(n-1));}
return(1); 
}
