#include <stdio.h>

// Función de búsqueda binaria
int busquedaBinaria(int arreglo[], int tamanio, int elemento) {
    int inicio = 0;
    int fin = tamanio - 1;
    
    while (inicio <= fin) {
        int medio = inicio + (fin - inicio) / 2;
        
        // Si el elemento está en el medio
        if (arreglo[medio] == elemento)
            return medio;
            
        // Si el elemento es mayor, ignoramos la mitad izquierda
        if (arreglo[medio] < elemento)
            inicio = medio + 1;
            
        // Si el elemento es menor, ignoramos la mitad derecha
        else
            fin = medio - 1;
    }
    
    // Si llegamos aquí, el elemento no está presente
    return -1;
}

int main() {
    int arreglo[] = {2, 3, 4, 10, 40, 45, 50, 60};
    int tamanio = sizeof(arreglo) / sizeof(arreglo[0]);
    int elemento;
    
    printf("Arreglo: ");
    for (int i = 0; i < tamanio; i++) {
        printf("%d ", arreglo[i]);
    }
    printf("\n");
    
    printf("Ingrese el elemento a buscar: ");
    scanf("%d", &elemento);
    
    int resultado = busquedaBinaria(arreglo, tamanio, elemento);
    
    if (resultado == -1)
        printf("El elemento %d no se encuentra en el arreglo.\n", elemento);
    else
        printf("El elemento %d se encuentra en la posición %d.\n", elemento, resultado);
    
    return 0;
}