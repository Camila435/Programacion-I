/*crear un programa que permita:
 a-escolar una lista de numeros de que se ingresan por teclado.ingresar la cantidad de elementos de la cola   e indicar si la cantidad de elementos coincidide con el valor requerido.
 b- desencolar los elementos de la cola y cargarlos en un arreglo.
 c-mostrar los elementos del arreglo usando un procedimiento y respetando el orden de desencolar.
 d- ordenar los elementos del arreglo de menor a mayor usando una funcion.
 e- encolar los elementos del arreglo ordenado.
 f- desencolar los elementos de la cola.*/

 #include <stdio.h>
#include <stdlib.h>

// Definición de nodo para la cola
typedef struct Nodo {
    int dato;
    struct Nodo* sig;
} Nodo;

// Funciones de la cola
void encolar(Nodo** frente, Nodo** fin, int valor) {
    Nodo* nuevo = (Nodo*)malloc(sizeof(Nodo));
    nuevo->dato = valor;
    nuevo->sig = NULL;
    if (*fin) {
        (*fin)->sig = nuevo;
    } else {
        *frente = nuevo;
    }
    *fin = nuevo;
}

int desencolar(Nodo** frente, Nodo** fin) {
    if (*frente == NULL) return -1;
    Nodo* temp = *frente;
    int valor = temp->dato;
    *frente = temp->sig;
    if (*frente == NULL) *fin = NULL;
    free(temp);
    return valor;
}

// Mostrar arreglo
void mostrarArreglo(int arr[], int n) {
    printf("Elementos del arreglo: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

// Ordenar arreglo (burbuja)
void ordenarArreglo(int arr[], int n) {
    for (int i = 0; i < n-1; i++) {
        for (int j = 0; j < n-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                int tmp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = tmp;
            }
        }
    }
}

int main() {
    int n, valor;
    Nodo* frente = NULL;
    Nodo* fin = NULL;

    // a) Encolar
    printf("Ingrese la cantidad de elementos de la cola: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        printf("Ingrese el elemento %d: ", i+1);
        scanf("%d", &valor);
        encolar(&frente, &fin, valor);
    }

    // Verificar cantidad
    int contador = 0;
    Nodo* aux = frente;
    while (aux) {
        contador++;
        aux = aux->sig;
    }
    if (contador == n) {
        printf("La cantidad de elementos coincide con el valor requerido.\n");
    } else {
        printf("La cantidad de elementos NO coincide.\n");
    }

    // b) Desencolar y cargar en arreglo
    int arreglo[100];
    int i = 0;
    while (frente) {
        arreglo[i++] = desencolar(&frente, &fin);
    }

    // c) Mostrar arreglo
    mostrarArreglo(arreglo, n);

    // d) Ordenar arreglo
    ordenarArreglo(arreglo, n);

    // e) Encolar arreglo ordenado
    for (int j = 0; j < n; j++) {
        encolar(&frente, &fin, arreglo[j]);
    }

    // f) Desencolar y mostrar
    printf("Elementos de la cola ordenada: ");
    while (frente) {
        printf("%d ", desencolar(&frente, &fin));
    }
    printf("\n");

    return 0;
}