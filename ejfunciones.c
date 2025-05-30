/*diseñar un programa que permita:
a- cargar una arreglo de 10 elem 
b- hacer la carga del arreglo en etapa de declaracion.
c-monstrar el contenido del arreglo mostrando un procedimiento.
d-indicar cuantos numeros pares tiene el arreglo, usar una funcion para determinar si el numero es par o no.*/


#include <stdio.h>
#define elem 10

struct carga_digito
{
    int numero;
};

void mostrar_arreglo(struct carga_digito arr[], int );

int main(){

    struct carga_digito arreglo[elem] = {
        {5}, {12}, {8}, {3}, {20},
        {17}, {9}, {6}, {14}, {11}
    };
    printf("contenido:");
    mostrar_arreglo(arreglo, elem);



    return 0;
}