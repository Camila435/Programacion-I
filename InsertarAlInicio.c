//Crear un programa que permita al usuario insertar números enteros en una lista enlazada, al inicio de la lista. 
 //Luego, mostrar todos los elementos.
 //El usuario puede agregar elementos mientras lo necesite. //

 #include <stdio.h>
#include <stdlib.h>

struct Nodo
{
    int dato;
    struct Nodo *siguiente;
};

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
        printf("1. Quiere agregar un numero?\n");
        printf("2. salir");
        scanf("%d", &opcion);

        switch(opcion) {
            case 1: 
                printf("Ingrese un numero");
                 scanf("%d", &valor);
                 insertarAlInicio(lista, valor);
                break;
            case 2:
                printf("Mostrar lista \n");
                mostrarLista(*lista);
                break;
            default:
                printf("Opción inválida.\n");
        }
    } while (opcion !=2);
};




// Función principal del programa
int main()
{
    struct Nodo *lista = NULL; // Creamos una lista vacía
    agregarNumeros(&lista);

    return 0; // Fin del programa
}