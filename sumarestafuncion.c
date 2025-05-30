#include <stdio.h>
#include <conio.h>


/*int suma (int a , int b);*/
int resta (int a , int b);

int main()
{
    int x,y,z;
    printf("Ingrese el numero a restar:");
    scanf("%d", &x);
    printf("Ingrese el numero a restar:");
    scanf("%d", &y);

    void imprimir(int p);

    z=resta(x,y);
    printf("La resta es %d \n", z);

    printf("La resta es %d", resta(x,y));

    imprimir (z);

    getch();

    return 0;

}
int resta(int a, int b)
{
    int totalresta;
    totalresta= a-b;
    return totalresta;
}
/*
int suma(int a , int b)
{
    int total;
    total=a+b;
    return total;
}*/
