#include <stdio.h>

int main() {
	int opcion,numeroUno, numeroDos;
	printf("Ingrese una opcion(1-4):");
	scanf("%d", &opcion);
	
	
	switch(opcion)
	{
	case 1:
		printf("Opcion 1 selecionada.\n");
		printf("Ingrese un numero:\n");
		scanf("%d", &numeroUno);
		printf("Ingrese otro numero:\n");
		scanf("%d", &numeroDos);
		int suma= numeroUno+numeroDos;
		printf("El resultado de la suma es:%d\n", suma);
		break;
	case 2:
		printf("Opcion 2 selecionada.\n");
		printf("Ingrese un numero:\n");
		scanf("%d", &numeroUno);
		printf("Ingrese otro numero:\n");
		scanf("%d", &numeroDos);
		int resta= numeroUno-numeroDos;
		printf("El resultado de la resta es:%d\n", resta);
		break;
	case 3:
		printf("Opcion 3 selecionada.\n");
		printf("Ingrese un numero:\n");
		scanf("%d", &numeroUno);
		printf("Ingrese otro numero:\n");
		scanf("%d", &numeroDos);
		int mult= numeroUno * numeroDos;
		printf("El resultado de la multiplicacion es:%d\n", mult);
		break;
	case 4:
		printf("Opcion 4 selecionada.\n");
		printf("Ingrese un numero:\n");
		scanf("%d", &numeroUno);
		printf("Ingrese otro numero:\n");
		scanf("%d", &numeroDos);
		int div= numeroUno / numeroDos;
		printf("El resultado de la división es:%d\n", div);
		break;
	default:
		printf("Opcion invalida.\n");
	}
	return 0;
}

