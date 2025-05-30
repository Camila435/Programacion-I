#include <stdio.h>   // Incluye funciones de entrada/salida como printf()
#include <string.h>  // Incluye funciones para manejar strings como strstr()

int main() {
    char frase[] = "We gusta programar en C";  // Declara e inicializa un string
    char *ptr = strstr(frase, "programar");   // Busca la subcadena "programar" en 'frase'

    if (ptr != NULL) {  // Si se encontró la subcadena
        printf("Subcadena encontrada: %s\n", ptr);  // Imprime desde donde empieza la subcadena
    } else {  // Si no se encontró
        printf("Subcadena no encontrada\n");
    }

    return 0;  // Indica que el programa terminó correctamente
}