#include <stdio.h>

int main() {
    int numero = 1234;
    int suma = 0;

    while (numero > 0) {
        suma += numero % 10;  // Obtiene el último dígito
        numero /= 10;         // Elimina el último dígito
    }

    printf("Suma de dígitos: %d\n", suma);  // Salida: 10 (1+2+3+4)
    return 0;
}
