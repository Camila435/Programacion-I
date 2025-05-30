#include <stdio.h>

// Prototipos de funciones (declaraciones)
void mostrar(int m[3][3]);
void silla(int m[3][3]);
int magico(int m[3][3]);

int main() {
    int m[3][3], opcion;
    
    printf("Ingrese matriz 3x3:\n");
    for(int i=0; i<3; i++)
        for(int j=0; j<3; j++) {
            printf("[%d][%d]: ", i, j);
            scanf("%d", &m[i][j]);
        }
    
    printf("\nMatriz:\n"); 
    mostrar(m);
    
    printf("\n1-Punto silla\n2-Cuadro magico\nOpcion: ");
    scanf("%d", &opcion);
    
    if(opcion == 1) 
        silla(m);
    else if(opcion == 2) 
        printf(magico(m) ? "Es cuadro magico\n" : "No es cuadro magico\n");
    else 
        printf("Opcion invalida\n");
    
    return 0;
}

// Definición de funciones
void mostrar(int m[3][3]) {
    for(int i=0; i<3; i++) {
        for(int j=0; j<3; j++) 
            printf("%d\t", m[i][j]);
        printf("\n");
    }
}

void silla(int m[3][3]) {
    int encontrado = 0;
    for(int i=0; i<3; i++)
        for(int j=0; j<3; j++) {
            int min = 1, max = 1;
            for(int k=0; k<3; k++) {
                if(m[i][k] < m[i][j]) min = 0;
                if(m[k][j] > m[i][j]) max = 0;
            }
            if(min && max) {
                printf("Punto silla [%d][%d] = %d\n", i, j, m[i][j]);
                encontrado = 1;
            }
        }
    if(!encontrado) printf("No hay punto silla\n");
}

int magico(int m[3][3]) {
    int n[10] = {0}, s = m[0][0] + m[0][1] + m[0][2];
    for(int i=0; i<3; i++)
        for(int j=0; j<3; j++) {
            if(m[i][j] < 1 || m[i][j] > 9 || n[m[i][j]]) return 0;
            n[m[i][j]] = 1;
        }
    for(int i=0; i<3; i++)
        if(m[i][0] + m[i][1] + m[i][2] != s) return 0;
    for(int j=0; j<3; j++)
        if(m[0][j] + m[1][j] + m[2][j] != s) return 0;
    return (m[0][0] + m[1][1] + m[2][2] == s) && (m[0][2] + m[1][1] + m[2][0] == s);
}