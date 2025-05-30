#include <stdio.h>
#include <stdlib.h>

struct Nodo {
    int dato;
    struct Nodo* sig;
};

int main() {
    struct Nodo* cabeza = NULL;
    struct Nodo* temp;

    // Crear un nodo circular
    cabeza = (struct Nodo*)malloc(sizeof(struct Nodo));
    cabeza->dato = 30;
    cabeza->sig = cabeza;  // Apunta a sí mismo (lista circular)

    // Recorrido (evitando bucle infinito)
    printf("Lista circular:\n");
    temp = cabeza;
    do {
        printf("%d -> ", temp->dato);
        temp = temp->sig;
    } while (temp != cabeza);  // Condición de parada
    printf("[...]\n");         // Indica circularidad

    free(cabeza);
    return 0;
}