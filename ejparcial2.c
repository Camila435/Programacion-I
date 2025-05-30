  /*  cargar el siguiente texto en una cadena en etapa de declaricion cada palabra esta separada de - y cada oracion * 
    defini: la dimension de la cadena usando el define. usar una funcion predeterminada para indicar la longitud de la cadena, mostrar el resultado por pantalla.
    mostrar la cadena considerando la oracion debjo de la otra separada de una linea en blanco.
    indicar cuantas vocales en total tiene el texto.
    usar una funcion para determinar si una letra que se ingresa por teclado corresponde a una vocal de la cadena.
    indicar cual es la oracion mas larga y cual es la mas corta. indicar cuantas palabras tiene cada oracion.*/ 
    /* *hoy-es-miercioles.* *hoy-es-el-repaso-de-programacion-I.* *ESTUDIO-PROGRAMACION.**/
#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX_LONGITUD 100

// Prototipos de funciones
int contarVocales(const char *cadena);
int esVocalEnTexto(const char *cadena, char letra);
void analizarOraciones(const char *cadena);

int main() {
    // Cadena declarada según especificaciones
    const char texto[] = "*hoy-es-miercioles.* *hoy-es-el-repaso-de-programacion-I.* *ESTUDIO-PROGRAMACION.**";
    
   
    printf("Longitud de la cadena: %zu\n", strlen(texto));
    
    
    printf("\nTexto formateado:\n");
    char *token = strtok((char *)texto, "*");
    while(token != NULL) {
        if(strlen(token) > 0) {
            printf("%s\n\n", token);
        }
        token = strtok(NULL, "*");
    }
    
    
    printf("Total de vocales en el texto: %d\n", contarVocales(texto));
    
    
    char letra;
    printf("\nIngrese una letra para verificar si es vocal en el texto: ");
    scanf(" %c", &letra);
    if(esVocalEnTexto(texto, tolower(letra))) {
        printf("La letra '%c' SI esta como vocal en el texto.\n", letra);
    } else {
        printf("La letra '%c' NO esta como vocal en el texto.\n", letra);
    }
    
    
    analizarOraciones(texto);
    
    return 0;
}

// Función para contar vocales en el texto
int contarVocales(const char *cadena) {
    int contador = 0;
    for(int i = 0; cadena[i] != '\0'; i++) {
        char c = tolower(cadena[i]);
        if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
            contador++;
        }
    }
    return contador;
}

// Función para verificar si una vocal está en el texto
int esVocalEnTexto(const char *cadena, char letra) {
    letra = tolower(letra);
    if(!(letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u')) {
        return 0; // No es vocal
    }
    
    for(int i = 0; cadena[i] != '\0'; i++) {
        if(tolower(cadena[i]) == letra) {
            return 1;
        }
    }
    return 0;
}

// Función para analizar oraciones
void analizarOraciones(const char *cadena) {
    char copia[MAX_LONGITUD];
    strcpy(copia, cadena);
    
    char *oracion = strtok(copia, "*");
    char *masLarga = NULL;
    char *masCorta = NULL;
    int maxPalabras = 0, minPalabras = 100;
    int longMasLarga = 0, longMasCorta = MAX_LONGITUD;
    
  
    while(oracion != NULL) {
        if(strlen(oracion) > 0) {
            // Contar palabras en la oración
            int palabras = 1;
            for(int i = 0; oracion[i] != '\0'; i++) {
                if(oracion[i] == '-') palabras++;
            }
            
            // Determinar oración más larga y más corta
            int longitud = strlen(oracion);
            if(longitud > longMasLarga) {
                longMasLarga = longitud;
                masLarga = oracion;
                maxPalabras = palabras;
            }
            if(longitud < longMasCorta) {
                longMasCorta = longitud;
                masCorta = oracion;
                minPalabras = palabras;
            }
            
            printf("Oracion: '%s' - Palabras: %d - Longitud: %d\n", 
                   oracion, palabras, longitud);
        }
        oracion = strtok(NULL, "*");
    }
    
    printf("\nOracion mas larga: '%s' (%d caracteres, %d palabras)\n", 
           masLarga, longMasLarga, maxPalabras);
    printf("Oracion mas corta: '%s' (%d caracteres, %d palabras)\n", 
           masCorta, longMasCorta, minPalabras);
}