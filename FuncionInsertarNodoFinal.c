void insertarFinal(Nodo** cabeza, int dato){
    Nodo* nuevoNodo = crearNodo(dato);
    if (*cabeza == NULL) {
        *cabeza = nuevoNodo; // Si la lista está vacía, el nuevo nodo es la cabeza
    } else {
        Nodo* temp = *cabeza;
        while (temp->siguiente != NULL) {
            temp = temp->siguiente; // Recorre hasta el último nodo
        }
        temp->siguiente = nuevoNodo; // El último nodo apunta al nuevo nodo
    }
}