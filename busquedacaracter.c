#include <stdio.h>
#include <conio.h>

int main() {
    char cadena[6] = {'h', 'o', 'l', 'a', ' ', '\0'};
    int i;

    printf("La cadena es:\n");
    i = 0;
    while (i < 5) {
        printf("carácter %d:%c\n", i, cadena[i]);
        i++;
    }

    char nombre[10], apellido[10];

    printf("Introduce tu nombre: ");
    scanf("%9s", nombre);
    printf("Introduce tus apellido: ");
    scanf("%9s", apellido);

    printf("Usted es %s %s\n", nombre, apellido);

    char caracter;
    int contador = 0;

    printf("Ingrese un carácter: ");
    scanf(" %c", &caracter); // Nota el espacio antes de %c para ignorar espacios en blanco

    i = 0;
    while (cadena[i] != '\0') {
        if (cadena[i] == caracter) {
            contador++;
        }
        i++;
    }

    if (contador > 0) {
        printf("El carácter '%c' se encuentra %d veces en la cadena.\n", caracter, contador);
    } else {
        printf("El carácter '%c' no se encuentra en la cadena.\n", caracter);
    }

    getch();
    return 0;
}