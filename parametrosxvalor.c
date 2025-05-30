/*Pasaje por Valor*/  // Comentario que indica el tipo de parámetro usado
#include <stdio.h>    // Incluye la biblioteca estándar para printf()

// Función que intenta duplicar un valor
void duplicar(int x) {  // Recibe una COPIA del valor original (pasaje por valor)
    x = x * 2;         // Duplica la COPIA local (no afecta la variable original)
    printf("Dentro de la funcion: %d\n", x);  // Imprime el valor duplicado (10)
}

// Función principal
int main() {
    int numero = 5;      // Variable original inicializada con 5
    duplicar(numero);    // Pasa una COPIA de 'numero' (no la variable misma)
    printf("Fuera de la funcion: %d\n", numero);  // Imprime el valor original (5)
    return 0;            // Fin del programa
}