#include<stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAX 10

void llenarMatriz(int m[][MAX], int cl)
{
  int f,c;
  for(f=0;f<cl; f++)
    for(c=0;c<MAX;c++)
      m[f][c]=rand()%1000;
}

void Ver(int m[][MAX], int cols)
{
   int f,c;
  for(f=0;f<cols; f++)
    {
    printf("------ ");
    for(c=0;c<MAX;c++)
      {
        printf("%d ",m[f][c]);        
      }
      printf("------\n");
      }
}

float prom(int m[][MAX], int cl)
{
   int f,c, sum=0;
  for(f=0;f<cl; f++)    
    for(c=0;c<MAX;c++)
      {
        sum+=m[f][c];
      }
  return sum/(MAX*cl);
      
}
void ord(int m[][MAX], int cols){
  int f,c, p, tmp, mn, i, sum=0;

  for(f=0;f<cols; f++)    
    for(c=0;c<MAX-1;c++)
      {
      mn=m[f][c];
      i=c;
      for(p=c;p<MAX;p++)
      {
         if(m[f][p]<mn)
         {
           mn=m[f][p];
           i=p;           
         }
      }
      tmp=m[f][c];
      m[f][c]=mn;
      m[f][i]=tmp;
     }
}


void verprom(int m[][MAX], int cl)
{
   int f,c, sum=0;
   float pr;
	for(f=0;f<cl; f++)    
    {
      sum=0;
    for(c=0;c<MAX;c++)
      {
        sum+=m[f][c];
      }
      pr=(float)sum/cl;
      printf("Promedio fila %d es %.2f.\n", f, pr);
    }
}


float prt(int m[][MAX], int f){

int fl,cl;
float prom=0;
for(fl=0;fl<f; fl++)
for(cl=0;cl<MAX;cl++)
{ 
 prom+= m[fl][cl];
}
prom = (prom/(float)(MAX*MAX));
return prom;
}

int main(void){
	int Matr[MAX][MAX];
	int opt;
	srand(time(NULL));
	llenarMatriz(Matr, MAX);
	printf("Luis Fernando Montes Blanco | EXAMEN AULICO 2\n");
	do{
		printf("-----------------\n1)Ver matriz\n2)Ordenar Matriz\n3)Promedio fila Matriz\n4)Promedio Matriz\n5)Salir\n-----------------\n");
		scanf("%i",&opt);
		switch(opt){
        case 1: 
           printf("\nVer matriz\n");
		   Ver(Matr,MAX);
           break;
        case 2:
            printf("\nMatriz Ordenada\n");
		  	ord(Matr, MAX);
		  	Ver(Matr, MAX);
            break;
        case 3:
            printf("\nPromedio fila Matriz\n");
		  	prt(Matr, MAX);
		  	verprom(Matr,MAX);
            break;
        case 4:
			printf("\nEl promedio total de la matriz es: %.2f\n", 
			prt(Matr, MAX));
			ord(Matr,MAX);
            break;
        case 5:
            break;
        default:
            printf("Opción no válida\n");
            break;
	}
	}while(opt!=5);
}

