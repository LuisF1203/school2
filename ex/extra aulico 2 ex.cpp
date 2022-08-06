#include <stdio.h>
#define letrero printf("\n1) Tripletas \n2)Binario recursivo\n3)Maximo Comun divisor recursivo\n4)Salir\nTeclee la opcion deseada ")
#define leer scanf
int miMenu();
void tripletas(int);
void losBits(char, int);
int mcd(int, int);
int main(void) {
  int valor, opc;
  char num;
  do{
  valor=miMenu();
  switch(valor)
    {
      case 1:   printf("En base a que numero obtener las tripletas? ");
        leer("%d", &opc);
                tripletas(opc);
                break;
      case 2: printf("Que numero quieres imprimir en binario?");
              leer("%d", &num);
              losBits(num,7);
              break;
      case 3: printf("El maximo comun divisor de 325 y 100 es: %d", mcd(325,100));
             break;
    }
    } while (valor!=4);
  
  return 0;
}
int miMenu()
{
  int opc; 
  do {
    letrero;
    scanf("%d", &opc);
    if(opc>4 || opc<1) printf("Opcion no valida\n\n");
    } while (opc<1 || opc>4);
  return opc;
}
void tripletas(int cual)
{
   int i,j,k;
  for (i=0; i<=20; i++)
    for(j=0;j<=20; j++)
      for (k=0;k<=20; k++)
        {
          if ( (i+j+k)%cual ==0 )
          {
            printf("%d-%d-%d\n",i,j,k);
          }
        }
}
void losBits(char cual, int longitud)
{
    if(longitud<0) return;
   printf("%d", (cual>>longitud) & (1) );
  losBits(cual, longitud-1);
}
int mcd(int a, int b)
{
    if (a == 0) return b;
    return mcd(b % a, a);
}
