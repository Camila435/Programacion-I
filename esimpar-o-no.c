#include <stdio.h>

int main() {
    int a;
	scanf("%d", &a);
	if(a%2==0)/*comprobar si a es par*/
	{
	a=a+1;
	printf("ahora es impar:%d\n",a);
	} else printf("%d es impar\n", a);
	return 0;
}

