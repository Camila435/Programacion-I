#include <stdio.h>

int fibonacci (int n){
    if (n==0){
        return 0;
    }
    if (n==1){
        return 1;
    }
    return fibonacci(n-1) + fibonacci(n-2); // Llamada recursiva
}

int main()  {
    int i;
    for (i = 0; i < 10; i++) { // Cambia 10 por el número de términos que quieras
        printf("%d ", fibonacci(i)); // Imprime los primeros 10 números de la serie de Fibonacci
    }
    printf("\n");
    return 0;

}