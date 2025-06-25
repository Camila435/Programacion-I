void buscarValor(Nodo* cabeza, int dato){
    Nodo* temp = cabeza;
    while(temp != NULL){
        if(temp->dato == dato){
            printf("Valor %d encontrado en la lista.\n", dato);
            return;
        }
        temp = temp->siguiente;
    }
    printf("Valor %d no encontrado en la lista.\n", dato);

}