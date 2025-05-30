#include <stdio.h>    
#include <string.h>     

int main() {            
    char texto[] = "Programar";  // Declara e inicializa un array de caracteres (string) con el valor "Programar"
    
    int longitud = strlen(texto);  // Calcula la longitud del string usando la función strlen()
    
    printf("Longitud de '%s': %d\n", texto, longitud);  // Imprime el string y su longitud
    return 0;          
}