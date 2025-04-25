#include <stdio.h>

int main() {
    int opcion;  // Almacenará la opción del usuario

    do {  // Hacer...
        printf("\nMenú:\n");
        printf("1. Saludar\n");
        printf("2. Despedir\n");
        printf("3. Salir\n");
        printf("Elige una opción: ");
        scanf("%d", &opcion);

        switch(opcion) {
            case 1: 
                printf("¡Hola!\n");
                break;
            case 2:
                printf("¡Adiós!\n");
                break;
            case 3:
                printf("Saliendo...\n");
                break;
            default:
                printf("Opción inválida.\n");
        }
    } while (opcion != 3);  // ...MIENTRAS la opción no sea 3 (Salir)

    return 0;
}