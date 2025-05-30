/*cargar un arreglo de tipo entero de 10 elementos en etapa de definicion.
mostrar el contenido del arreglo usando for.
los elementos se deben mostrar uno al lado del otro separados por dos guiones medio.
al programa anterior agregar la suma de sus elementos. mostrar el resultado.
calcular promedio.
mostrar una psoicion por teclado e indicar que elemento se encuentra en dicha posicion.
ingresar un valor por teclado e indicar si es un elemento que pertenece al arreglo.*/

#include <stdio.h>


int main(){
    int x[10]={1,2,3,4,5,6,7,8,9,10};
    #define n=10;

    

     for (int i = 0; i < 10; i++)
     {
        printf("%i --", x[i]);
        int acum= acum + x[i];
        if (int elemento==x[i]){
            printf("elemento encontrado");
            int t=t++;

        }
        if (t==0){
            printf("No tiene elementos");

        }else{
            printf("tiene %i elementos repetidos",t);
        }
       
    }
    int prom= acum/n;
    



    return 0;
}