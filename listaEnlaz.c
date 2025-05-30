#include <stdio.h>
#include <stdlib.h>

// Definición del nodo
struct Nodo {
    int dato;           // Almacena el dato (ej: 5)
    struct Nodo* sig;   // Puntero al siguiente nodo
};

int main() {
    // Creación de nodos
    struct Nodo* cabeza = NULL;       // Puntero al inicio (lista vacía)
    struct Nodo* nuevo = (struct Nodo*)malloc(sizeof(struct Nodo)); // Nodo nuevo

    // Asignación de valores
    nuevo->dato = 10;    // Asigna 10 al dato del nuevo nodo
    nuevo->sig = NULL;   // El nuevo nodo apunta a NULL (fin de lista)
    cabeza = nuevo;      // El nuevo nodo es ahora la cabeza

    // Recorrido e impresión
    printf("Lista simplemente enlazada:\n");
    while (cabeza != NULL) {
        printf("%d -> ", cabeza->dato); // Imprime el dato actual
        cabeza = cabeza->sig;           // Avanza al siguiente nodo
    }
    printf("NULL\n");

    free(nuevo); // Liberar memoria
    return 0;
}