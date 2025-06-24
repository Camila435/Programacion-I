/*dada una lista doblemente encadenada
a-ingresar por teclado la cantidad de elemtos que tendra que va a tener la lista.
b-cargarla lista e indicar si se pudo cargar la cantidad ingresada.
c-mostrar la lista de adelante hacia atras y de atras hacia adelante.
d- ingresar un elemento por teclado, si es menor que el primer elemento de la lista insertarlo adelante y si es mayor que el ultimo insertarlo al final, en cualquier otro caso no hacer nada y emitir un msj
e- mostrar el nuevo contenido de la lista en el sentido que corresponda con la insercion que se hizo.*/


#include <stdio.h>
#include <stdlib.h>

// Definición del nodo
struct Nodo {
    int dato;
    struct Nodo* ant;
    struct Nodo* sig;
};

// Función para mostrar la lista hacia adelante
void mostrarAdelante(struct Nodo* cabeza) {
    struct Nodo* aux = cabeza;
    while (aux != NULL) {
        printf("%d <-> ", aux->dato);
        if (aux->sig == NULL) break; // Guardar el último nodo para mostrar hacia atrás
        aux = aux->sig;
    }
    printf("NULL\n");
}

// Función para mostrar la lista hacia atrás
void mostrarAtras(struct Nodo* cola) {
    struct Nodo* aux = cola;
    while (aux != NULL) {
        printf("%d <-> ", aux->dato);
        aux = aux->ant;
    }
    printf("NULL\n");
}

int main() {
    int n, dato;
    printf("Ingrese la cantidad de elementos de la lista: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Cantidad inválida.\n");
        return 1;
    }

    struct Nodo* cabeza = NULL;
    struct Nodo* cola = NULL;

    // Cargar la lista
    for (int i = 0; i < n; i++) {
        printf("Ingrese el dato %d: ", i + 1);
        scanf("%d", &dato);
        struct Nodo* nuevo = (struct Nodo*)malloc(sizeof(struct Nodo));
        if (!nuevo) {
            printf("No se pudo reservar memoria.\n");
            return 1;
        }
        nuevo->dato = dato;
        nuevo->sig = NULL;
        nuevo->ant = cola;

        if (cabeza == NULL) {
            cabeza = nuevo;
        } else {
            cola->sig = nuevo;
        }
        cola = nuevo;
    }
    printf("Se cargaron %d elementos en la lista.\n", n);

    // Mostrar lista hacia adelante
    printf("\nLista de adelante hacia atrás:\n");
    mostrarAdelante(cabeza);

    // Mostrar lista hacia atrás
    printf("Lista de atrás hacia adelante:\n");
    mostrarAtras(cola);

    // Ingresar un nuevo elemento y decidir dónde insertarlo
    printf("\nIngrese un nuevo elemento: ");
    scanf("%d", &dato);

    if (dato < cabeza->dato) {
        // Insertar al principio
        struct Nodo* nuevo = (struct Nodo*)malloc(sizeof(struct Nodo));
        nuevo->dato = dato;
        nuevo->ant = NULL;
        nuevo->sig = cabeza;
        cabeza->ant = nuevo;
        cabeza = nuevo;
        printf("Se insertó al principio.\n");
        printf("Lista de adelante hacia atrás:\n");
        mostrarAdelante(cabeza);
    } else if (dato > cola->dato) {
        // Insertar al final
        struct Nodo* nuevo = (struct Nodo*)malloc(sizeof(struct Nodo));
        nuevo->dato = dato;
        nuevo->sig = NULL;
        nuevo->ant = cola;
        cola->sig = nuevo;
        cola = nuevo;
        printf("Se insertó al final.\n");
        printf("Lista de atrás hacia adelante:\n");
        mostrarAtras(cola);
    } else {
        printf("No se insertó el elemento porque no cumple las condiciones.\n");
    }

    // Liberar memoria
    struct Nodo* aux;
    while (cabeza != NULL) {
        aux = cabeza;
        cabeza = cabeza->sig;
        free(aux);
    }

    return 0;
}