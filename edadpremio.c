/*los padres de una niña le prometieron dar $10 cuando cumpliera 12 años, 
y duplicar el regalo en cada regalo subsiguiente hasta que el regalo superara los 1000.
escribia un programa para determinar que edad tendria la niña cuando se le de la ultima cantidad y la cantidad total recibida*/
#include <stdio.h>

int main() {
    int regalo = 10;  // Regalo inicial
    int edad = 12;    // Edad inicial
    int total = 0;    // Acumulador del total
    
    while(regalo <= 1000) {
        total += regalo;  // Suma el regalo actual al total
        printf("A los %d años recibió $%d\n", edad, regalo);
        
        if(regalo * 2 > 1000) {
            break;  // Salir si el próximo regalo superaría 1000
        }
        
        regalo *= 2;  // Duplica el regalo para el próximo año
        edad++;       // Incrementa la edad
    }
    
    printf("\nLa cantidad total recibida fue: $%d\n", total);
    printf("La edad cuando se dio el último regalo fue: %d años\n", edad);
    
    return 0;
}