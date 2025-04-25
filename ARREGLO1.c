#include <stdio.h>

int main() {
	int A[7];
	int C, acum=0, d=0;
	
	for (C=0; C<7; C++) {
		int valor; // declaro la variable
		
		// solicitar entrada hasta recbir un multiplo de 3
		do {
			printf("Ingrese un valor multiplo de 3: ");
			scanf("%d", &valor);
			if (valor % 3 != 0) {
				printf("El valor no es multiplo de 3. Inténtelo de nuevo.\n");
			}
		} while (valor % 3 != 0);  // continuar hasta que se ingrese un valor
		
		A[d] = valor; // alamcena un valor valido en la matriz
	}
	C++;
	
	for (C=0; C<d; C++) {
		printf("Elemento %d: %d\n", C, A[C]);
		acum += A[C];  // Suma los valores
		if (A[C] % 3 == 0) {
			d++; // contar multiplos de 3
		}
	}
	
	printf("Sumatoria = %d\n", acum);
	printf("Cantidad de numeros multiplo de 3 = %d\n", d);
	
	return 0;
}
