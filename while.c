#include <stdio.h>  // Necesario para printf()

int main() {
    int contador = 1;  // Inicializamos la variable de control

    // Bucle while: se ejecuta MIENTRAS la condición sea verdadera
    while (contador <= 5) {  // Condición: ¿contador es menor o igual a 5?
        printf("%d\n", contador);  // Imprime el valor actual
        contador++;  // Incrementa el contador (evita un bucle infinito)
    }

    printf("Fin del bucle.\n");
    return 0;
}