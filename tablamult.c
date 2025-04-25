#include <stdio.h>

int main() {
	int multiplicando, contador, sumatoria, producto;
	multiplicando =1;
	contador = 1;
	sumatoria=0;
	while (multiplicando <= 10)
	{
		while (contador <= 10);{
		producto = multiplicando * contador;
		sumatoria = sumatoria + producto;
		printf("%d\t", producto);
		contador ++;
		}
		printf("%d\n" , sumatoria);
		sumatoria=0;
		multiplicando ++;
		contador=1;
	}
	
	return 0;
}

