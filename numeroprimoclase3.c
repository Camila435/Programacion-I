#include <stdio.h>

int main()
{
	printf("ingrese el n�mero: ");
	int numero;
	scanf("%d", &numero);
	int contador = 0;
	
	for (int i = 2; i < numero; i++)
	{
		if (numero % i == 0)
		{
			contador++;
		}
	}
	
	if (contador == 0)
	{
		printf("El n�mero %d es primo\n", numero);
	}
	else
	{
		printf("El n�mero %d no es primo\n", numero);
	}
}
