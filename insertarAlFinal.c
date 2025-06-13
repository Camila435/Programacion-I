//Crear un programa que permita al usuario insertar números enteros en una lista enlazada y luego, mostrar todos los elementos en caso de que el usuario ya no inserte elementos. 
//El usuario puede agregar elementos mientras lo necesite en el inicio o el final de la cadena de nodo. 

#include <stdio.h>
#include <stdlib.h>

struct Nodo
{
    int dato;
    struct Nodo *siguiente;
};


// Función para insertar un nodo al final de la lista
void insertarAlFinal(struct Nodo **cabeza, int valor) {
    struct Nodo *nuevoNodo = (struct Nodo *)malloc(sizeof(struct Nodo));
    nuevoNodo->dato = valor;
    nuevoNodo->siguiente = NULL;

    if (*cabeza == NULL) {
        *cabeza = nuevoNodo;
    } else {
        struct Nodo *temp = *cabeza;
        while (temp->siguiente != NULL) {
            temp = temp->siguiente;
        }
        temp->siguiente = nuevoNodo;
    }
}
void insertarAlInicio(struct Nodo **cabeza, int valor)
{
    struct Nodo *nuevoNodo = (struct Nodo *)malloc(sizeof(struct Nodo)); // Reservamos memoria
    nuevoNodo->dato = valor;                                             // Asignamos el valor
    nuevoNodo->siguiente = *cabeza;       // El nuevo nodo apunta al nodo actual de la cabeza                                 
   *cabeza = nuevoNodo; //la cabeza de la lista ahora es el nuevo nodo

   
}

void mostrarLista(struct Nodo *lista)
{
    while (lista != NULL)
    {
        printf("%d -> ", lista->dato); // Mostramos el valor del nodo
        lista = lista->siguiente;       // Avanzamos al siguiente nodo
    }
    printf("NULL\n"); // Indicamos el final de la lista
}

void agregarNumeros(struct Nodo **lista)
{  int opcion, valor;
    
    
    do { 
        printf("\nMenú:\n");
        printf("1. Quiere agregar un numero al principio?\n");
        printf("2. Quiere agregar un numero al final?\n");
        printf("3. salir");
        scanf("%d", &opcion);

        switch(opcion) {
            case 1: 
                printf("Ingrese un numero al principio");
                 scanf("%d", &valor);
                 insertarAlInicio(lista, valor);
                break;
            case 2: 
                printf("Ingrese un numero al final");
                 scanf("%d", &valor);
                 insertarAlFinal(lista, valor);
                break;
            case 3:
                printf("Mostrar lista \n");
                mostrarLista(*lista);
                break;
            default:
                printf("Opción inválida.\n");
        }
    } while (opcion !=3);
};




// Función principal del programa
int main()
{
    struct Nodo *lista = NULL; // Creamos una lista vacía
    agregarNumeros(&lista);

    return 0; // Fin del programa
}