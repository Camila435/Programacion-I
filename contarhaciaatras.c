#include <stdio.h>
 voi contarAtras(int n){
    if (n == 0){
        printf("Listo!\n");
    }else{
        printf("%d\n", n);
        contarAtras(n - 1); // Llamada recursiva
    }
 }

 int main(){
    contarAtras(10); // Inicia la cuenta regresiva desde 10
    return 0;
 }