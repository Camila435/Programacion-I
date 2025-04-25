#include <stdio.h>  // Necesario para usar printf()

int main() {
    int numero = 5;  // Variable con el valor a evaluar (cámbialo para probar)

    // Estructura 'if' simple (sin else)
    if (numero > 0) {  // Condición: ¿Es el número mayor que 0?
        printf("El número es positivo.\n");  // Se ejecuta SOLO si la condición es true
    }

    printf("Fin del programa.\n");  // Esta línea SIEMPRE se ejecuta
    return 0;
}