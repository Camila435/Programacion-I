void insertarInicio(Nodo** cabeza, int dato){
    Nodo* nuevoNodo = crearNodo(dato);
    nuevoNodo->siguiente = *cabeza; // El nuevo nodo apunta al antiguo inicio
    *cabeza = nuevoNodo; // Actualiza la cabeza de la lista
}