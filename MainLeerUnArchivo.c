#include <stdio.h>
int main(){
    FILE *archivo=fopen("Saludo.txt", "r");
    char linea[100];
    if (archivo == NULL) {
        printf("Error al abrir el archivo.\n");
        return 1; // Retorna un código de error
    }
    while(fgets(linea, sizeof(linea), archivo) != NULL){
        printf("%s", linea);
    }
    fclose(archivo); // Cierra el archivo
    return 0; // Retorna 0 para indicar éxito
}