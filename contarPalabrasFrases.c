//LEER UN ARCHIVO DE TEXTO LÍNEA POR LÍNEA EN C
#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *archivo = fopen("frases.txt", "r"); // Abrir en modo lectura
    char linea[100];
    int totalPalabras = 0;

    if (archivo == NULL) {
        printf("No se pudo abrir el archivo para leer.\n");
        return 1;
    }

    while (fgets(linea, sizeof(linea), archivo)) {
        printf("%s", linea); // Mostrar cada línea

        int enPalabra = 0;
        for (int i = 0; linea[i] != '\0'; i++) {
            if (!isspace(linea[i]) && enPalabra == 0) {
                enPalabra = 1;
                totalPalabras++;
            } else if (isspace(linea[i])) {
                enPalabra = 0;
            }
        }
    }

    printf("\nTotal de palabras: %d\n", totalPalabras);

    fclose(archivo);
    return 0;
}

