//declarar TRES arreglos de 10 elementos cada uno y solo cargar A Y B.
#include <stdio.h>

int main() {
	int A[10], B[10],C;
	int a, b;
	for ( a=0; a<10; a++){
	printf("Ingrese un valor entero\n");
	scanf("%d",&A[a]);}
	for (a=0; a<7;a++){
		printf("Elemento %c %i \n", a, A[a]);
	}
	for ( b=0; b<10; b++){
		printf("Ingrese un valor entero\n");
		scanf("%d",&B[b]);}
	for (b=0; b<7;b++){
		printf("Elemento %c %i \n", b, B[b]);
	}
	C= A[a] + B[b];
	printf("Muestra : %d", C);
	
	
	return 0;
}

