#include <stdio.h>
#include <string.h>

#define ARCHIVO "arch2.dat"

int main() {
	FILE *arch2;
	char nombre[100];
	
	if ((arch2 = fopen(ARCHIVO, "r")) == NULL) { 
		printf("No se pudo abrir el archivo");
		return 1; 
	}
	
	while (fgets(nombre, sizeof(nombre), arch2) != NULL) {
		
		nombre[strcspn(nombre, "\n")] = '\0';
		printf("%s\n", nombre);
	}
	
	fclose(arch2);
	
	printf("\nPresione Enter para salir");
	getchar();  
	
	return 0;
}


