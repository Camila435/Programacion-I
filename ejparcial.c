/* DADA UNA MATRIZ CUDRADA DE NUMEROS ENTEROS DE 4X4 SE PIDE:
CARGAR LA MATRIZ.MOSTRAR EL RESULTADO EN FORMA DE MATRIZ(LA MATRIZ SE CARGA USANDO SENTANCIA REPETITIVAS). LA DIMENSIONES SE DEBEN ESPECIFICAR CON DEFINE.
CARGAR LOS NUMEROS DIVISIBLES POR 4 DE LA MATRIZ EN UN ARREGLO. MOSTRAR EL ARREGLO.USAR UNA FUNCION PARA DETERMINAR SI UN NUMERO ES DIVISIBLE POR 4.
INDICAR CUANTOS NUMEROS SE CARGARON EN EL ARREGLO.
ORDENAR EL ARREGLO DE MENOR A MAYOR. MOSTRAR POR PANTALLA EL ARREGLO ORDENADO. USAR UN PROCEDIMIENTO PARA ORDENAR.
A PARTIR DEL ARREGLO, CREAR UNA CADENA FORMADA POR VOCALES. SI EL NUMERO 1 CORRESPONDE A "1", 4 VOCAL E, 8 VOCAL I, 12 VOCAL O, 16 VOCAL U.
USAR UNA FUNCION DE STRING PARA DETERMINAR LA LONGITUD DE LA CADENA.
EN CASO DE QUE LA CADENA TENGA ELEMENTOS, VERIFICAR SI ES UN PALIDREMO. USAR PROCEDIMIENTO. EN CASO QUE LA CADENA TENGA ELEMENTOS MOSTRAR LA CADENA POR PANTALLA.*/



#include <stdio.h>
#include <string.h>
#include <stdbool.h>

#define DIM 4

// Prototipos de funciones
bool esDivisiblePor4(int num);
void ordenarArreglo(int arr[], int n);
bool esPalindromo(char cadena[]);

int main() {
    int matriz[DIM][DIM];
    int divisiblesPor4[DIM*DIM]; // Máximo posible: todos los elementos
    int contDivisibles = 0;
    char cadenaVocales[DIM*DIM + 1] = ""; // +1 para el carácter nulo
    
    // 1. Cargar la matriz
    printf("Ingrese los elementos de la matriz %dx%d:\n", DIM, DIM);
    for(int i = 0; i < DIM; i++) {
        for(int j = 0; j < DIM; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
    
    // 2. Mostrar la matriz
    printf("\nMatriz ingresada:\n");
    for(int i = 0; i < DIM; i++) {
        for(int j = 0; j < DIM; j++) {
            printf("%4d", matriz[i][j]);
        }
        printf("\n");
    }
    
    // 3. Cargar números divisibles por 4 en un arreglo
    for(int i = 0; i < DIM; i++) {
        for(int j = 0; j < DIM; j++) {
            if(esDivisiblePor4(matriz[i][j])) {
                divisiblesPor4[contDivisibles] = matriz[i][j];
                contDivisibles++;
            }
        }
    }
    
    // 4. Mostrar el arreglo de divisibles por 4
    printf("\nNumeros divisibles por 4 (%d elementos):\n", contDivisibles);
    for(int i = 0; i < contDivisibles; i++) {
        printf("%d ", divisiblesPor4[i]);
    }
    printf("\n");
    
    // 5. Ordenar el arreglo
    if(contDivisibles > 0) {
        ordenarArreglo(divisiblesPor4, contDivisibles);
        
        printf("\nArreglo ordenado:\n");
        for(int i = 0; i < contDivisibles; i++) {
            printf("%d ", divisiblesPor4[i]);
        }
        printf("\n");
    }
    
    // 6. Crear cadena de vocales
    for(int i = 0; i < contDivisibles; i++) {
        switch(divisiblesPor4[i]) {
            case 1: strcat(cadenaVocales, "A"); break;
            case 4: strcat(cadenaVocales, "E"); break;
            case 8: strcat(cadenaVocales, "I"); break;
            case 12: strcat(cadenaVocales, "O"); break;
            case 16: strcat(cadenaVocales, "U"); break;
            default: break;
        }
    }
    
    // 7. Mostrar cadena y verificar si es palíndromo
    if(strlen(cadenaVocales) > 0) {
        printf("\nCadena de vocales: %s\n", cadenaVocales);
        printf("Longitud de la cadena: %zu\n", strlen(cadenaVocales));
        
        if(esPalindromo(cadenaVocales)) {
            printf("La cadena ES un palindromo.\n");
        } else {
            printf("La cadena NO es un palindromo.\n");
        }
    } else {
        printf("\nNo se genero cadena de vocales.\n");
    }
    
    return 0;
}

// Función para determinar si un número es divisible por 4
bool esDivisiblePor4(int num) {
    return num % 4 == 0;
}

// Procedimiento para ordenar un arreglo (Bubble Sort)
void ordenarArreglo(int arr[], int n) {
    for(int i = 0; i < n-1; i++) {
        for(int j = 0; j < n-i-1; j++) {
            if(arr[j] > arr[j+1]) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

// Función para verificar si una cadena es palíndromo
bool esPalindromo(char cadena[]) {
    int inicio = 0;
    int fin = strlen(cadena) - 1;
    
    while(fin > inicio) {
        if(cadena[inicio++] != cadena[fin--]) {
            return false;
        }
    }
    return true;
}