#include <stdio.h>
#include <conio.h>

int main() {
    char cadena[6] = {'h', 'o', 'l', 'a', ' ', '\0'}; // Agregué el carácter nulo al final
    int i;

    printf("La cadena es:\n");
    i = 0;
    while (i < 5) {
        printf("carácter %d:%c\n", i, cadena[i]);
        i++;
    }

    char nombre[10], apellidos[10];

    printf("Introduce tu nombre: ");
    scanf("%9s", nombre); // Quité el & y agregué un límite para evitar desbordamientos
    printf("Introduce tus apellidos: ");
    scanf("%9s", apellidos); // Quité el & y agregué un límite para evitar desbordamientos

    printf("Usted es %s %s\n", nombre, apellidos);

    getch();
    return 0;
}