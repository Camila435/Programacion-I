#include <stdio.h>
#define ARCHIVO "arch2.dat"

int main() {
    FILE *arch2 = fopen(ARCHIVO, "w");
    if (!arch2) {
        printf("Error al crear el archivo");
        return 1;
    }
    fprintf(arch2, "Ejemplo1\nEjemplo2\nEjemplo3\n");
    fclose(arch2);
    printf("Archivo creado correctamente en: %s\n", ARCHIVO);
    return 0;
}