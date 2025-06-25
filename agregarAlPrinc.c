void insertarAlInicio(struct Nodo** cabeza, int dato) {
    struct Nodo* nuevoNodo = (struct Nodo*)malloc(sizeof(struct Nodo));
    if (nuevoNodo == NULL) {
        fprintf(stderr, "Error al asignar memoria para el nuevo nodo\n");
        return;
    }
    nuevoNodo->dato = dato;
    nuevoNodo->siguiente = *cabeza; // El nuevo nodo apunta al antiguo inicio
    *cabeza = nuevoNodo; // Actualiza la cabeza de la lista
}