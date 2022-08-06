
#include <stdio.h>
int main(){
int n=0;
int n2=0;
char n3=0;


printf("Teclee el primer numero (0-255): ");
scanf("%i",&n);
int n4=n;
if(n<=255){
printf("%d",(n&128)>>7);
printf("%d",(n&64)>>6);
printf("%d",(n&32)>>5);
printf("%d",(n&16)>>4);
printf("%d",(n&8)>>3);
printf("%d",(n&4)>>2);
printf("%d",(n&2)>>1);
printf("%d",(n&1));
printf("\nTeclee el segudo numero (0-255): ");
scanf("%i",&n2);
int n5=n2;
printf("%d",(n2&128)>>7);
printf("%d",(n2&64)>>6);
printf("%d",(n2&32)>>5);
printf("%d",(n2&16)>>4);
printf("%d",(n2&8)>>3);
printf("%d",(n2&4)>>2);
printf("%d",(n2&2)>>1);
printf("%d",(n2&1));

printf("\nel primer numero es %i el segundo numero es %i",n4,n5);
printf("\nla suma de %i y %i es:%i",n4,n5,n4+n5);
printf("\nlos primeros 4 son:%d%d%d%d",(n&128)>>7,(n&64)>>6,(n&32)>>6,(n&16)>>6);
printf("\nlos ultimos 4 son:%d%d%d%d",(n2&8)>>3,(n2&4)>>2,(n2&2)>>1,n2&1);
printf("\nel nuevo numero es:%d%d%d%d%d%d%d%d",(n&128)>>7,(n&64)>>6,(n&32)>>6,(n&16)>>6,(n2&8)>>3,(n2&4)>>2,(n2&2)>>1,n2&1);
}else{
	printf("el numero es mayor a 255");
}
  return 0;
}

