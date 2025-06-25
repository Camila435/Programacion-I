int main(){
    struct Nodo* nodo= NULL;
    insertarAlInicio(&lista, 10);
    insertarAlInicio(&lista, 20);
    insertarAlInicio(&lista, 30);
    insertarAlInicio(&lista, 40);
    printf("Lista enlazada: ");
    mostrarLista(lista);
    return 0;

}