#include <stdio.h>

int main(){
	int numero,i,contador,j;
	printf ("Ingrese un numero:");
	scanf("%d", &numero);
	printf ("numeros primos del 1 al %d\n", numero);
	for (i=2; i<= numero; i++);
	{
	 contador=0;
	 for( j =2; j< i; j++);
	 { 
		 if(i % j ==0){
			 contador++;
		  }
		}
	 if (contador==0){
		 printf("%d",i);
	 }
	 printf("\n");
	}
	return 0;
	

}
