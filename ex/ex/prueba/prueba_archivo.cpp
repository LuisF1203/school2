#include <stdio.h>
#include <stdlib.h>
int main() {
	int num;
	
	printf("Ingresa el numero de habitaciones: ");
	scanf("%i",&num);
	for (int i = 0; i < num; i++ )
   {
   	char nm[200];
	char pe[200];
	char he[200];
	char hs[200];
   	printf("Ingresa el numero de la habitación %i: ",i);
   	scanf("%s",&nm);
   	int dato[3]; dato[0] = 322; dato[1]= 112; dato[2]=567;
    int datoExtraido[3]; char textoExtraido [50];
    FILE* fichero;
    printf("el numero de habitación es: %s\n",nm);
    fichero = fopen(nm, "wt");
    printf("ingresa el numero de personas: \n");
    scanf("%s",&pe);
    fprintf (fichero, "%s", pe); 
    printf("ingresa la hora de entrada: \n");
    scanf("%s",&he);
    fprintf (fichero, "%s", he); 
    printf("ingresa la hora de salidan: \n");
    scanf("%s",&hs);
    fprintf (fichero, "%s", hs); 
    fclose(fichero);
   }     
}
