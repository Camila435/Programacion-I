#include <stdio.h>
#include "funcionesH.h"

int main(){
    int x = 5, y = 3;
    int suma =sumar (x, y);
    int producto = multiplicar(x, y);
    printf("La suma de %d\n", suma);
    printf("El producto de %d\n", producto);
    return 0;

}