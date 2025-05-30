#include <stdio.h>  

int main() {
    int arreglo[] = {3, 7, 15, 20, 25, 31, 40}; // Arreglo ORIGINAL (ordenado)
    int n = sizeof(arreglo) / sizeof(arreglo[0]); // Calcula el tamaño del arreglo
    int buscar, inicio = 0, fin = n - 1, medio;   // Variables para la búsqueda
    int encontrado = 0;  // Bandera para indicar si se encontró el número

    printf("Ingrese el numero que desea buscar: ");
    scanf("%d", &buscar);  // Lee el número a buscar del usuario

    // Búsqueda binaria (requiere arreglo ordenado)
    while (inicio <= fin) {
        medio = (inicio + fin) / 2; 

        if (arreglo[medio] == buscar) {
            printf("Numero encontrado en la posicion %d.\n", medio);
            encontrado = 1;  
            break;
        } 
        else if (buscar < arreglo[medio]) {
            fin = medio - 1;  // Buscar en la mitad izquierda
        } 
        else {
            inicio = medio + 1;  
        }
    }

    if (!encontrado) { 
        printf("El numero no se encuentra en el arreglo.\n");
    }

    return 0; 
}