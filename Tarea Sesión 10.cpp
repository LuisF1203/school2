#include <stdio.h>

int main(void) {

int cuatroLetras=0b01001000011011110110110001100001;
unsigned char l1=cuatroLetras>>24;
printf("%c",l1);

unsigned char l3=(cuatroLetras & 0b00000000111111110000000000000000)>>16;
printf("%c",l3);

unsigned char l4=(cuatroLetras & 0b00000000000000001111111100000000)>>8;
printf("%c",l4);

unsigned char l5=cuatroLetras;
printf("%c",l5);



printf("\n///////////////////////////////////////////\n\n");

int n=0;
printf("Dame un numero: ");
scanf("%i",&n);
printf("%d",(n&128)>>7);
printf("%d",(n&64)>>6);
printf("%d",(n&32)>>5);
printf("%d",(n&16)>>4);
printf("%d",(n&8)>>3);
printf("%d",(n&4)>>2);
printf("%d",(n&2)>>1);
printf("%d",(n&1));

if((("%d",(n&4)>>2)&("%d",(n&2)>>1)&("%d",(n&1)))==1){
	printf("\nLa cadena de bits termina con 3 UNOs");
}else{
	printf("\nLa cadena de bits NO termina con 3 UNOs");
}
  return 0;
}