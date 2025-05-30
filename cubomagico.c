/*escribir un  programa d que permita cargar como entrada una matriz de 3x3 de numeros entero por teclado
mostrar la matriz usando un procedimiento
usar una sentencia switch para seleccionar el calculo a realizar:
1-calcular la posicion de punto de silla si existe. usar un procedimiento o funcion segun considere necesario, un punto de silla de una matriz es un elemento que es a la vez el elemento mas grande de su columna y el elemento mas pequeño de su fila.
2-determinar si la matriz es un cuadro magico o no. un cuadra magico es una matriz de 3x3 formada por numeros del 1 al 9 donde la suma de sus filas, sus columnas y sus diagonales son identicas. usar una funcion o un procedimiento segun considere necesario.
sumar las filas o las columnas para calcular el cuadra magico.
*/
#include <stdio.h>


void mostrarMatriz(int matriz[3][3]);
void puntoSilla(int matriz[3][3]);
int esCuboMagico(int matriz[3][3]);

int main() {
    int matriz[3][3];
    int opcion;
    

    printf("Ingrese los elementos de la matriz 3x3:\n");
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            printf("Elemento %d  %d: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
    
    
    printf("\nOpciones:\n");
    printf("1 - Buscar punto de silla\n");
    printf("2 - Verificar si es cuadro magico\n");
    printf("Seleccione una opcion: ");
    scanf("%d", &opcion);
    
    switch(opcion) {
        case 1:
            puntoSilla(matriz);
            break;
        case 2:
            if(esCuboMagico(matriz)) {
                printf("\nLa matriz SI es un cuadro magico.\n");
            } else {
                printf("\nLa matriz NO es un cuadro magico.\n");
            }
            break;
        default:
            printf("\nOpcion no valida.\n");
    }
    
    return 0;
}


void mostrarMatriz(int matriz[3][3]) {
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }
}


void puntoSilla(int matriz[3][3]) {
    int encontrado = 0;
    
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            int elemento = matriz[i][j];
            int esMinimoFila = 1;
            int esMaximoColumna = 1;
            
            
            for(int k = 0; k < 3; k++) {
                if(matriz[i][k] < elemento) {
                    esMinimoFila = 0;
                    break;
                }
            }
            
            
            for(int k = 0; k < 3; k++) {
                if(matriz[k][j] > elemento) {
                    esMaximoColumna = 0;
                    break;
                }
            }
            
           
            if(esMinimoFila && esMaximoColumna) {
                printf("\nPunto de silla encontrado en [%d][%d] = %d\n", i, j, elemento);
                encontrado = 1;
            }
        }
    }
    
    if(!encontrado) {
        printf("\nNo se encontraron puntos de silla en la matriz.\n");
    }
}


int esCuboMagico(int matriz[3][3]) {
   
    int numeros[10] = {0};
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            if(matriz[i][j] < 1 || matriz[i][j] > 9 || numeros[matriz[i][j]]) {
                return 0;
            }
            numeros[matriz[i][j]] = 1;
        }
    }
    
    
    int sumaMagica = matriz[0][0] + matriz[0][1] + matriz[0][2];
    

    for(int i = 1; i < 3; i++) {
        int sumaFila = matriz[i][0] + matriz[i][1] + matriz[i][2];
        if(sumaFila != sumaMagica) return 0;
    }
    
    
    for(int j = 0; j < 3; j++) {
        int sumaColumna = matriz[0][j] + matriz[1][j] + matriz[2][j];
        if(sumaColumna != sumaMagica) return 0;
    }
    
    
    int diagonal1 = matriz[0][0] + matriz[1][1] + matriz[2][2];
    int diagonal2 = matriz[0][2] + matriz[1][1] + matriz[2][0];
    
    return (diagonal1 == sumaMagica && diagonal2 == sumaMagica);
}