#include <stdio.h>  // Necesario para printf()
#include <string.h> // Necesario para strcpy()

int main() {
    char origen[] = "Hola";       // Declara e inicializa el string de origen
    char destino[20];             // Declara un string de destino con capacidad para 20 caracteres

    strcpy(destino, origen);      // Copia el contenido de 'origen' a 'destino'

    printf("Destino: %s\n", destino); // Imprime el string copiado
    return 0;                     
}