#include <stdio.h>
#include <conio.h>
#include <stdlib.h>


int leer1();
int ver1();
int ver2();
int ver3();
int promedio();
int A[20];
int n;

main()
{
      int op;
while (op!=6)
{
system("cls");
printf("\n[1]Leer");
printf("\n[2]Ver(1)");
printf("\n[3]Ver(2)");
printf("\n[4]Ver(3)");
printf("\n[5]Promedio");
printf("\n[6]Salir\n\n\n");
scanf("%d",&op);
  switch (op)
  {
   case 1: leer1();break;      
   case 2: ver1();break;
   case 3: ver2();break;
   case 4: ver3();break;
   case 5: promedio();break;
   case 6:exit(1);
   default: printf("\n ERROR");
  }
}
return(0);      
}
//---------------------------------------------------------------
int leer1()
{
system("cls");
printf("\ningrese tamanho de el vector comprendido entre 0 y 20: ");
scanf("%d",&n);
if ((n>=0)&&(n<=20))
 {
  for(int i=0;i<n;i++)
  {
   int v=0;
   printf("\ningrese Numero en el vector para la posicion %d: ",i);
   scanf("%d",&v);
   //validar 0-9
   if ((v>=0)&&(v<=9))
   {
    A[i]=v;
   }
   else
   {
    printf("***Error***");
    i--;
   }
   //fin if
  } //fin for                   
}
 else
{
 printf("\nValor No Valido");
 getche();
}
return(0);
}
//---------------------------------------------------------------
int ver1()
{
  system("cls");
  for(int i=0;i<n;i++)
  {
   printf("%d",A[i]);
  } 
  getche();
  return(0);  
}
//---------------------------------------------------------------
int ver2()
{
 system("cls");
  for(int i=0;i<n;i++)
  {
   for(int j=0;j<=i;j++)
   {printf("%d",A[i]);}
    printf("\n");
  }
getche();
return(0);
}
//----------------------------------------------------------------
int ver3()
{
 system("cls");
 int cont=1,i=0;
  for(i=0;i<n;i++)
  {
   do
   {
   printf("%d",A[cont]);
   cont++;
   }while(cont<i);
  }printf("\n");
  getche();
  return(0);    
}
//----------------------------------------------------------------
int promedio()
{
 int accu,cont=0;
 float to;   
 for(int i=1;i<n;i++)
 {
  if(i%2==0)
  {
   if(A[i]%2!=0)
   {
    accu+=A[i];
    cont++;
   }
  }
 }
 to=accu/cont;
 printf("El promedio de los valores impares en las posiciones pares es: %f",to);
 getche();
}
