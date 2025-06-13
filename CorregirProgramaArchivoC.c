#include <stdio.h>
#include <string.h>
#define a "arch2.dat"

int main()
{
	FILE *arch2;
	char nombre[100];
	
	if ((arch2 = fopen(a, "w")) == NULL) {
		printf("No se pudo abrir el archivo");
		return 1;
	}
	
	printf("Ingrese 5 nombres separados por ENTER:\n");
	for (int i = 0; i < 5; i++) {
		printf("Nombre %d: ", i + 1);
		scanf("%99s", nombre); 
		fprintf(arch2, "%s\n", nombre);
		
		
		while(getchar() != '\n');
	}
	
	fclose(arch2);
	return 0;
}
