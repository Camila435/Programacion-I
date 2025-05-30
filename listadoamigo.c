#include<stdio.h>
#define elem 3

struct estructura_amigo
{
    char nombre[30];
    char apellido[40];
    char telefono[10];
    int edad;
    int dni;
};
struct estructura_amigo amigo;
struct estructura_amigo temp;

int main()
{
    struct estructura_amigo amigo[elem];
    int i;
    for( i=0; i<elem; i++){
        printf("ingrese DNI:");
        scanf("%i", &amigo[i].dni);
        printf("Escribe el nombre del amigo:");
        scanf("%s", amigo[i].nombre);
        printf("Escribe el apellido del amigo:");
        scanf("%s", amigo[i].apellido);
        printf("Escribe el telefono del amigo:");
        scanf("%s", amigo[i].telefono);
        printf("Escribe la edad del amigo:");
        scanf("%i", &amigo[i].edad);
    

    }
    for (i = 0; i < elem - 1; i++) {
        for (int j = 0; j < elem - i - 1; j++) {
            if (amigo[j].dni > amigo[j + 1].dni) {
                temp = amigo[j];
                amigo[j] = amigo[j + 1];
                amigo[j + 1] = temp;
            }
        }
    }



    printf("\t LISTADO DE AMIGO \n");
    printf("DNI\t|NOMBRE\t|APELLIDO\t|TELEFONO\t|EDAD\t \t\n ");
    printf("--------------------------------- \n");

    for(i = 0; i < elem; i++){
        printf("%i\t%s\t%s\t\t%s\t\t%i\n",amigo[i].dni,amigo[i].nombre,amigo[i].apellido, amigo[i].telefono,amigo[i].edad);
        }



    int b;
    printf("\nIngrese DNI a buscar: ");
    scanf("%i", &b);
        
    i = 0;
    while(i < elem && amigo[i].dni != b){
            i++;
    }
        
    if(i == elem){
            printf("No se encontró el DNI.\n");
    } else {
            printf("DNI encontrado: %i\n", amigo[i].dni);
    }



    i=0; 
    int emayor = 0;
    int emenor = 0;
    while(i<elem){
        if (amigo[i].edad > 20){;
            emayor++;
        }else{
            emenor++;
        }
     i++;
    }
    
    /*ordenar el programa de menor a mayor por dni*/
    printf("La cantidad de amigos es:%d \n", elem);
    printf("La cantidad de amigos mayores que 20:%d \n", emayor);
    printf("La cantidad de amigos menores o igual que 20: %d \n", emenor);

 return 0;   
}