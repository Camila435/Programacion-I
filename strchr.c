#include <stdio.h>   // Incluye la biblioteca estándar de entrada/salida (para printf)
#include <string.h>  // Incluye la biblioteca de manejo de strings (para strchr)

int main() {
    char palabra[] = "computadora";  // Declara e inicializa un string
    char *ptr = strchr(palabra, 'u');  // Busca la primera 'u' en el string

    if (ptr != NULL) {  // Si se encontró el carácter
        printf("Encontrado: %c en la posición %ld\n", *ptr, ptr - palabra);
    } else {  // Si no se encontró
        printf("No se encontró el carácter\n");
    }

    return 0;  // Fin del programa
}