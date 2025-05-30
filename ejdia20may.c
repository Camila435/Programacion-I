/*ingresar una cadena por teclado, se pide mostrar la cadena, mostrar la cadena alreves
indicar cuantas veces a aparece una vocal que se ingrese por teclado
indicar cuantas veces aparece la siguiente secuencia de caracteres ca.
indicar si la cadena es una paligreno.
usar las funciones de string que considere necesario
*/




#include <stdio.h>
#include <string.h>
#include <ctype.h>

// Función para contar vocales específicas
int contarVocal(const char *cadena, char vocal) {
    int contador = 0;
    char v = tolower(vocal);
    for(int i = 0; cadena[i] != '\0'; i++) {
        if(tolower(cadena[i]) == v) {
            contador++;
        }
    }
    return contador;
}

// Función para contar la secuencia "ca"
int contarSecuenciaCA(const char *cadena) {
    int contador = 0;
    for(int i = 0; cadena[i] != '\0' && cadena[i+1] != '\0'; i++) {
        if(tolower(cadena[i]) == 'c' && tolower(cadena[i+1]) == 'a') {
            contador++;
        }
    }
    return contador;
}

// Función para verificar si es palíndromo
int esPalindromo(const char *cadena) {
    int inicio = 0;
    int fin = strlen(cadena) - 1;
    
    while(fin > inicio) {
        if(tolower(cadena[inicio++]) != tolower(cadena[fin--])) {
            return 0;
        }
    }
    return 1;
}

int main() {
    char cadena[100];
    char vocal;
    
    // Ingresar cadena
    printf("Ingrese una cadena de caracteres (max 99 letras): ");
    fgets(cadena, sizeof(cadena), stdin);
    cadena[strcspn(cadena, "\n")] = '\0'; // Eliminar el salto de línea
    
    // Mostrar cadena original
    printf("\nCadena ingresada: %s\n", cadena);
    
    // Mostrar cadena al revés
    printf("Cadena al reves: ");
    for(int i = strlen(cadena)-1; i >= 0; i--) {
        printf("%c", cadena[i]);
    }
    printf("\n");
    
    // Contar vocales específicas
    printf("\nIngrese una vocal para buscar: ");
    scanf(" %c", &vocal);
    printf("La vocal '%c' aparece %d veces\n", vocal, contarVocal(cadena, vocal));
    
    // Contar secuencia "ca"
    printf("La secuencia 'ca' aparece %d veces\n", contarSecuenciaCA(cadena));
    
    // Verificar palíndromo
    if(esPalindromo(cadena)) {
        printf("La cadena SI es un palindromo\n");
    } else {
        printf("La cadena NO es un palindromo\n");
    }
    
    return 0;
}