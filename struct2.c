#include <stdio.h>   // Para funciones de entrada/salida (printf, scanf, fgets)
#include <string.h>  // Para manipulación de strings (strcspn)

// Definición de una estructura llamada Persona
struct Persona {
    char nombre[50];  // **Corrección**: Aumentado a 50 caracteres para nombres largos
    int edad;
    float altura;
};

int main() {
    struct Persona p;  // Crea una variable 'p' de tipo Persona

    // Solicitar y guardar el nombre
    printf("Ingrese el nombre: ");
    fgets(p.nombre, sizeof(p.nombre), stdin);  // Lee el nombre (incluye espacios)
    p.nombre[strcspn(p.nombre, "\n")] = '\0';  // Elimina el salto de línea del final

    // Solicitar y guardar la edad
    printf("Ingrese la edad: ");
    scanf("%d", &p.edad);  // Lee un entero y lo guarda en p.edad

    // Solicitar y guardar la altura
    printf("Ingrese la altura (en metros): ");
    scanf("%f", &p.altura);  // Lee un float y lo guarda en p.altura

    // Mostrar los datos almacenados
    printf("\nDatos ingresados:\n");
    printf("Nombre: %s\n", p.nombre);
    printf("Edad: %d años\n", p.edad);
    printf("Altura: %.2f metros\n", p.altura);  // **Corrección**: %f en lugar de %j

    return 0;  // Fin del programa
}