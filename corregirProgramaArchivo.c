#include <stdio.h>
#include <conio.h>
#define ARCH "bin.dat"

struct a {
    char nombre[10];
    int edad;
};

int main() {
    FILE *bin;
    struct a pers;
    char opcion;
    
    printf("\nSe va a generar por primera vez el archivo\n");
    
    if ((bin = fopen(ARCH, "wb")) == NULL) {
        printf("El archivo no puede ser abierto");
        return 1;
    }
    
    do {
        printf("\nIngrese el nombre: ");
        fflush(stdin); 
        fgets(pers.nombre, sizeof(pers.nombre), stdin);
        
        printf("Ingrese la edad: ");
        scanf("%d", &pers.edad);
        
        fwrite(&pers, sizeof(pers), 1, bin);
        
        printf("\nPresione 1 para terminar, cualquier otra tecla para continuar: ");
        fflush(stdin); 
        opcion = getche();
        
    } while(opcion != '1');
    
    fclose(bin);
    return 0;
}