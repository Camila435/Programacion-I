#include <stdio.h>
#include <stdlib.h>

// Definición del nodo
struct Nodo {
    int dato;
    struct Nodo* ant;   // Puntero al nodo anterior
    struct Nodo* sig;   // Puntero al siguiente nodo
};

int main() {
    // Creación de nodos
    struct Nodo* cabeza = NULL;
    struct Nodo* nuevo = (struct Nodo*)malloc(sizeof(struct Nodo));

    // Asignación de valores
    nuevo->dato = 20;
    nuevo->ant = NULL;  // No hay nodo anterior (es el primero)
    nuevo->sig = NULL;
    cabeza = nuevo;

    // Recorrido hacia adelante
    printf("Recorrido hacia adelante:\n");
    while (cabeza != NULL) {
        printf("%d <-> ", cabeza->dato);
        cabeza = cabeza->sig;
    }
    printf("NULL\n");

    free(nuevo);
    return 0;
}