int Men(void){
    int n;
    printf("\n1)Tripletas");
    printf("\n2)Binario");
    printf("\n3)Máximo común divisor recursivo");
    printf("\n4)Salir");

    printf("\n\nTeclee la opción deseada (1-4): ");
    scanf("%d", &n);
    return n;
}
void Bin(int nt){
    if(nt>1){
        Bin(nt/2); 
    }
    printf("%d",nt%2);

}

void Tr(int nt){
	
    int n1,n2,n3;
  for (n1=0; n1<=50; n1++)
    for(n2=0;n2<=50; n2++)
      for (n3=0;n3<=50; n3++)
        {
          if ( (n1+n2+n3)%nt ==0 )
          {
            printf("%d-%d-%d\n",n1,n2,n3);
          }
        }   
}
int MCD(int n1, int n2){
    if (n2==0) return n1;
    
	return MCD(n2,(n1%n2)); 
    
}
