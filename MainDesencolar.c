int main(){
    struct Nodo* frente = NULL;
    struct Nodo* final = NULL;

    // Encolar algunos elementos
    encolar(&frente, &final, 10);
    encolar(&frente, &final, 20);
    encolar(&frente, &final, 30);

    // Mostrar la cola
    mostrar(frente);

    // Desencolar un elemento
    desencolar(&frente, &final);
    int valor = desencolar(&frente, &final);
    printf("Valor desencolado: %d\n", valor);


    // Mostrar la cola nuevamente
    mostrar(frente);


    return 0;
}