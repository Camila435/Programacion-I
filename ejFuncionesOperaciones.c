#include <stdio.h>

void mostrar_menu(char opcion, int numeros[], int cantidad) {
    switch (opcion) {
        case '1': { // Resta
            printf("Resta\n");
            if (cantidad < 2) {
                printf("Se necesitan al menos 2 números.\n");
                break;
            }
            int resultadoResta = numeros[0];
            for (int i = 1; i < cantidad; i++) {
                resultadoResta -= numeros[i];
            }
            printf("Resultado: %d\n", resultadoResta);
            break;
        }
        case '2': { // División
            printf("División\n");
            if (cantidad < 2) {
                printf("Se necesitan al menos 2 números.\n");
                break;
            }
            float resultadoDivision = (float)numeros[0];
            for (int i = 1; i < cantidad; i++) {
                if (numeros[i] == 0) {
                    printf("Error: división por cero.\n");
                    resultadoDivision = 0;
                    break;
                }
                resultadoDivision /= (float)numeros[i];
            }
            printf("Resultado: %.2f\n", resultadoDivision);
            break;
        }
        case '5': { // Suma
            printf("Suma\n");
            int resultadoSuma = 0;
            for (int i = 0; i < cantidad; i++) {
                resultadoSuma += numeros[i];
            }
            printf("Resultado: %d\n", resultadoSuma);
            break;
        }
        default:
            printf("Opción no válida.\n");
    }
}

int main() {
    char opcion;
    int numeros[10];
    int cantidad;

    do {
        // Mostrar menú
        printf("\n--- Menú ---\n");
        printf("1. Resta\n");
        printf("2. División\n");
        printf("5. Suma\n");
        printf("0. Salir\n");
        printf("Elija una opción: ");
        scanf(" %c", &opcion);

        if (opcion == '0') break;

        // Pedir cantidad de números
        printf("¿Cuántos números? (2-10): ");
        scanf("%d", &cantidad);

        if (cantidad < 2 || cantidad > 10) {
            printf("Error: debe ser entre 2 y 10.\n");
            continue;
        }

        // Leer los números
        for (int i = 0; i < cantidad; i++) {
            printf("Número %d: ", i + 1);
            scanf("%d", &numeros[i]);
        }

        // Procesar la operación
        mostrar_menu(opcion, numeros, cantidad);

    } while (1);

    printf("Programa terminado.\n");
    return 0;
}