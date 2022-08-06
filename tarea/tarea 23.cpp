
#include <stdio.h>
#include <string.h>

void RS(char s1[])
{   
    int c,l = strlen(s1), hl=l/2;
    char aux;
    for (c = 0; c < hl; c++)
    {
        aux = s1[c]; 
        s1[c] = s1[l - c - 1]; 
        s1[l - c - 1] = aux;
    }
}
int main(void){
	char s1[20];
	printf("Ingrese una cadena de texto: ");
	scanf("%s",&s1);
	printf("ingresaste: %s\n",s1);
	for(int x=0;x<20;x++){
	if (s1[x]>97) {
        printf("El contador X vale: %d\n",s1[x]);
    } 
	}
	RS(s1);
    printf("la palabra alreves es: %s",s1);
    

    

    return 0;
}
