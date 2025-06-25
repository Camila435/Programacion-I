void eliminarNodo(Nodo** cabeza, int dato) {
    if (*cabeza == NULL) {
        printf("La lista está vacía. No se puede eliminar el nodo.\n");
        return;
    }

    Nodo* temp = *cabeza;
    Nodo* prev = NULL;

    // Recorre la lista para encontrar el nodo a eliminar
    while (temp != NULL && temp->dato != dato) {
        prev = temp;
        temp = temp->siguiente;
    }

    // Si no se encontró el nodo
    if (temp == NULL) {
        printf("Nodo con dato %d no encontrado.\n", dato);
        return;
    }

    // Si el nodo a eliminar es el primero
    if (prev == NULL) {
        *cabeza = temp->siguiente; // Actualiza la cabeza de la lista
    } else {
        prev->siguiente = temp->siguiente; // Elimina el nodo de la lista
    }

    free(temp); // Libera la memoria del nodo eliminado
}