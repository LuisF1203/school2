#include<stdio.h>
int main(){
	int m=0;
	int a=0;
	printf("Escriba el mes: ");
	scanf("%i",&m);
	if(m<=12){
		
		if(m==2){
			printf("Elegiste febrero\n");
				printf("Elige el a�o:");
				scanf("%i",&a);
				printf("Elegiste el a�o %i",a);
				if(a%4==0){
					printf("\nEl mes tiene 29 d�as");
				}else{
					printf("\nEl mes tiene 28 d�as");
				}
				
		}else{
			printf("El mes tiene 31 d�as");
		}
	}
	else{
		printf("Mes no valido");
	}
	
	return 0;
}
