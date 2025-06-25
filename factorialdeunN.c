
#include <stdio.h>
int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1; // Caso base: 0! = 1 y 1! = 1
    } else {
        return n * factorial(n - 1); // Llamada recursiva
    }
}

int main(){
    int num = 4; // Cambia este valor para calcular el factorial de otro número
    printf("El factorial de %d es %d\n", num, factorial(num));
    return 0;
}


// Explicación:// 1. La función `factorial` toma un entero `n` como argumento.
//// 2. Si `n` es 0 o 1, devuelve 1 (caso base).
//// 3. Si `n` es mayor que 1, devuelve `n` multiplic   ado por el factorial de `n - 1` (llamada recursiva).
//// 4. En `main`, se define un número y se imprime su factorial llamando a la función `factorial`.
//// 5. Puedes cambiar el valor de `num` para calcular el factorial de otros números.
//  // Nota: El factorial crece rápidamente, así que ten cuidado con números grandes para evitar desbordamientos.
//  // Este código calcula el factorial de un número usando recursividad.