#include<stdio.h>
int main(){
	int n1=0;
	int n2=0;
	int n3=0;
	int g=0;
	int c=0;
	printf("ingrese el primer numero");
	scanf("%i",&n1);
	printf("ingrese el primer segundo");
	scanf("%i",&n2);
	printf("ingrese el primer tercer");
	scanf("%i",&n3);
	
	
	if (n1>n2 && n1>n3){
		g=n1;
	}
	if (n2>n1 && n2>n3){
		g=n2;
	}
	if (n3>n1 && n3>n2){
		
		g=n3;
	}
	if (n1<n2 && n1<n3){
		c=n1;
	}
	if (n2<n1 && n2<n3){
		c=n2;
	}
	if (n3<n1 && n3<n2){
		
		c=n3;
	}
	
	if(g!=n1&&c!=n1){
		printf("%i",n1);
	}
	
	if(g!=n2&&c!=n2){
		printf("%i",n2);
	}
	
	if(g!=n3&&c!=n3){
		printf("%i",n3);
	}
	
	
	
	
	return 0;
}