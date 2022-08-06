#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int min(char* txt){
    for(int i;txt[i]!='\0';++i){
    txt[i]=tolower(txt[i]);
	}
}
int es(char* txt){
	
	min(txt);
	char v[5]={'a','e','i','o','u'};
	int nv;
	int c;
	int es=0;
	int consonantes=0;
	printf("%s\n",txt);
	printf("El numero de caracteres es de: %d\n",strlen(txt));
	for(int x=0;x<strlen(txt);x++){
	if(txt[x]==' '){
		printf("%c",txt[x]);
		es++;
	}
	if(txt[x]=='b'|| txt[x]=='c' || txt[x]=='d' || txt[x]=='f' || txt[x]=='g' || txt[x]=='h' || txt[x]=='j' || txt[x]=='k' || txt[x]=='l' || txt[x]=='m' || txt[x]=='n' || txt[x]=='p' || txt[x]=='q' || txt[x]=='r' || txt[x]=='s' || txt[x]=='t' || txt[x]=='v' || txt[x]=='w' || txt[x]=='x' || txt[x]=='y' || txt[x]=='z')
		{
		consonantes++;
		}
	}
		for ( int Vo = 0; Vo <= 5; Vo++ )
		{
			for ( int i = 0; i < strlen(txt); i++ )
		   {
			if(v[Vo]==txt[i]){
				nv++;
			}
		   }
   		}
   	printf("\nel numero de vocales es: %i",nv);
   	printf("\nel numero de consonantes es: %i",consonantes);
   	printf("\nel numero de palabras es: %i",es+1);
   	printf("\nel numero de espacios es: %i",es);
}
int P(char* pal){
	min(pal);
	const char* arr[]={"yo","tu","el","ella","nosotros","nosotras","ustedes","vosotros","vosotras","ellos","ellas"};
	char *resultado= NULL;
	int pro=0;
	for(int i=0;i<11;i++){
	resultado=strstr(pal,arr[i]);
	if(resultado){
		printf(arr[i]);
		printf("\n");
		pro++;
	}
	}
	printf("\nel numero de pronombres es de: %i\n",pro);
}
int bus(char* pal,char* pal2){
	
	min(pal);
	printf(pal);
	char *resultado= NULL;
	int pro=0;
	resultado=strstr(pal,pal2);
	if(resultado){
		pro++;
	}
	printf("\nla palabra se repite %i veces\n",pro);
}





int minMay(char* txt){
	printf("Texto original: %s\n",txt);
	printf("Texto Invertido: ");
   for (int i = 0; i < strlen(txt); i++ )
   {
   	if(txt[i]>64&&txt[i]<90){
   		printf("%c",txt[i]+32);
	   }
	   else{
	   		if(txt[i]>96&&txt[i]<122){
	   		printf("%c",txt[i]-32);
		   }
		   else{
		   	printf("%c",txt[i]);
		   }
	   }
	   }
}



int main(){
	int opt;
	char txt[255];
	char pal[255];
	char txtO[255];
	printf("Proyecto integrador\n\n");
do{
		printf("\nMENU\n");
		printf("-----------------\n1)Introducir texto (hasta 255 caracteres)\n2)Desplegar estadísticas\n3)Desplegar los pronombres encontrados\n4)Desplegar todas las palabras que comienzan con mayúsculas\n5)Desplegar los verbos en gerundio.\n6)Buscar una palabra en el texto.\n7)Intercambiar mayúsculas y minúsculas.\n8)Salir\n-----------------\n");
		scanf("%i",&opt);
		switch(opt){
        case 1: 
    	   system("cls");
           printf("\nIntroducir texto (hasta 255 caracteres)\n");
           getchar();
           gets(txt);
           system("cls");
           strcpy(txtO,txt);
		   printf("Texto almacenado con exito!!\n\n");
           break;
        case 2:
        	system("cls");
            printf("\nDesplegar estadísticas\n");
            es(txt);
            break;
        case 3:
        	system("cls");
            printf("\nDesplegar los pronombres encontrados\n");
            P(txt);
            break;
        case 4:
        	system("cls");
			printf("\nDesplegar todas las palabras que comienzan con mayúsculas\n"); 
            break;
        case 5:
        	system("cls");
        	printf("\nDesplegar los verbos en gerundio.\n");
            break;
        case 6:
        	system("cls");
        	printf("\nBuscar una palabra en el texto.\n");
        	printf("ingresa la palabra a buscar: ");
        	getchar();
			gets(pal);
			bus(txt,pal);
            break;
        case 7:
        	system("cls");
        	printf("\nIntercambiar mayúsculas y minúsculas\n");
        	minMay(txtO);
            break;
        case 8:
            break;
        default:
        	system("cls");
            printf("Opción no válida\n");
            break;
	}
	}while(opt!=8);
	return 0;
}
