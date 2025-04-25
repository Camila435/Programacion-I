/*una farmacia hace el 15% de descuento sobre los precios de la lista oficial.
hacer un programa que permita ingresar por teclado el precio de lista de un determinado articulo
 y la cantidad de unidades compradas por el cliente.
luego calcular e informar por pantalla el total a pagar aplicando el descuento respectivo.*/


#include<stdint.h>

int main(){
    int cantidad, articulo;
    char op;
    float precio, total, descuento;
    printf("Ingrese el articulo:")
    scanf("%d", &articulo);
    printf("Ingrese el precio de lista:");
    scanf("%f", &precio);
    for(int i=0,i<=articulo; i++){
        total= articulo+precio;
        printf("El total a pagar es: %f", total);
        printf("Quiere aplicar un descuento?: s/n");
        scanf(" %c", &op);
        if(op==s){ 
            descuento= precio * 0.15;
            float preciofinal= descuento - precio;
            printf("El descuento es de: %f", descuento);
            printf("El precio final es: %f", preciofinal)

        }
    }










    return 0;
}