#include<stdio.h>
#include<string.h>

int P(char* pal,char* pal2){
	printf(pal);
	char *resultado= NULL;
	int pro=0;
	resultado=strstr(pal,pal2);
	if(resultado){
		pro++;
	}
	printf("\nla palabra se repite %i veces",pro);

}

int main(){
	char pal[255];
	char pal2[255];
	printf("bienvenido al programa\n");
	printf("ingresa la frase: ");
	gets(pal);
	printf("ingresa la palabra a buscar: ");
	gets(pal2);
	P(pal,pal2);
	return 0;
}
