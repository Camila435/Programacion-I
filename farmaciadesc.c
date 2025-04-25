/*una farmacia hace el 15% de descuento sobre los precios de la lista oficial.
hacer un programa que permita ingresar por teclado el precio de lista de un determinado articulo
 y la cantidad de unidades compradas por el cliente.
luego calcular e informar por pantalla el total a pagar aplicando el descuento respectivo.*/


/*#include <stdio.h>

int main() {
    float precio_lista, precio_final, descuento;
    int cantidad;
    
    // Entrada de datos
    printf("Ingrese el precio de lista del articulo: ");
    scanf("%f", &precio_lista);
    
    printf("Ingrese la cantidad de unidades compradas: ");
    scanf("%d", &cantidad);
    
    // Cálculos
    descuento = precio_lista * cantidad * 0.15;  // 15% de descuento
    precio_final = (precio_lista * cantidad) - descuento;
    
    // Salida de resultados
    printf("\nDetalle de la compra:\n");
    printf("Precio de lista unitario: $%.2f\n", precio_lista);
    printf("Cantidad comprada: %d unidades\n", cantidad);
    printf("Subtotal: $%.2f\n", precio_lista * cantidad);
    printf("Descuento (15%%): $%.2f\n", descuento);
    printf("Total a pagar: $%.2f\n", precio_final);
    
    return 0;
}*/

#include <stdio.h>

int main() {
    int cantidad_articulos;
    float precio, subtotal = 0, descuento, total;
    
    printf("SISTEMA DE VENTAS FARMACIA\n");
    printf("--------------------------\n");
    
    // Preguntar cuántos artículos diferentes va a comprar
    printf("Ingrese la cantidad de artículos diferentes a comprar: ");
    scanf("%d", &cantidad_articulos);
    
    // Procesar cada artículo
    for(int i = 1; i <= cantidad_articulos; i++) {
        printf("\nArtículo %d:\n", i);
        
        // Pedir precio y cantidad para este artículo
        printf("Precio unitario: $");
        scanf("%f", &precio);
        
        printf("Cantidad a comprar: ");
        int cantidad;
        scanf("%d", &cantidad);
        
        // Calcular subtotal para este artículo
        float subtotal_articulo = precio * cantidad;
        subtotal += subtotal_articulo;
        
        printf("Subtotal por este artículo: $%.2f\n", subtotal_articulo);
    }
    
    // Calcular descuento y total
    descuento = subtotal * 0.15;  // 15% de descuento
    total = subtotal - descuento;
    
    // Mostrar resumen final
    printf("\nRESUMEN DE COMPRA\n");
    printf("-----------------\n");
    printf("Subtotal: $%.2f\n", subtotal);
    printf("Descuento (15%%): $%.2f\n", descuento);
    printf("TOTAL A PAGAR: $%.2f\n", total);
    
    return 0;
}