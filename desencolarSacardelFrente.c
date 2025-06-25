int desencolar(struct Nodo** frente, struct Nodo** final) {
    if (*frente == NULL) {
        printf("La cola está vacía. No se puede desencolar.\n");
        return -1; // Indica que no hay elementos para desencolar
    }

    struct Nodo* temp = *frente; // Guarda el nodo a desencolar
    int dato = temp->dato; // Obtiene el dato del nodo a desencolar

    *frente = temp->siguiente; // Actualiza el frente de la cola

    if (*frente == NULL) {
        // Si la cola queda vacía, actualiza también el final
        *final = NULL;
    }

    free(temp); // Libera la memoria del nodo desencolado
    printf("Desencolado: %d\n", dato);
    return dato; // Retorna el dato del nodo desencolado
}