#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

#define menu printf("Seleccione la opción deseada: \n1)Ultimos 4 bits de un numero\n2)Desplegar matriz\n3)Buscar valor en matriz\n4)Determinar si la palabra corresponde a un mes\n5)Manejar estructuras\n6)Salir\n")
#define MAX 10

struct strAlumno{
    char nombreAlumno[20];
    char apellidoAlumno[20];
    int claveAlumno;
    float calificacionAlumno;
};

int desplegarMenu();
void mostrarBits(short);
void desplegarMatriz(short[][MAX], short);
void llenarMatriz(short[][MAX], short);
int encontrarValor(short[][MAX],short, short);
void mayusculas(char[], char[], int);
void palabraMes(char[],int);
void desplegarEstructura (struct strAlumno);
struct strAlumno modificarEstructura ();


int main(void) {
int opc, miValor;
short n;
short myMatrix[MAX][MAX];
char laPalabra[20];
struct strAlumno elAlumno, nuevoAlumno;
  
//Llenar los datos de un alumnos
strcpy(elAlumno.nombreAlumno, "Alejandro");
strcpy(elAlumno.apellidoAlumno, "Piza");
elAlumno.claveAlumno=22;
elAlumno.calificacionAlumno=9.9;
  
//Para iniciar llenamos la matriz con numeros aleatorios
  llenarMatriz(myMatrix, MAX);
  do{
    opc=desplegarMenu();
    switch (opc)
      {
        case 1: 
                printf("Teclee el numero del cual quiere obtener los 3 ultimos bits: ");
              scanf("%hu", &n);
                mostrarBits(n); 
                break;
        case 2:          
             desplegarMatriz(myMatrix, MAX);
             break;

        case 3:
             printf("Que valor quiere buscar?: ");
             scanf("%d", &miValor);
             printf("El valor %d se encontro %d veces en la matriz.\n\n", miValor, encontrarValor(myMatrix, MAX,miValor));
             break;
        case 4:
             printf("Teclea la palabra: ");             
             scanf("%s", laPalabra);             
             palabraMes(laPalabra, 20);
             break;
        case 5:
           desplegarEstructura(elAlumno);   
           elAlumno=modificarEstructura();           
          desplegarEstructura(elAlumno);
           break;
      }
    
  } while (opc!=6);
  
  
  return 0;
}


// Comienzan las funciones  - - - - - - - - - - - - - 


int desplegarMenu()
{
  int opcion;
  
  do{
    menu;
    printf("Teclee la opcion: ");
    scanf("%d", &opcion);
  } while (opcion<1 || opcion>6);

    return opcion;
}

void mostrarBits(short num)
{
  printf("Los bits son:");

  printf("%d", num>>3 & 1);
  printf("%d", num>>2 & 1);
  printf("%d", num>>1 & 1);
  printf("%d",num & 1);
  

  printf("\n");
  
}

void llenarMatriz(short matrix[][MAX], short cuantos)
{
   srand(time(0));
  int filas, columnas;
  for(filas=0; filas<cuantos; filas++)
     for(columnas=0;columnas<MAX;columnas++)
         matrix[filas][columnas]=rand() % 100;
  
}
void desplegarMatriz(short matrix[][MAX], short cuantos)
{
int filas, columnas;
  for(filas=0; filas<cuantos; filas++)
    {
     for(columnas=0;columnas<MAX;columnas++)
        printf("%d ", matrix[filas][columnas]);
      printf("\n");
      }
  printf("\n\n");  
}

int encontrarValor(short matrix[][MAX],short cuantos, short valor)
{
  int filas, columnas;
  int encontrado=0;
  for(filas=0; filas<cuantos; filas++)  
     for(columnas=0;columnas<MAX;columnas++)
        if(matrix[filas][columnas]==valor) encontrado++;

  return encontrado;
}


//Funcion que copia en str2 la cadena str1, pero en mayusculas
void mayusculas(char str1[], char str2[], int longitud)
{
  int i;
    
  for (i=0;i<longitud; i++)
    {
      if(str1[i]>=97 && str1[i]<=122)      
        str2[i]=str1[i]-32;
      else str2[i]=str1[i];
    }
  
}

void palabraMes(char p[], int cantidad)
{
  char palabra[cantidad];
  mayusculas(p, palabra, cantidad);
    
  if (  strcmp(palabra,"ENERO"  )==0 ||
        strcmp(palabra,"FEBRERO"  )==0 ||
        strcmp(palabra,"MARZO"  )==0 ||
        strcmp(palabra,"ABRIL"  )==0 ||
        strcmp(palabra,"MAYO"  )==0 ||
        strcmp(palabra,"JUNIO"  )==0 ||
        strcmp(palabra,"JULIO"  )==0 ||
        strcmp(palabra,"AGOSTO"  )==0 ||
        strcmp(palabra,"SEPTIEMBRE"  )==0 ||
        strcmp(palabra,"OCTUBRE"  )==0 ||
        strcmp(palabra,"NOVIEMBRE"  )==0 ||
        strcmp(palabra,"DICIEMBRE"  )==0
    )   
    printf("\nLa palabra tecleada es un mes.\n\n");
  
  else printf("\nLa palabra tecleada NO es un mes.\n\n");
    
}

void desplegarEstructura (struct strAlumno elAlumno)
{
   printf("Los datos actuales del alumno son:\n\n");
   printf("NOMBRE: %s\n", elAlumno.nombreAlumno);
   printf("APELLIDO: %s\n", elAlumno.apellidoAlumno);
   printf("CLAVE: %d\n", elAlumno.claveAlumno);
  printf("CALIFICACION: %.2F\n\n", elAlumno.calificacionAlumno);
}

struct strAlumno modificarEstructura ()
{
  struct strAlumno elAlumno;
  int laClave;
  float laCalificacion;
  
   printf("\n\nTeclee el nuevo nombre del alumno: ");
   scanf("%s", elAlumno.nombreAlumno);
   printf("\n\nTeclee el nuevo apellido del alumno: ");
   scanf("%s", elAlumno.apellidoAlumno);   
   printf("\n\nTeclee la nueva clave del alumno: ");
   scanf("%d", &(elAlumno.claveAlumno));
   printf("\n\nTeclee la nueva calificacion del alumno: ");
   scanf("%f", &(elAlumno.calificacionAlumno));

  return elAlumno;
}