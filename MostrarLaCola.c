void mostrar(struct Nodo* frente){
    printf("Elementos en la cola: ");
    if (frente == NULL) {
        printf("%d ->", frente->dato);
        frente = frente->siguiente;
    }
    printf("NULL\n");

}