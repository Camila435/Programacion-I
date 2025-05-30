#include<stdio.h>

struct estructura_amigo
{
    char nombre[30];
    char apellido[40];
    char telefono[10];
    int edad;
    int dni;
};
struct estructura_amigo amigo;
int main()
{
    struct estructura_amigo amigo;
    printf("Escribe el nombre del amigo:");
    scanf("%s", &amigo.nombre);
    printf("Escribe el apellido del amigo:");
    scanf("%s", &amigo.apellido);
    printf("Escribe el telefono del amigo:");
    scanf("%s", &amigo.telefono);
    printf("Mi amigo %s %s tiene el numero:%s.\n", amigo.nombre, amigo.apellido, amigo.telefono);

    
 return 0;   
}
