#include <stdio.h>

int main(){
    FILE *archivo =fopen("Saludo.txt", "w");
    if (archivo == NULL) {
        printf("Error al abrir el archivo.\n");
        return 1; // Retorna un código de error
    }
    fprintf(archivo, "¡Hola, mundo!\n");
    fprintf(archivo, "Este es un archivo de texto.\n");
    fclose(archivo); // Cierra el archivo
    printf("Archivo escrito correctamente.\n");
    return 0; // Retorna 0 para indicar éxito
}