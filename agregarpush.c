//nodo de la pila
struct  Nodo {
    int dato; // Dato del nodo
    struct Nodo* siguiente; // Puntero al siguiente nodo
};
// agregar push
void push(struct Nodo** tope, int dato) {
    struct Nodo¨* nuevo=(struct Nodo*)malloc(sizeof(struct Nodo));
    nuevo->dato=dato;
    nuevo->siguiente=*tope;
    *tope=nuevo;
    printf("Elemento %d agregado a la pila.\n", dato);
   
}
 // sacar pop
void pop (struct Nodo** tope) {
    if (*tope == NULL) {
        printf("La pila está vacía. No se puede desencolar.\n");
        return;
    }
    struct Nodo* temp = *tope; // Guarda el nodo a desencolar
    int dato = temp->dato; // Obtiene el dato del nodo a desencolar

    *tope = temp->siguiente; // Actualiza el tope de la pila
    free(temp); // Libera la memoria del nodo desencolado
    printf("Elemento %d eliminado de la pila.\n", dato);
}
// mostrar pila
void mostrar(struct Nodo* tope){
    printf("elementos en la pila: ");
    while (tope != NULL) {
        printf("%d ", tope->dato);
        tope = tope->siguiente;
    }
}

struct Nodo* pila = NULL; // Inicializa la pila como vacía
//apilamos valores
push(&pila, 1);
push(&pila, 2);
push(&pila, 3);
mostrar(pila); // Muestra la pila
//desapilamos uno
int desapilado = pop(&pila);
printf("Elemento desapilado: %d\n", desapilado);
mostrar(pila); // Muestra la pila después de la desapilacion

