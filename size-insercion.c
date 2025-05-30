#include <stdio.h>  // Incluir la biblioteca estándar para printf()

int main() {
    int numeros[] = {10, 20, 30, 40, 50};  // Declaración e inicialización correcta del array
    int size = sizeof(numeros) / sizeof(numeros[0]);  // Cálculo del tamaño del array
    //sizeof(numeros): arreglo original, es el tamaño total ocupado.
     //sizeof(numeros[0]): tamaño del primer arreglo.
     //al dividir se obtiene el numero de elementos que tiene el arreglo.


    // Imprime el arreglo original
    printf("Arreglo original:\n");
    for (int i = 0; i < size; i++) {
        printf("numeros[%d] = %d\n", i, numeros[i]);
    }

    // Modifica el valor en la posición 2 (tercer elemento)
    for (int i = 0; i < size; i++) {
        if (i == 2) {
            numeros[i] = 100;  // Cambia 30 por 100
            break;  // Opcional: termina el bucle después de la modificación
        }
    }

    // Imprime el arreglo modificado
    printf("\nArreglo modificado:\n");
    for (int i = 0; i < size; i++) {
        printf("numeros[%d] = %d\n", i, numeros[i]);
    }

    return 0;  
}  