#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>
#define MAX 10
int min(char* txt){
    for(int i;txt[i]!='\0';++i){
    txt[i]=tolower(txt[i]);
	}
}
struct AL{
    char nombreAlumno[20];
    char apellidoAlumno[20];
    int claveAlumno;
    float calificacionAlumno;
};

int menu(void){
    int num;
	printf("\n| MENU |\n");
	printf("------------------------------------\n1)Mostar Bits");
    printf("\n2)Desplegar Matriz");
    printf("\n3)Encontrar Valor");
    printf("\n4)Palabra Mes.");
    printf("\n5)Desplegar Estructura.");
	printf("\n6)strAlumno Modificar Estructura.");
	printf("\n7)Salir\n------------------------------------\n");
	printf("\nINGRESE UNA OPCIÓN: ");
	scanf("%d", &num);
    return num;
}
int mostrarBits(int n){
	printf("Los bits son:");
  	printf("%d", n>>3 & 1);
 	printf("%d", n>>2 & 1);
  	printf("%d", n>>1 & 1);
  	printf("%d", n & 1);
  	printf("\n");
}
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

int encontrarValor(int matrix[][MAX],int c, int val)
{
  int f, col;
  int cont=0;
  for(f=0; f<c; f++)  
     for(col=0;col<MAX;col++)
        if(matrix[f][col]==val) cont++;
  printf("El valor se encontró %i veces",cont);
}

int palabraMes(char* pal){
	const char* arr[]={"enero","febrero","marzo","abril","mayo","junio","julio","agosto","septiembre","octubre","noviembre","diciembre"};
	char *resultado= NULL;
	int pro=0;
	for(int i=0;i<11;i++){
	resultado=strstr(pal,arr[i]);
	if(resultado){
		pro++;
	}
	}
	if(pro>0){
		printf("Mes existente");
	}
	else{
		printf("Mes no encontrado");
	}
}
void desplegarEstructura (struct AL Alumno)
{
   printf("Los datos actuales del alumno son:\n\n");
   printf("NOMBRE: %s\n", Alumno.nombreAlumno);
   printf("APELLIDO: %s\n", Alumno.apellidoAlumno);
   printf("CLAVE: %d\n", Alumno.claveAlumno);
  printf("CALIFICACION: %.2f\n\n", Alumno.calificacionAlumno);
}
struct AL modificarEstructura ()
{
  struct AL Alumno;
  int laClave;
  float laCalificacion;
   printf("\n\nNombre alumno: ");
   scanf("%s", Alumno.nombreAlumno);
   printf("\n\nNuevo apellido: ");
   scanf("%s", Alumno.apellidoAlumno);   
   printf("\n\nNueva clave: ");
   scanf("%d", &(Alumno.claveAlumno));
   printf("\n\nNueva calificacion: ");
   scanf("%f", &(Alumno.calificacionAlumno));
  return Alumno;
}




int main(){
	int opt;
	int n;
	int val;
	char Mes[255];
	int Matr[MAX][MAX];
	struct AL elAlumno, nuevoAlumno;
	srand(time(NULL));
	llenarMatriz(Matr, MAX);
	strcpy(elAlumno.nombreAlumno, "Luis");
	strcpy(elAlumno.apellidoAlumno, "Montes");
	elAlumno.claveAlumno=22;
	elAlumno.calificacionAlumno=9.9;
	printf("BIENVENIDO AL EXAMEN\n\n");
	do{
		opt = menu();
		switch(opt){
        case 1: 
    	   system("cls");
           printf("\n| 1)Mostar Bits|\n");
           printf("Teclee el numero: ");
           scanf("%i", &n);
           mostrarBits(n);
           break;
        case 2:
        	system("cls");
            printf("\n| 2)Desplegar Matriz |\n");
		    Ver(Matr,MAX);
            break;
        case 3:
        	system("cls");
			printf("\n| 3)Encontrar Valor |\n"); 
            scanf("%d", &val);
            encontrarValor(Matr, MAX,val);
            break;
        case 4:
        	system("cls");
        	printf("\n| 4)Palabra Mes |\n");
        	printf("Ingresa la palabra a buscar\n");
           	getchar();
           	gets(Mes);
           	min(Mes);
           	palabraMes(Mes);
            break;
        case 5:
        	system("cls");
        	printf("\n| 5)Desplegar Estructura |\n");
        	desplegarEstructura(elAlumno);  
            break;
        case 6: 
        	system("cls");
        	printf("\n| 6)strAlumno Modificar Estructura|\n");
        	elAlumno=modificarEstructura();         
          	desplegarEstructura(elAlumno);
            break;
        case 7: 
            break;
        default:
        	system("cls");
            printf("OPCIÓN NO VÁLIDA...\n");
            break;		
	}}while(opt!=7);
	return 0;
}