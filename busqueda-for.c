#include <stdio.h>

int main() {
    int numeros[5] = {5, 7, 9, 1, 6};  // Declara e inicializa un array de 5 números
    int buscar = 9;                     // Número que queremos buscar en el array
    int encontrado = 0;                 // Bandera para indicar si se encontró el número (0 = falso)

    // Bucle para recorrer el array
    for (int i = 0; i < 5; i++) {
        // Compara el elemento actual con el número buscado
        if (numeros[i] == buscar) {
            printf("Encontrado en la posición %d\n", i);  // Imprime la posición donde se encontró
            encontrado = 1;              // Cambia la bandera a "verdadero" (1)
            break;                       // Termina el bucle prematuramente
        }
    }

    // Si no se encontró el número después de recorrer todo el array
    if (!encontrado) {
        printf("No se encontró.\n");
    }

    return 0; 
}