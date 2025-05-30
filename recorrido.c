
#include <stdio.h>


int main() {
    // Declaración e inicialización de un array de enteros llamado 'numeros'
    // El array tiene 5 elementos (índices del 0 al 4)
    // Los valores iniciales son: 10, 20, 30, 40, 50
    int numeros[5] = {10, 20, 30, 40, 50};

    // Bucle for para recorrer el array
    // int i = 0: inicializa el contador en 0 (primer índice del array)
    // i < 5: la condición para continuar (mientras i sea menor que 5)
    // i++: incrementa i en 1 después de cada iteración
    for (int i = 0; i < 5; i++) {
        // Imprime cada elemento del array
        // %d: marcador de posición para números enteros
        // Primer %d: muestra el índice actual (i)
        // Segundo %d: muestra el valor del array en esa posición (numeros[i])
        // \n: salto de línea después de cada impresión
        printf("Elemento %d: %d\n", i, numeros[i]);
    }

   
    return 0;
}