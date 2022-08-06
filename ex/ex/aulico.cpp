#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX 8

void llenarMatriz(int[][MAX], int);
void desplegarMatriz(int[][MAX],int);
float promedioMatriz(int[][MAX],int);
void ordenarFilas(int[][MAX],int);
void desplegarPromedios(int[][MAX],int);

int main(void) {
  int myMatrix[MAX][MAX];
  srand(time(NULL));
  llenarMatriz(myMatrix, MAX);
  printf("La matriz con numeros aleatorios es:\n");
  desplegarMatriz(myMatrix, MAX);
  printf("\nEl promedio total de la matriz es: %.2f\n", 
  promedioMatriz(myMatrix, MAX));
  ordenarFilas(myMatrix,MAX);
  printf("\nLa matriz con las filas ordenadas es:\n");
  desplegarMatriz(myMatrix, MAX);
  desplegarPromedios(myMatrix,MAX);
  return 0;
}

void llenarMatriz(int m[][MAX], int cols)
{
  int f,c;

  for(f=0;f<cols; f++)
    for(c=0;c<MAX;c++)
      m[f][c]=rand()%1000;
}

void desplegarMatriz(int m[][MAX], int cols)
{
   int f,c;
  printf("\n");
  for(f=0;f<cols; f++)
    {
    for(c=0;c<MAX;c++)
      {
        printf("%d ",m[f][c]);        
      }
      printf("\n");
      }
}

float promedioMatriz(int m[][MAX], int cols)
{
   int f,c, suma=0;

  for(f=0;f<cols; f++)    
    for(c=0;c<MAX;c++)
      {
        suma+=m[f][c];
      }

  return suma/(MAX*cols);
      
}

void ordenarFilas(int m[][MAX], int cols)
{
  int f,c, pasada, temp, menor, indice, suma=0;

  for(f=0;f<cols; f++)    
    for(c=0;c<MAX-1;c++)
      {
      menor=m[f][c];
      indice=c;
      for(pasada=c;pasada<MAX;pasada++)
      {
         if(m[f][pasada]<menor)
         {
           menor=m[f][pasada];
           indice=pasada;           
         }
      }
      //Hacer el intercambio
      
      temp=m[f][c];
      m[f][c]=menor;
      m[f][indice]=temp;
      
     }
}

void desplegarPromedios(int m[][MAX], int cols)
{
   int f,c, suma=0;
printf("\n");
  for(f=0;f<cols; f++)    
    {
      suma=0;
    for(c=0;c<MAX;c++)
      {
        suma+=m[f][c];
      }
      printf("El promedio de la fila %d es %.2f.\n", f, (float)suma/cols);
    }
}
