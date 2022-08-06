#include<stdio.h>
int main();

int avg2(int opt){
	int m=1;
	int n=2;
	int n2=2;
	int n3=0;
	if(opt==1){
		 printf("\n\nCapturar numeros\n");
		printf("numero 1:");
		scanf("%i",&n);
		printf("numero 2:");
		scanf("%i",&n2);
	
	}
	else{
			switch(opt){

		case 2: printf("\n\nDecimal, hexadecimal y binario\n");
				printf("-------------------------------\n");
				printf("DECIMAL\n");
				printf("El primer numero es: %i\n",n);
				printf("El segundo numero es: %i\n",n2);
				
				printf("Hexadecimal\n");
				printf("El primer numero es: %i\n",n);
				printf("El segundo numero es: %i\n",n2);
				
				printf("Binario\n");
				printf("El primer numero es: %i\n",n);
				printf("El segundo numero es: %i\n",n2);
				printf("\n\nRegresar:");
				scanf("%i",&n3);
				if(n3==0){
					opt=1;
						main();
				}
				
				
		break;
		case 3: printf("hola mundi");
						printf("\n\nRegresar:");
				scanf("%i",&n3);
				if(n3==0){
					opt=1;
						main();
				}
		break;
		case 4: printf("hola mundi");
						printf("\n\nRegresar:");
				scanf("%i",&n3);
				if(n3==0){
					opt=1;
						main();
				}
		break;
		case 5: printf("hola mundi");
						printf("\n\nRegresar:");
				scanf("%i",&n3);
				if(n3==0){
					opt=1;
						main();
				}
		break;
		case 6: printf("6)Mostrar resultado de división");
				printf("\n%i /%i=%i",n,n2,n/n2);
				
						printf("\n\nRegresar:");
				scanf("%i",&n3);
				if(n3==0){
					opt=1;
						main();
				}
		break;
		case 7: printf("hola mundi");
						printf("\n\nRegresar:");
				scanf("%i",&n3);
				if(n3==0){
					opt=1;
						main();
				}
		break;
		case 8: printf("hola mundi");
						printf("\n\nRegresar:");
				scanf("%i",&n3);
				if(n3==0){
					opt=1;
						main();
				}
		break;
		case 9: printf("salir");
		break;
	}
	}
	

	
	
	
	
}




int main(){
	int m=1;
	int opt=0;
	int n=2;
	int n2=2;
	printf("\t\t\tBIENVENIDO AL PROGRAMA\n");
	printf("1)Capturar numeros\n");
	printf("2)Mostrar numeros (Decimal, Binario y Hexadecimal)\n");
	printf("3)Mostrar resultado de AND\n");
	printf("4)Mostrar resultado de OR\n");
	printf("5)Mostrar resultado de NOT del primer numero\n");
	printf("6)Mostrar resultado de división\n");
	printf("7)Mostrar resultado de división entera\n");
	printf("8)Mostrar resultado del módulo\n");	
	printf("9)Salir\n\n");
	scanf("%i",&opt);	
	avg2(opt);
	
	
	
	
	return 0;
}
