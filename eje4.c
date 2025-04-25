/*Hacer un programa que pida al usuario 2 numeros y una letra: i o p. 
el programa presentara los numeros pares si se pulsa p o los impares si se usa la letra i. 
que hay desde el numero que se introdujo primero al que se introdujo ultimo.
si se pulsa una letra distinta a p o i el programa no imprime ningun numero*/


#include <stdio.h>

int main() {
    int numero1, numero2, inicio, fin;
    char op;
    
    // Entrada de datos
    printf("Ingrese el primer numero: ");
    scanf("%d", &numero1);
    
    printf("Ingrese el segundo numero: ");
    scanf("%d", &numero2);
    
    printf("Mostrar pares (p) o impares (i)? ");
    scanf(" %c", &op);  // El espacio antes de %c consume el '\n' anterior
    
    // Determinar el orden del rango
    if (numero1 < numero2) {
        inicio = numero1;
        fin = numero2;
    } else {
        inicio = numero2;
        fin = numero1;
    }
    
    // Mostrar los números según la opción elegida
    if (op == 'p' || op == 'P') {
        printf("\nNumeros pares entre %d y %d:\n", inicio, fin);
        for (int i = inicio; i <= fin; i++) {
            if (i % 2 == 0) {
                printf("%d ", i);
            }
        }
    } 
    else if (op == 'i' || op == 'I') {
        printf("\nNumeros impares entre %d y %d:\n", inicio, fin);
        for (int i = inicio; i <= fin; i++) {
            if (i % 2 != 0) {
                printf("%d ", i);
            }
        }
    } 
    else {
        printf("\nOpcion no valida. No se mostraran numeros.\n");
    }
    
    printf("\n");
    return 0;
}