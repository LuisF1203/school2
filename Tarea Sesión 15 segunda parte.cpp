#include <stdio.h>
int potencia(int b,int e){
	int mul=b;
  for (int i=1; i <= e; i++ )
   {
   	printf("%i x ",b);
   	mul=mul*b;
   }
   mul=mul/b;
   printf("= %d\n",mul);
}
int main() {
  int n;
  int n2;
  printf("Crea una función potencia() que reciba dos número enteros positivos: b, e.");
  printf("\nIngresa el primer valor: ");
  scanf("%i",&n);
  printf("Ingresa el segundo valor: ");
  scanf("%i",&n2);   
  potencia(n,n2);
  return 0;
}
