//Crea un archivo llamado texto.txt que contenga varias frases escritas por el usuario.
// Luego, haz un programa en C que lea cada línea del archivo y cuente cuántas palabras tiene en total (considerando que las palabras están separadas por espacios). 
//Usa fgets para leer líneas y luego analiza los caracteres.
#include <stdio.h>

int main() {
    FILE *archivo;
    char frases[100];
    int opcion = 1;
    int i = 0;

    // Escribir frases
    archivo = fopen("frases.txt", "w");
    if (archivo == NULL) {
        printf("No se pudo abrir el archivo.\n");
        return 1;
    }

     printf("Ingrese las frases que quiera escribir, al menos 3:\n");
    while (i < 3 || opcion == 1) {
        printf("Frase %d: ", i + 1);
        fgets(frases, sizeof(frases), stdin);
        fprintf(archivo, "%s", frases);
        i++;
        if (i >= 3) {
            printf("¿Desea agregar otra frase? (1: Sí, 0: No): ");
            scanf("%d", &opcion);
            getchar(); // Limpiar el buffer de entrada
      }
    }

    fclose(archivo);

    // Leer frases
    archivo = fopen("frases.txt", "r");
    if (archivo == NULL) {
        printf("No se pudo abrir el archivo para leer.\n");
        return 1;
    }

    printf("\nFrases guardadas en el archivo:\n");
    while (fgets(frases, sizeof(frases), archivo)) {
        printf("%s", frases);
    }

    fclose(archivo);
    return 0;
}