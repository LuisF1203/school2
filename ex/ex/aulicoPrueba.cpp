#include <stdio.h>
#include <stdlib.h>
#include<time.h>

#define MAX 10
void imprimeArreglo(int[], int);
void ordenaArreglo(int[], int);
int estaOrdenado(int[], int);
void fillMatrix(int[][MAX], int);
void showMatrix(int[][MAX], int);
int findLargest(int[][MAX], int);


int main(void) {

 
  int matrix[MAX][MAX];
  
  fillMatrix( matrix, MAX);
  showMatrix(matrix, MAX);
  printf("\n\nEl mayor numero encontrado en la matriz fue: %d\n", findLargest(matrix,MAX));
  
  
  int numeros[]={198,0,567,222,832,917,385,421,6,777};
  
  imprimeArreglo(numeros, MAX);
 
  printf("\n\n");
  if(estaOrdenado(numeros,MAX))
    printf("Arreglo ordenado\n\n");
      else printf("Arreglo desordenado.\n\n");
 
    
  ordenaArreglo(numeros, MAX);
  printf("\n\n");
  imprimeArreglo(numeros, MAX);
 
  printf("\n\n");
  if(estaOrdenado(numeros,MAX))    
    printf("Arreglo ordenado\n\n");
      else printf("Arreglo desordenado.\n\n");

    
  return 0;
}

void imprimeArreglo(int arr[], int num)
{
  int i;
  for (i=0;i<num; i++)
    {
      printf("%d ", arr[i]);
    }
}

void ordenaArreglo(int arr[], int num)
{
  int i, menor, indice, temp, vuelta;

  for(vuelta=0;vuelta<num-1;vuelta++)
  {
  menor=arr[vuelta];
  indice=vuelta;
  for (i=vuelta; i<num; i++)
    {
      if (arr[i]<menor)
      {
         menor=arr[i];
         indice=i;
      }
    }

    //Hacer el intercambio
  temp=arr[vuelta];
  arr[vuelta]=menor;
  arr[indice]=temp;
}
  
}

int estaOrdenado(int arr[], int num)
{
  int i, ordenado=1;

  for(i=0;i<num-1; i++)
    {
      if(arr[i] > arr[i+1])
      {
        ordenado=0;
        break;
        } 
    }

  return ordenado;
  
}

void fillMatrix(int m[][MAX], int f)
{
  int filas,columnas;
  srand(time(NULL));

  for(filas=0;filas<f; filas++)
    for(columnas=0;columnas<MAX;columnas++)
      {
        m[filas][columnas]=rand()%1000;
      }
  
}

void showMatrix(int m[][MAX], int f)
{
  int filas,columnas;
  
  for(filas=0;filas<f; filas++)
    {
    for(columnas=0;columnas<MAX;columnas++)
      {
        printf("%d ", m[filas][columnas]);
      }
      printf("\n");
      }
}

int findLargest(int m[][MAX], int f)
{
   int filas,columnas, elMayor;
  elMayor=m[0][0];
  
  for(filas=0;filas<f; filas++)
    {
    for(columnas=0;columnas<MAX;columnas++)
      {
        if (m[filas][columnas] > elMayor)
           elMayor=m[filas][columnas];
      }      
      }
  return elMayor;
}
