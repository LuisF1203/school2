/*
Implemente una función max3 que devuelva el mayor entre tres números enteros recibidos.
Implemente una función avg2 que devuelva el promedio de dos números enteros recibidos.
Implemente una función median que devuelva la mediana de tres números enteros recibidos: el número que estaría en la mitad si estuvieran ordenados.
Utilice los 3 métodos para calcular x como: el promedio de el mayor de tres números dados por el usuario y la mediana de los mismos.
- Ejemplo. Si los números son: 1, 2, 3, x = promedio(3, 2) = 2.5

*/
#include <stdio.h>
int max3(int n1,int n2,int n3){

	if (n1>n2 && n1>n3){
		return n1;
	}
	if (n2>n1 && n2>n3){
		return n2;
	}
	if (n3>n1 && n3>n2){
		return n3;
	}
	
}

int avg2(int num1,int num2){
	
	int prom=(num1+num2)/2;
	
	return prom;
	
	
}
int median(int nb1,int nb2,int nb3){
	
	int g=0;
	int c=0;
	if (nb1>nb2 && nb1>nb3){
		g=nb1;
	}
	if (nb2>nb1 && nb2>nb3){
		g=nb2;
	}
	if (nb3>nb1 && nb3>nb2){
		
		g=nb3;
	}
	
	if (nb1<nb2 && nb1<nb3){
		c=nb1;
	}
	if (nb2<nb1 && nb2<nb3){
		c=nb2;
	}
	if (nb3<nb1 && nb3<nb1){
		
		c=nb3;
	}
	
	
	if(g!=nb1&&c!=nb1){
		return nb1;
	}
	
	if(g!=nb2&&c!=nb2){
		return nb2;
	}
	
	if(g!=nb3&&c!=nb3){
		return nb3;
	}
	



	
	
}


main(){





	int n1=0;
	int n2=0;
	int n3=0;
	int num1=0;
	int num2=0;
	int nb1=0;
	int nb2=0;
	int nb3=0;
	int p1=0;
	int p2=0;
	int p3=0;
	printf("\t\t Implemente una función max3 que devuelva el mayor entre tres números enteros recibidos.\n\n");
	printf("ingrese el primer numero: ");
	scanf("%i",&n1);
	printf("ingrese el segundo numero: ");
	scanf("%i",&n2);
	printf("ingrese el tercer numero: ");
	scanf("%i",&n3);
	printf("El numero mayor es: %i",max3(n1,n2,n3));
	
	printf("\n\n\t\t Implemente una función avg2 que devuelva el promedio de dos números enteros recibidos.\n\n");
	printf("ingrese el primer numero: ");
	scanf("%i",&num1);
	printf("ingrese el segundo numero: ");
	scanf("%i",&num2);
	printf("El promedio es: %i",avg2(num1,num2));

    
    printf("\n\n\t\t Implemente una función median que devuelva la mediana de tres números enteros recibidos: el número que estaría en la mitad si estuvieran ordenados.\n\n");
    printf("ingrese el primer numero: ");
	scanf("%i",&nb1);
	printf("ingrese el primer segundo: ");
	scanf("%i",&nb2);
	printf("ingrese el primer tercer: ");
	scanf("%i",&nb3);
    printf("La mediana es: %i\n",median(nb1,nb2,nb3));
    
    printf("\n\n\t\tUtilice los 3 métodos para calcular x como: el promedio de el mayor de tres números dados por el usuario y la mediana de los mismos.\n\n");
    printf("ingrese el primer numero: ");
	scanf("%i",&p1);
	printf("ingrese el primer segundo: ");
	scanf("%i",&p2);
	printf("ingrese el primer tercer: ");
	scanf("%i",&p3);
	printf("El numero mayor es: %i\n",max3(p1,p2,p3));
	printf("La mediana es: %i\n",median(p1,p2,p3));
	
	float prom= (float)(max3(p1,p2,p3))/median(p1,p2,p3);
 	
	printf("El promedio es: %.1f\n",prom);
	printf("%i, %i, %i, x = promedio(%i, %i) = %.1f",p1,p2,p3,max3(p1,p2,p3),median(p1,p2,p3),prom);
    
return 0;
}