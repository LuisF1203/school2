#include <stdio.h>
#define menu Men() 
#define leer scanf
#include "funct.h" 
#include "funct.cpp"
int main(void){
    int opcion, nt, n1, n2;
    do{
        opcion = menu;
        switch (opcion)
        {

        case 1: 
           printf("\nTRIPLETAS");
           printf("\nIngrese un valor: ");
           leer("%d",&nt);
           Tr(nt);
           break;

        case 2:
            printf("\nBINARIO");
            printf("\nIngrese un valor para indicar su binario: ");
            leer("%d",&nt);
            printf("\n%d: ",nt);
            Bin(nt);
            break;

        case 3:
            printf("\nMÁXIMO CÓMUN DIVISOR");
            printf("\nIngrese el primer valor: ");
            leer("%d",&n1);
            printf("\nIngrese el segundo valor: ");
            leer("%d",&n2);
            printf("\n El maximo comun divisor entre (%d) y (%d) es : ",n1,n2);
            printf("%d",MCD(n1, n2));
            break;
        case 4:
            break;
        
        default:
            printf("Opción no válida\n");
            break;
        }
    } while (opcion!=4);
    return 0;
}
