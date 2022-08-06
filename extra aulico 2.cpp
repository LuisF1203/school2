#include <stdio.h>
#define menu main()

int tripletas(void){
	int val;
	int cant=0;
	int a[100]={};
	int b[50]={};
	int c[50]={};
	int e[50]={1,2,3};
	
	printf("1) Tripletas\n");
	printf("ingresa un valor: ");
	scanf("%i",&val);
	for(int i;i<=50;i++){
		if((i%val)==0){
			printf("el valor es: %i\n",i);
			a[i] = i; 
		}
	}
    for (int i = 0; i < 100; ++i) {
    	if(a[i]>0){
    		printf("%i, ", a[i]);
		}
        
    }
}
int main(){
	int o;
	printf("1) Tripletas\n2) Binario\n3) Maximo Comun divisor recursivo\n4) Salir\n");
	scanf("%i",&o);
	switch(o) {
		case 1: 
		tripletas();
		break;
		case 2: printf("2) Binario\n");
		break;
		case 3: printf("3) Maximo Comun divisor recursivo\n");
		break;
	}
	return 0;
}
