#include <stdio.h>  // Incluye la biblioteca estándar para usar printf()

// Función que calcula el cuadrado de un número
int cuadrado(int x) {  // Recibe un entero 'x' como parámetro
    return x * x;      // Retorna el resultado de multiplicar x por sí mismo
}

// Función que muestra el resultado formateado
void mostrarResultado(int numero, int resultado) {
    // Imprime: "El cuadrado de [numero] es [resultado]"
    printf("El cuadrado de %d es %d\n", numero, resultado);
}

// Función principal
int main() {
    int n = 4;               // Declara una variable 'n' y le asigna el valor 4
    int res = cuadrado(n);    // Llama a 'cuadrado' con 'n' y guarda el resultado en 'res'
    mostrarResultado(n, res); // Llama a 'mostrarResultado' con ambos valores
    return 0;                // Indica que el programa terminó correctamente
}