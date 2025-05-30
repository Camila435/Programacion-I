
/*Ejercicio 2: 
Implementá un programa que permita guardar hasta 5 contactos en una agenda. 
Cada contacto debe tener nombre, teléfono y email. Permití insertar los datos y luego mostrar todos los contactos guardados en una tabla.*/


#include<stdio.h>
#define elem 5

struct estructura_contac
{
    char nombre[30];
    char telefono[40];
    char email[20];
  
};

int main()
{
    struct estructura_contac contacto[elem];
    int i;
    for( i=0; i<elem; i++){
       
        printf("Escribe el nombre del amigo:");
        scanf("%s", contacto[i].nombre);
        printf("Escribe el telefono del amigo:");
        scanf("%s", contacto[i].telefono);
        printf("Escribe el email del amigo:");
        scanf("%s", contacto[i].email);
    

    }



    printf("\t LISTADO DE CONTACTO s\n");
    printf("NOMBRE\t|TELEFONO\t|EMAIL\t\n ");
    printf("--------------------------------- \n");

    for(i = 0; i < elem; i++){
        printf("%s\t \t %s\t \t%s \t\n",contacto[i].nombre, contacto[i].telefono, contacto[i].email);
    }


 return 0;
}

