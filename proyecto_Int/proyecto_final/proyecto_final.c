#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

#include "Stats.h" 
#include "Stats.c"


int main(){
	int opt;
	char txt[255];
	char pal[255];
	char txtO[255];
	printf("BIENVENIDO AL PROYECTO INTEGRADOR\n\n");
do{     opt = menu();
		switch(opt){
        case 1: 
    	   system("cls");
           printf("\n| 1)INTRODUCIR TEXTO (1-255 CARACTERES) |\n");
           getchar();
           gets(txt);
           system("cls");
           strcpy(txtO,txt);
		   printf("TEXTO ALAMCENADO EXITOSAMENTE...\n\n");
           break;
        case 2:
        	system("cls");
            printf("\n| 2)DESPLEGAR ESTADÍSTICAS |\n");
            es(txt);
            break;
        case 3:
        	system("cls");
            printf("\n| 3)DESPLEGAR PRONOMBRES ENCONTRADOS |\n");
            P(txt);
            break;
        case 4: //
        	system("cls");
			printf("\n| 4)DESPLEGAR PALABRAS QUE COMIENCEN CON MAYÚSCULAS |\n"); 
            mayusStart(txtO);
            break;
        case 5: //
        	system("cls");
        	printf("\n| 5)DESPLEGAR VERBOS EN GERUNDIO |\n");
            gerundWords(txt);
            break;
        case 6:
        	system("cls");
        	printf("\n| 6)BUSCAR PALABRAS EN TEXTO |\n");
        	printf("Ingresa la palabra a buscar: ");
        	getchar();
			gets(pal);
			bus(txt,pal);
            break;
        case 7: 
        	system("cls");
        	printf("\n| 7)INTERCAMBIAR MAYÚSCULAS Y MINÚSCULAS |\n");
        	minMay(txtO);
            break;

        case 8: 
            break;

        default:
        	system("cls");
            printf("OPCIÓN NO VÁLIDA...\n");
            break;
	}
	}while(opt!=8);
	return 0;
}