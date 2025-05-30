#include <stdio.h>

int main() {
    int matriz[2][3] = {  // Declaración corregida de matriz 2x3
        {1, 2, 3},        // Fila 0
        {4, 5, 6}         // Fila 1
    };

    // Recorrer la matriz //for anidado
    for (int fila = 0; fila < 2; fila++) {       // Bucle para filas
        for (int col = 0; col < 3; col++) {      // Bucle para columnas
            printf("%d ", matriz[fila][col]);     // Imprime el elemento
        }
        printf("\n");  // Salto de línea después de cada fila
    }

    return 0;
}