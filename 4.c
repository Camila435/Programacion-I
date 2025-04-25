#include <stdio.h>

int main() {
	int a,b,c; /*declaro las variables*/
	printf("ingrese los valores para realizar la operacion resta"); 
	printf("\ningrese el primer valor:");/*ingreso un valor*/
	scanf("%d", &a);
	printf("ingrese el segunda valor:");
	scanf("%d",&b);
	c=a-b;
	printf("el resultado de la resta es: %d\n", c);
	return 0;
}

