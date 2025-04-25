#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c, discriminante, raiz1, raiz2;

    printf("Ingrese el coeficiente a: ");
    scanf("%f", &a);

    printf("Ingrese el coeficiente b: ");
    scanf("%f", &b);

    printf("Ingrese el coeficiente c: ");
    scanf("%f", &c);

    discriminante = b * b - 4 * a * c;

    if (discriminante > 0) {
        raiz1 = (-b + sqrt(discriminante)) / (2 * a);
        raiz2 = (-b - sqrt(discriminante)) / (2 * a);
        printf("La ecuacion tiene dos raices reales distintas:\n");
        printf("Raiz 1: %.2f\n", raiz1);
        printf("Raiz 2: %.2f\n", raiz2);
    } else if (discriminante == 0) {
        raiz1 = -b / (2 * a);
        printf("La ecuacion tiene una raiz real doble:\n");
        printf("Raiz: %.2f\n", raiz1);
    } else {
        printf("La ecuacion no tiene raices reales.\n");
    }

    return 0;
}
