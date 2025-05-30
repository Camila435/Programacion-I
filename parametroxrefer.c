/*Pasaje por Referencia*/  // Comentario que indica el tipo de parámetro
#include <stdio.h>         // Incluye la biblioteca estándar para printf()

// Función que duplica el valor original usando punteros
void duplicar(int *x) {    // Recibe un PUNTERO a int (dirección de memoria)
    *x = *x * 2;          // Modifica el valor en la dirección original
    printf("Dentro de la funcion: %d\n", *x);  // Imprime el valor modificado (10)
}

// Función principal
int main() {
    int numero = 5;        // Variable original
    duplicar(&numero);     // Pasa la DIRECCIÓN de memoria de 'numero'
    printf("Fuera de la funcion: %d\n", numero);  // Imprime el valor ya modificado (10)
    return 0;              // Fin del programa
}