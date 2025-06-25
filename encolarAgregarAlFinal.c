void encolar(struct Nodo** frente, struct Nodo** final, int dato) {
    struct Nodo* nuevoNodo = (struct Nodo*)malloc(sizeof(struct Nodo));
    if (nuevoNodo == NULL) {
        fprintf(stderr, "Error al asignar memoria para el nuevo nodo\n");
        return;
    }
    nuevoNodo->dato = dato;
    nuevoNodo->siguiente = NULL;

    if (*final == NULL) {
        // Si la cola está vacía, el nuevo nodo es tanto el frente como el final
        *frente = *final = nuevoNodo;
    } else {
        // El nodo actual final apunta al nuevo nodo
        (*final)->siguiente = nuevoNodo;
        // Actualiza el final de la cola
        *final = nuevoNodo;
    }
    printf("Encolado: %d\n", dato);
}