#include <stdio.h>
#define ELEM 10  // Definimos la cantidad de elementos

// Estructura para almacenar los números
struct carga_digito {
    int numero;
};

// Prototipos de funciones
void mostrar_arreglo(struct carga_digito arr[], int tamaño);
int es_par(int num);
int contar_pares(struct carga_digito arr[], int tamaño);

int main() {
    // b) Carga del arreglo en etapa de declaración
    struct carga_digito arreglo[ELEM] = {
        {5}, {12}, {8}, {3}, {20},
        {17}, {9}, {6}, {14}, {11}
    };
    
    // a) Carga manual de 10 elementos (opcional, reemplaza la carga inicial)
    /*
    for (int i = 0; i < ELEM; i++) {
        printf("Ingrese numero %d: ", i+1);
        scanf("%i", &arreglo[i].numero);
    }
    */
    
    // c) Mostrar el contenido del arreglo
    printf("\nContenido del arreglo:\n");
    mostrar_arreglo(arreglo, ELEM);
    
    // d) Contar números pares
    int cantidad_pares = contar_pares(arreglo, ELEM);
    printf("\nEl arreglo contiene %d numeros pares.\n", cantidad_pares);
    
    return 0;
}

// Procedimiento para mostrar el arreglo
void mostrar_arreglo(struct carga_digito arr[], int tamaño) {
    for (int i = 0; i < tamaño; i++) {
        printf("Elemento %d: %d\n", i+1, arr[i].numero);
    }
}

// Función para determinar si un número es par
int es_par(int num) {
    return (num % 2 == 0);
}

// Función para contar números pares en el arreglo
int contar_pares(struct carga_digito arr[], int tamaño) {
    int contador = 0;
    for (int i = 0; i < tamaño; i++) {
        if (es_par(arr[i].numero)) {
            contador++;
        }
    }
    return contador;
}