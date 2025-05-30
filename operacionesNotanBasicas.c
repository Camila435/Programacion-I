#include <stdio.h>


void mostrar_menu(char opcion, int numeros[],  int cantidad){
    switch (opcion) {
    case '1':
        printf("Resta \n");
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
     case '2':
        printf("Division \n");
        break;
     case '3':
        printf("Potencia \n");
        break;
     case '4':
        printf("Factorial \n");
        break;
     case '5':
        printf("Suma \n");
        break;
     case '6':
        printf("Multipliacion \n");
        break;
    default:
        printf("Opcion no valida \n");
    }
}

int main (){
    char opcion;
    do {
    printf("Menu de opciones:\n");
    printf("1. Resta\n");
    printf("2. Division\n");
    printf("3. Potencia\n");
    printf("4. Factorial\n");
    printf("5. Suma\n");
    printf("6. Multiplicacion\n");
    scanf(" %c", &opcion);
    }

        if (opcion == '0') break;  

        mostrar_menu(opcion);
    } while (1);  

    return 0;
}

