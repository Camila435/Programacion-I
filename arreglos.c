#include <stdio.h>  // Incluye la biblioteca estándar de entrada/salida para usar funciones como printf()

int main() {  // Función principal donde comienza la ejecución del programa
    int numeros[5] = {10, 20, 30, 40, 50};  // Declara un array de enteros llamado 'numeros' con 5 elementos inicializados

    // Bucle for para recorrer cada elemento del array
    for (int i = 0; i < 5; i++) {  
        // i = 0: inicializa el contador en 0
        // i < 5: condición para continuar el bucle (mientras i sea menor que 5)
        // i++: incrementa i en 1 después de cada iteración
        
        printf("Elemento %d: %d\n", i, numeros[i]);  
        // Imprime el índice (i) y el valor del elemento correspondiente en el array
    }

    return 0;  // Indica que el programa terminó correctamente
}