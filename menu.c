#include <stdio.h>
	
	int main() {
	char sectores;
	
	printf("****************************************\n");
	printf("*   Bienvenidos al ESTADIO CUSCATLAN   *\n");
	printf("****************************************\n");
	printf("* Sectores del estadio                 *\n");
	printf("*   A- Sol general\n");
	printf("*   B- Sol preferente\n");
	printf("*   C- Sombra\n");
	printf("*   D- Tribuna\n");
	printf("*   E- Platea\n");
	printf("Selecciona la letra del sector del estadio: ");
	scanf(" %c", &sectores);
	
	switch(sectores) {
	case 'A':
		printf("Sol general $3\n");
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

