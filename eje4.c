/*Hacer un programa que pida al usuario 2 numeros y una letra: i o p. 
el programa presentara los numeros pares si se pulsa p o los impares si se usa la letra i. 
que hay desde el numero que se introdujo primero al que se introdujo ultimo.
si se pulsa una letra distinta a p o i el programa no imprime ningun numero*/


#include <stdio.h>

int main(){
    int numero1, numero2;
    char op;
    printf("Ingrese un numero:");
    scanf("%d", &numero1);
    printf("Ingrese el segundo numero:");
    scanf("%d", &numero2);
    printf("Ingrese una letra: i/p");
    scanf(" %c", &op);
    while (op==p)
    {
        printf ("numeros pares del %d al %d\n", numero1, numero2);
	for (cont=0; numero1 % 2; i++);
	{ 
        

	 
	 }
	 printf("\n");
	}
    



    return 0;
}