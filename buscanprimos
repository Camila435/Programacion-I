#include <stdio.h>

int main() {
    printf("Ingrese un número: ");
    int numero;
    scanf("%d", &numero);

    printf("Números primos del 1 al %d:\n", numero);

    for (int i = 2; i <= numero; i++) {
        int contador = 0;
        for (int j = 2; j < i; j++) {
            if (i % j == 0) {
                contador++;
            }
        }
        if (contador == 0) {
            printf("%d ", i);
        }
    }
    printf("\n");
    return 0;
}
