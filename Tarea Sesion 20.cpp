#include<stdio.h>
int fac(int n){
	if (n<=1){
		return 1;
	}else{
		return n*fac(n-1);
	}
}

int main(){
	int n;
	printf("Implementara una función recursiva que devuelva el factorial de un número entero positivo. Si no es positivo, el factorial es 1.\n\n");
	printf("Ingresa el numero: ");
	scanf("%i",&n);
	printf("El factorial de %i es: %i",n,fac(n));
	return 0;
}
