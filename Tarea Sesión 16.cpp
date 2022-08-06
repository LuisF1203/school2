#include <stdio.h>
int main(){
	int n;
	int val=1;
	printf("¿Cuántos números se van a sumar?");
	scanf("%i",&n);
	int suma=0;
  while(val<=n){
  	int num=0;
  	printf("Escriba el numero %i: ",val);
  	scanf("%i",&num);
  	if(num==0){
  		break;
	  }
	  else{
	  	  	if(num<0){
		  		printf("el numero es menor a 0\n");
		  		continue;
			  }
			else{
			suma=(int)suma+num;
		    val++;
			}
	  }
	  
  }
  printf("sumatoria: %i",suma);
	return 0;
}
