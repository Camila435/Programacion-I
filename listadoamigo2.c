#include <stdio.h>

#define elem 3

struct estructura_amigo {
    char nombre[30];
    char apellido[40];
    char telefono[10];
    int edad;
    int dni;
};

int busqueda_binaria(struct estructura_amigo amigo[], int total_amigos, int dnibusq) {
    int izquierda = 0;
    int derecha = total_amigos - 1;

    while (izquierda <= derecha) {
        int medio = izquierda + (derecha - izquierda) / 2;

        if (amigo[medio].dni == dnibusq) {
            return medio;  // DNI encontrado, retorna su posición
        }
        if (amigo[medio].dni < dnibusq) {
            izquierda = medio + 1;  // Buscar en la mitad derecha
        } else {
            derecha = medio - 1;  // Buscar en la mitad izquierda
        }
    }
    return -1;  // DNI no encontrado
}


int main() {
    struct estructura_amigo amigo[elem];
    int i, j;
    struct estructura_amigo temp;

    
    for (i = 0; i < elem; i++) {
        printf("Ingrese DNI: ");
        scanf("%i", &amigo[i].dni);
        printf("Escribe el nombre del amigo: ");
        scanf("%s", amigo[i].nombre);
        printf("Escribe el apellido del amigo: ");
        scanf("%s", amigo[i].apellido);
        printf("Escribe el telefono del amigo: ");
        scanf("%s", amigo[i].telefono);
        printf("Escribe la edad del amigo: ");
        scanf("%i", &amigo[i].edad);
    }

    
    for (i = 0; i < elem - 1; i++) {
        for (j = 0; j < elem - i - 1; j++) {
            if (amigo[j].dni > amigo[j + 1].dni) {
                temp = amigo[j];
                amigo[j] = amigo[j + 1];
                amigo[j + 1] = temp;
            }
        }
    }

    
    printf("\t LISTADO DE AMIGOS ORDENADOS POR DNI \n");
    printf("DNI\t|NOMBRE\t|APELLIDO\t|TELEFONO\t|EDAD\t \t\n ");
    printf("--------------------------------- \n");
    for (i = 0; i < elem; i++) {
        printf("%i\t%s\t%s\t\t%s\t\t%i\n", amigo[i].dni, amigo[i].nombre, amigo[i].apellido, amigo[i].telefono, amigo[i].edad);
    }

   
    

    int dni_busqueda;
    printf("\nIngrese DNI a buscar: ");
    scanf("%i", &dni_busqueda);
    int resultado = busqueda_binaria(amigo, elem, dni_busqueda);  
    if(resultado == -1) {
    printf("No se encontró el DNI.\n");
    } else {
    printf("DNI encontrado: %i\n", amigo[resultado].dni);
    printf("Nombre: %s\n", amigo[resultado].nombre);
    printf("Apellido: %s\n", amigo[resultado].apellido);
    printf("Telefono: %s\n", amigo[resultado].telefono);
    printf("Edad: %i\n", amigo[resultado].edad);   
    }


    i = 0;
    int emayor = 0;
    int emenor = 0;
    while (i < elem) {
        if (amigo[i].edad > 20) {
            emayor++;
        } else {
            emenor++;
        }
        i++;
    }

    printf("La cantidad de amigos es: %d \n", elem);
    printf("La cantidad de amigos mayores que 20: %d \n", emayor);
    printf("La cantidad de amigos menores o igual que 20: %d \n", emenor);

    return 0;
}