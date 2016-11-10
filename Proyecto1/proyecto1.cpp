/********************************************************************
*Programa:Proyecto1.c
* Descripción: primer proyecto de programacion estructurada
* Autor: Dimitry Jannik, Cristopher Rojas
* Curso: 1er año (segundo semestre)
* Profesor Laboratorio: Julia Garrido
* Fecha: 02 de Octubre del 2007
*********************************************************************/

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <math.h>
 
//FUNCIONES------------------------
int desde_teclado();
double per();
double area_tri ();
double circuncentro();
double cuartopunto();
//VARIABLES------------------------
char op1,op2;
float xx1,yy1;
float x2,y2;
float x3,y3;
float x4,y4;
float dist_1,dist_2,dist_3,perimetro;
//CUERPO DEL PROGRAMA--------------
main()
{ int salir=0;
 do
  { system("cls");
    system("color 0A");
    printf("\t***RECREEMOS LOS TRIANGULOS***");
    printf("\nSeleccione la entrada de datos");
    printf("\n\n<1> Desde archivo");
    printf("\n<2> Desde Teclado");
    printf("\n\nO presione <3> Para Salir del programa ");
    op1 = getche();
    switch (op1)
     {
      case '1': system("cls");printf("\t*** Esta Opcion no esta disponible ***");getche();break;
      case '2': desde_teclado();break;
      case '3': exit(1); 
      default: system("cls");printf("\t*** Seleccione una opcion Valida ***");getche();break;
     }
  }while(salir==0);
  return(0);
}
//--------------------ENTRADA DE LOS VERTICES--------------------------
int desde_teclado()
{
 system("cls");
 printf("\n*** Ingrese los Vertices del triangulo ***\n\n");
 //PUNTO 1
 printf("\nPunto 1 <P1>:\n");
 printf("\nCoordenada X: ");
 scanf("%f",&xx1);
 printf("\nCoordenada Y: ");
 scanf("%f",&yy1);
 printf("\n\n");
 //PUNTO 2
 printf("\nPunto 2 <P2>:\n");
 printf("\nCoordenada X: ");
 scanf("%f",&x2);
 printf("\nCoordenada Y: ");
 scanf("%f",&y2);
 printf("\n\n");
 //PUNTO 3
 printf("\nPunto 3 <P3>:\n");
 printf("\nCoordenada X: ");
 scanf("%f",&x3);
 printf("\nCoordenada Y: ");
 scanf("%f",&y3);
 printf("\n\n");
 //mostrar menu de opciones numero dos
   int salir2=0;
   do
  { system("cls");
    printf("\t***RECREEMOS LOS TRIANGULOS***");
    printf("\nSeleccione las operaciones a hacer:");
    printf("\n\n<1> Calcular Perimetro del triangulo");
    printf("\n<2> Calcular Area del triangulo");
    printf("\n<3> Calcular Centroide del triangulo");
    printf("\n<4> Calcular la distancia de un cuarto punto al triangulo");
    printf("\n<5> Volver al menu principal");
    op2 = getche();
    switch (op2)
     {
      case '1': system("cls"); per();break;
      case '2': system("cls"); area_tri();break;
      case '3': system("cls"); circuncentro();break;
      case '4': system("cls"); cuartopunto();break;
      case '5': salir2=1;break; 
      default: system("cls");printf("\t*** Seleccione una opcion Valida ***");getche();break;
     }
  }while(salir2==0);
  return(0);
}

