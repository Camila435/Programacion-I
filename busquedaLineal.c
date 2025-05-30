#include <stdio.h>

int main() {
    int arreglo[] = {10, 4, 7, 25, 3, 16}; // Arreglo NO necesariamente ordenado
    int n = sizeof(arreglo) / sizeof(arreglo[0]); // Tamaño del arreglo
    int buscar, i;
    int encontrado = 0; // Bandera para indicar si se encontró

    printf("Ingrese el número a buscar: ");
    scanf("%d", &buscar); // Leer el número del usuario

    // Búsqueda lineal: recorre el arreglo elemento por elemento
    for (i = 0; i < n; i++) {
        if (arreglo[i] == buscar) {
            printf("Número encontrado en la posición %d.\n", i);
            encontrado = 1;
            break; // Termina el bucle al encontrar el número
        }
    }

    if (!encontrado) {
        printf("Número no encontrado en el arreglo.\n");
    }

    return 0;
}