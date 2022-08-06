#include <stdio.h>
int main(){
	int C=0;
	int T=0;
	int TS=0;
	printf("Teclee el numero [40]: ");
	scanf("%i",&C);
	printf("Teclee el numero [30]: ");
	scanf("%i",&T);
	printf("Teclee el numero [37]: ");
	scanf("%i",&TS);
	float Sum=C+T+TS;
	printf("El promedio de %i + %i + %i es:%.2f",C,T,TS,Sum/3);
	printf("\nEl residuo de dividir el %i en el %i da: %i",C,TS,C%TS);
	
	printf("\n\n\n--------------El %i incrementado en 1---------------\n\n",C);
	for (int i=1;i<2;i++){
		printf("\nEl %i incrementado en %i da: %i",C,i,C+i);
	}
	
	printf("\n\n\n--------------El %i incrementado en 5---------------\n\n",T);
	for (int i=1;i<6;i+=1){
		printf("\nEl %i incrementado en %i da: %i",T,i,T+i);
	}
	return 0;
}