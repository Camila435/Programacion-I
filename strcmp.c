#include <stdio.h>   // Incluye la biblioteca estándar de entrada/salida (para printf)
#include <string.h>  // Incluye la biblioteca de manejo de strings (para strcmp)

int main() {
    // Declaración e inicialización de tres strings
    char a[] = "hola";  // String a con contenido "hola"
    char b[] = "hola";  // String b con contenido "hola" (igual que a)
    char c[] = "mundo"; // String c con contenido "mundo" (diferente)

    // Comparación entre a y b
    if (strcmp(a, b) == 0) {  // strcmp retorna 0 si los strings son iguales
        printf("a y b son iguales\n");  // Se ejecuta porque a y b son iguales
    }

    // Comparación entre a y c
    if (strcmp(a, c) != 0) {  // strcmp retorna distinto de 0 si son diferentes
        printf("a y c son diferentes\n");  // Se ejecuta porque a y c son distintos
    }

    return 0; 
}