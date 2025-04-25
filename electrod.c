//se desea desarrollar un programa que permita emitir el siguiente listado por pantallla. se debe ingresar por teclado el electrodomestico y el estado, la cantidad de electrodomesticos a ingresar estara determinada por el usuario y el total por estado.
#include <stdio.h>
	
	int main() {
	int totalElec, i;
	int electrodomestico;
	char estado;
	
	printf("Ingrese la cantidad de electrodomesticos a ingresar: ");
	scanf("%d", &totalElec);
	
	int averiado = 0, sinRepuesto = 0, enDesuso = 0, funcionando = 0;
	
	for (i = 0; i < totalElec; i++) {
		printf("Ingrese el electrodomestico %d: ", i + 1);
		scanf("%d", &electrodomestico);
		
		printf("Ingrese el estado del electrodomestico %d:\n", i + 1);
		printf("A- Averiado\n");
		printf("B- Sin repuesto\n");
		printf("C- En desuso\n");
		printf("D- Funcionando\n");
		printf("Selecciona el numero del estado del electrodomestico: ");
		scanf(" %c", &estado);
		
		switch (estado) {
		case 'A':
			averiado++;
			break;
		case 'B':
			sinRepuesto++;
			break;
		case 'C':
			enDesuso++;
			break;
		case 'D':
			funcionando++;
			break;
		}
	}
	
	printf("\nListado de electrodomesticos:\n");
	printf("Averiado: %d\n", averiado);
	printf("Sin repuesto: %d\n", sinRepuesto);
	printf("En desuso: %d\n", enDesuso);
	printf("Funcionando: %d\n", funcionando);
	
	return 0;
}
