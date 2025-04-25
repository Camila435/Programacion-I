#include <stdio.h> /*necesario para utilizar printf()*/
#include <conio.h> /*necesario paea utilizar getch()*/

int main() {
	
	char c[10];
	printf("ingrese su nombre por teclado");
	printf("\n");
	gets(c);
	printf("El nombre ingresado es:");
	puts(c);
	printf("mi nombre es %s", c);
	return 0;
}

