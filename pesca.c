/*Suponga que el gobierno impone a los prestadores un limite los kg de pesca que puede recoger en un dia. 
desarrolle un programa que se le vayan dando los pesos de lo que va pescando y muestre el total de kg pescado en ese momento. 
cuando supere el maximo se debe dar la alarma y terminar el programa tambien debe terminar el programa si se intruduce un 0.
usar while*/


#include <stdio.h>

int main() {
    int limite = 10;  // Límite máximo de kg permitidos
    int total = 0;    // Acumula el total de kg pescados
    int kg;           // Para almacenar cada ingreso de kg
    
    printf("CONTROL DE PESCA DIARIO\n");
    printf("Límite máximo: %d kg por día\n", limite);
    
    while (1) {  // Bucle infinito (se romperá cuando sea necesario)
        // Pedir al usuario que ingrese los kg
        printf("\nIngrese los kg pescados (0 para terminar): ");
        scanf("%d", &kg);
        
        // Si ingresa 0, terminar el programa
        if (kg == 0) {
            printf("\nFin del programa. Total pescado: %d kg\n", total);
            break;
        }
        
        // Sumar al total
        total += kg;
        
        // Mostrar el total actual
        printf("Total acumulado: %d kg\n", total);
        
        // Verificar si se superó el límite
        if (total > limite) {
            printf("\n¡ALERTA! Se superó el límite de %d kg\n", limite);
            printf("Total pescado: %d kg\n", total);
            break;
        }
    }
    
    return 0;
}