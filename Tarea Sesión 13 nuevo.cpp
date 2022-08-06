#include<stdio.h>
int main(){
	
	int m=0;
	int a=0;
	printf("Ingresa el numero del mes: ");
	scanf("%i",&m);
		if(m<=12){

	switch(m){
		case 1:printf("enero\n Este mes tiene 31 días");
			   break;
		case 2:
			   printf("Febrero\nElige el año:");
			   scanf("%i",&a);
			   	if(a%4==0){
					printf("\nEl mes tiene 29 días");
				}else{
					printf("\nEl mes tiene 28 días");
				}
			   break;
		case 3:printf("marzo\n Este mes tiene 31 días");
			   break;
		case 4:printf("abril\n Este mes tiene 30 días");
			   break;
		case 5:printf("mayo\n Este mes tiene 31 días");
			   break;
		case 6:printf("junio\n Este mes tiene 30 días");
			   break;
		case 7:printf("julio\n Este mes tiene 31 días");
			   break;
		case 8:printf("agosto\n Este mes tiene 31 días");
			   break;
		case 9:printf("septiembre\n Este mes tiene 30 días");
			   break;
		case 10:printf("octubre\n Este mes tiene 31 días");
			   break;
		case 11:printf("noviembre\n Este mes tiene 30 días");
			   break;
		case 12:printf("diciembre\n Este mes tiene 31 días");
			   break;
	}
	
	}
	else{
		printf("Mes no valido");
	}
	
	
	
	return 0;
}