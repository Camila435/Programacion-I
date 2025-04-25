#include <stdio.h>

int main()
{
	
	int A, B, C;
	printf("Ingrese el primer numero: ");
	scanf("%d", &A);
	printf("Ingrese el segundo numero: ");
	scanf("%d", &B);
	printf("Ingrese el tercer numero: ");
	scanf("%d", &C);
	
	if (A > B)
	{
		if (B > C)
		{
			printf("%d, %d, %d\n", A, B, C);
		}
		else
		{
			if (A > C)
			{
				printf("%d, %d, %d\n", A, C, B);
			}
			else
			{
				printf("%d, %d, %d\n", C, A, B);
			}
		}
	}
	else
	{
		if (C > B)
		{
			printf("%d, %d, %d\n", C, B, A);
		}
		else
		{
			if (A > C)
			{
				printf("%d, %d, %d\n", B, A, C);
			}
			else
			{
				printf("%d, %d, %d\n", B, C, A);
			}
		}
	}
	
	return 0;
}
