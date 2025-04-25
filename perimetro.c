
#include <stdio.h>

int main() {
	int lado, intentos = 0;
	float perimetro;
	
	while (intentos < 3) {
		printf("Ingrese el lado del cuadrado: ");
		scanf("%d", &lado);
		
		if (lado <= 0) {
			printf("Error: El lado del cuadrado debe ser mayor que 0.\n");
			intentos++;
		} else {
			perimetro = lado * 4;
			printf("El perímetro del cuadrado es: %.2f\n", perimetro);
			break;
		}
	}
	
	if (intentos == 3) {
		printf("Lo siento, ha superado el número máximo de intentos.\n");
	}
	
	return 0;
}
