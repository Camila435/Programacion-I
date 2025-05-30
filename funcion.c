#include <stdio.h>  // Incluye la biblioteca estándar para usar printf()

// Función que suma dos números enteros
int sumar(int a, int b) {  // Recibe dos parámetros: a y b
    return a + b;          // Retorna la suma de a + b
}

// Función principal
int main() {
    // Llama a sumar(5, 3), guarda el resultado (8) en la variable 'resultado'
    int resultado = sumar(5, 3);  
    
    // Imprime el resultado formateado
    printf("La suma es: %d\n", resultado);  
    
    return 0;  // Indica que el programa terminó correctamente
}