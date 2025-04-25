#include <stdio.h>  // Incluimos la biblioteca estándar para usar printf()

int main() {  // Función principal del programa
    // Ejemplo de un 'if' que verifica si un número es positivo, negativo o cero

    // 1. Definimos una variable entera
    int numero = 10;  // Cambia este valor para probar diferentes casos

    // 2. Iniciamos la condición con 'if'
    if (numero > 0) {  
        // 3. Este bloque se ejecuta SOLO si la condición es verdadera (true)
        printf("El número es positivo.\n");  
    }
    else if (numero < 0) {  
        // 4. Este bloque se ejecuta si la primera condición es falsa (false) 
        //     pero esta segunda condición es verdadera
        printf("El número es negativo.\n");  
    }
    else {  
        // 5. Este bloque se ejecuta si TODAS las condiciones anteriores son falsas
        printf("El número es cero.\n");  
    }

    // 6. Fuera del 'if' (siempre se ejecuta)
    printf("Fin del programa.\n");

    return 0;  // Indicamos que el programa terminó correctamente
}