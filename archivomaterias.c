//diseñar un programa que permita generar un archivo de texto, el cual debe contener los nombres de las materias de primer año de tup, mostrar el contenido del archivo, es decir los nombres en la misma linea y separados por dos *.
#include <stdio.h>

int main() {
    FILE *archivo;
    const char *materias[] = {
        "Programacion I",
        "Matematica ",
        "Arquitectura y Sistemas operativos",
        "Organizacion Empresarial"
    };
    int cantidad = sizeof(materias) / sizeof(materias[0]);

    // Crear y escribir el archivo
    archivo = fopen("materias.txt", "w");
    if (archivo == NULL) {
        printf("No se pudo crear el archivo.\n");
        return 1;
    }
    for (int i = 0; i < cantidad; i++) {
        fprintf(archivo, "%s", materias[i]);
        if (i < cantidad - 1) {
            fprintf(archivo, "**");
        }
    }
    fclose(archivo);

    // Mostrar el contenido del archivo
    archivo = fopen("materias.txt", "r");
    if (archivo == NULL) {
        printf("No se pudo abrir el archivo para leer.\n");
        return 1;
    }
    char c;
    printf("Materias de primer año de TUP:\n");
    while ((c = fgetc(archivo)) != EOF) {
        putchar(c);
    }
    printf("\n");
    fclose(archivo);

    return 0;
}