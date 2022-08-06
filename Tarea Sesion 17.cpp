#include<stdio.h>
int main(){
	float M=0;
	int A=0;
	float Ta=0;
	float monto;
	printf("Monto a invertir: ");
	scanf("%f",&M);
	printf("Años de la inversión: ");
	scanf("%i",&A);
	for(float i=3;i<=5;i+=0.5){
		monto=M;
		printf("Tasa: %.2f\n",i);
		for(int j=1; j<=A;j++){
			monto=monto*(1+i/100);
			printf("Año %d, monto %.2f\n",j,monto);
		}
	}
	return 0;
}
/*
int main(){
	float monto,montoActual;
	int tiempo,j;
	float i;
	
	printf("Monto a invertir: ");
	scanf("%f",&monto);
	printf("Años de la inversión: ");
	scanf("%d",&tiempo);
	for(i=3;i<=5;i+=0.5){
		montoActual=monto;
		printf("Tasa: %.2f\n",i);
		for(j=1; j<=tiempo;j++){
			montoActual=montoActual*(1+i/100);
			printf("Año %d, monto %.2f\n",j,montoActual);
		}
	}
	
	
	
	
	return 0;
}*/
