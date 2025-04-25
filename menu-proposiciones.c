#include <stdio.h>
	
	int main() {
	char proposiciones;
	
	printf("****************************************\n");
	printf("*   Logica Proposicional   *\n");
	printf("****************************************\n");
	printf("* Proposiciones                 *\n");
	printf("*   A- Conjuncion");
	printf("*   B- Disyuncion");
	printf("*   C- Implicacion");
	
	printf("Selecciona la letra segun la proposicion que desea: ");
	scanf(" %c", &proposiciones);
	
	switch(proposiciones) {
	case 'A':
		printf("p");
		printf("
		break;
	case 'B':
		printf("Sol preferente $5\n");
		break;
	case 'C':
		printf("Sombra $8\n");
		break;
	case 'D':
		printf("Tribuna $15\n");
		break;
	case 'E':
		printf("Platea $20\n");
		break;
	default:
		printf("Opción inválida\n");
		break;
	}
	
	return 0;
}

