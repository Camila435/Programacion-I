#include <stdio.h>   // Incluye la biblioteca estándar de entrada/salida (para printf)
#include <string.h>  // Incluye la biblioteca de manejo de strings (para strcat)

int main() {
    char saludo[20] = "Hola ";  // Declara un string con espacio para 20 caracteres, inicializado con "Hola "
    char nombre[] = "Juan";     // Declara e inicializa otro string con "Juan" (tamaño automático: 5 caracteres)

    strcat(saludo, nombre);     // Concatena "Juan" al final de "Hola " (resultado: "Hola Juan")

    printf("Saludo completo: %s\n", saludo);  // Imprime el resultado
    return 0;                   
}