//----------------PERIMETRO------------------------------------
double per ()
{
      
      system("cls");
      //distancia entre P1 Y P2
      dist_1= sqrt (((x2-xx1)*(x2-xx1))+((y2-yy1)*(y2-yy1)));
      printf("\tLa distancia es: %f",dist_1);
      //distancia entre P2 Y P3
      dist_2= sqrt (((x3-x2)*(x3-x2))+((y3-y2)*(y3-y2)));
      printf("\n\n\tLa distancia es: %f",dist_2);
      //distancia entre P3 Y P1
      dist_3= sqrt (((xx1-x3)*(xx1-x3))+((yy1-y3)*(yy1-y3)));
      printf("\n\n\tla distancia es: %f",dist_3);
      //CALCULO DEL PERIMETRO
      perimetro= dist_1+dist_2+dist_3;
      printf("\n\n\tEl perimetro del triangulo es:%f",perimetro);
      getche();
      return(0);
}
//----------------AREA DEL TRIANGULO------------------------------
double area_tri()
{
      float p,area,a;
      
      printf(" \nla formula del area por medio de horon  ");
      //distnacias
      dist_1= sqrt (((x2-xx1)*(x2-xx1))+((y2-yy1)*(y2-yy1)));
      dist_2= sqrt (((x3-x2)*(x3-x2))+((y3-y2)*(y3-y2)));
      dist_3= sqrt (((xx1-x3)*(xx1-x3))+((yy1-y3)*(yy1-y3)));
      //medioperimetro
      p=(dist_1+dist_2+dist_3)/2;
      //areatriangulo
      a= (p*(p-dist_1))*(p-dist_2)*(p-dist_3);
      area=sqrt(a);
      printf("\n\nel area del triangulo  es : %f ",area);
      getche();
      return(0);
}

//--------CIRCUNCENTRO---------------------------
double circuncentro()
{
      float xc,yc;
      printf("mediante la formula de...");
      //componente x del baricentro
      xc=(xx1+x2+x3)/3;
      //componente y del baricentro
      yc=(yy1+y2+y3)/3;
      printf("\nel punto del baricentro es:%f ; %f",xc,yc);      
      getche();
      return(0);
}
//-----------distancia cuarto punto al triangulo----------------------------
double cuartopunto()
{
      float dist1,dist2,dist3,distancia;
      printf("\t***ingrese  el cuarto punto: ***");
      printf("\nPunto 4 <P4>:\n");
      printf("\nCoordenada X: ");
      scanf("%f",&x4);
      printf("\nCoordenada Y: ");
      scanf("%f",&y4);
      system("cls");
      dist1= sqrt (((x4-xx1)*(x4-xx1))+((y4-yy1)*(y4-yy1)));
      dist2= sqrt (((x4-x2)*(x4-x2))+((y4-y2)*(y4-y2)));
      dist3= sqrt (((x4-x3)*(x4-x3))+((y4-y3)*(y4-y3)));
      if((dist1==dist2)&&(dist1==dist3))//las distancias son iguales
      {printf("\nLas tres distancias son iguales, y son: %f",dist2);}
      //----------------------------------------------------------
      if ((dist1==dist2)&&(dist1<dist3))//dist 1 = dist2
      {printf("\nHay dos distancias iguales: %f",dist1);}
      else
      {printf("\nla distancia es: %f",dist3);}
      //---------------------------------------
      if ((dist1==dist3)&&(dist1<dist2))
      {printf("\nHay dos distancias iguales: %f",dist1);}
      else
      {printf("\nla distancia es: %f",dist2);}
      //---------------------------------------
      if ((dist2==dist3)&&(dist2<dist1))
      {printf("\nHay dos distancias iguales: %f",dist3);}
      else
      {printf("\nla distancia es: %f",dist1);}
      //---------------------------------------
      if ((dist1!=dist2)&&(dist2!=dist3)&&(dist1!=dist3))
      {
       if ((dist1<dist2)&&(dist2<dist3))
       {distancia=dist1;}
       if ((dist2<dist1)&&(dist1<dist3))
       {distancia=dist2;}
       if ((dist3<dist1)&&(dist1<dist2))
       {distancia=dist3;}
       printf("\n\nla distancia del punto 4 al triangulo es:%f",distancia);
      }
      getche();
      return(0);
}
