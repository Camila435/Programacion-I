#include <stdlib.h>
#include <time.h>
#include <stdio.h>

int main() {
int carta, victoria = 1,perdio=0;
char jugarNuevamente, letra, respuesta;

srand(time(NULL));
printf("¡Bienvenido al juego de poker alta-baja!\n");
printf("Adivina si la carta será alta (mayor a 7) o baja (menor a 7).\n");
printf("Si la carta es un 7, perderás automáticamente.\n");

do {
// Generamos una carta aleatoria entre 1 y 13 (simulando las cartas de un mazo)
carta = rand() % 13 + 1;
switch (carta){
    case 11: letra = 'J';
     break;
    case 12: letra = 'Q';
     break;
    case 13: letra = 'K';
     break;
}

// Pedimos la respuesta del jugador
printf("Escribe A para alta o B para baja: ");
scanf(" %c", &respuesta);

// Mostramos la carta generada
printf("La carta generada es: %d\n", carta);

// Verificamos el resultado
if (carta == 7) {
printf("¡Perdiste! La carta fue un 7.\n");
perdio=1;
} else if ((carta < 7 && respuesta == 'B') || (carta > 7 && respuesta == 'A')) {
printf("¡Ganaste! Acertaste en tu predicción.\n");
victoria*=2;
} else {
printf("¡Perdiste! No acertaste en tu predicción.\n");
perdio=1;
}
} while (perdio==0);


// Al final, mostramos la cantidad de victorias del jugador
printf(" Ganaste %d PUNTOS.", victoria);
return 0;
}