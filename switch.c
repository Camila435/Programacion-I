
#include<stdio.h>
int main(){


char dia = 'L';

switch (dia) {
    case 'L':
        printf("Lunes\n");  // Se ejecuta este bloque
        break;
    case 'M':
        printf("Martes\n");
        break;
    default:
        printf("Día no válido.\n");
}
return 0;
}