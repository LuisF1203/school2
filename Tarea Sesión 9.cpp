#include<stdio.h>
int main(){
	unsigned int n1=0b11000001111100110000000000000000;
	unsigned int signo,mascara,exponente,mantisa;
	signo=n1>>31;
	printf("el signo es %d",signo);
	
	
	mascara=0b01111111100000000000000000000000;
	exponente=n1&mascara;
	exponente>>=23;
	printf("\nel exponente es %d",exponente);
	
	
	mascara=0b00000000011111111111111111111111;           
	mantisa=n1&mascara;
	printf("\nla mantisa es %d",mantisa);
	return 0;
}