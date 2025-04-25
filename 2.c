#include <stdio.h>
#include <conio.h> /*necesario paea utilizar getch()*/
int main() {
	char c; float x,y; int i;
	printf("ingrese un caracter:");
	c= getchar();/*entrada de un carcater*/
	printf("ingrese un valor flotante:");
	scanf("%f\n", &x); /*entrada de enteros*/
	printf("ingrese un valor entero:");
	scanf("%d\n", &i); /*entrada de enteros*/
	printf("mostrar los valores ingresados:");
	putchar(c); /*salida de caracter*/
	printf("%3d%7.4f", i,x); /*salida de numeros*/
	
	return 0;
}

