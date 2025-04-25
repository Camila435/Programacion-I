
#include <stdio.h>
	
	int main() {
	char nombre[10];
	float horasTrabajo;
	float precioHora;
	float total;
	
	printf("Ingrese su nombre: ");
	scanf("%s", nombre);
	
	printf("Ingrese las horas de trabajo: ");
	scanf("%f", &horasTrabajo);
	
	printf("Ingrese el precio por hora: ");
	scanf("%f", &precioHora);
	
	if (horasTrabajo <= 40) {
		total = horasTrabajo * precioHora;
		printf("\nResumen:\n");
		printf("Nombre: %s\n", nombre);
		printf("Horas de trabajo: %.2f\n", horasTrabajo);
		printf("Precio por hora: $%.2f\n", precioHora);
		printf("Salario: $%.2f\n", total);
	} else {
		total = 40 * precioHora + 1.5 * precioHora * (horasTrabajo - 40);
		printf("\nResumen:\n");
		printf("Nombre: %s\n", nombre);
		printf("Horas de trabajo: %.2f\n", horasTrabajo);
		printf("Precio por hora: $%.2f\n", precioHora);
		printf("Salario: $%.2f\n", total);
	}
	
	return 0;
}

