/*dado un arreglo de numeros enteroscuyos elementos estan comprendidos entre 1 y 10 se pide:
a- cargar el arreglo numerico usando la sentencia while, en el caso que se ingrese un numero que no este comprendidose pedira un nuevo numero pero sin avanzar el indice del arreglo. 
en el caso de que esta situacion se repita hasta 3 veces en la 4ta vez se debera ingresar directamente el valor 1. mostra por pantalla el arreglo cargado, un numero debajo del otro e indicar cuantas veces se ingreso de manera incorrecta un valor.
b- crear una cadena de caracteres de 10 elementos, suponiendo que el numero 1 representa a la letra a. el numero 2 a la letra e, el 3 a la letra i, el numero 4 a la letra o y el numero 5 la letra u, generar la cadena de caracteres a partir del arreglo numerico.
mostrar por pantalla la cadena, la cantidad de vocales y en forma indivual,  esto solo si se cargo algun elemento si no la cadena este vacia.
*/
#include <stdio.h>

int main() {
    int arreglo[10];
    int i = 0;
    int intentos = 0;
    int errores = 0;

    // Carga del arreglo
    while (i < 10) {
        printf("Ingrese un número entre 1 y 10: ");
        scanf("%d", &arreglo[i]);

        if (arreglo[i] < 1 || arreglo[i] > 10) {
            errores++;
            intentos++;
            if (intentos == 4) {
                arreglo[i] = 1;
                intentos = 0;
                printf("Se ingresó incorrectamente 4 veces, se asigna el valor 1.\n");
            } else {
                printf("Valor incorrecto, intente nuevamente.\n");
                continue;
            }
        }
        i++;
        intentos = 0;
    }

    // Mostrar arreglo
    printf("Arreglo cargado:\n");
    for (i = 0; i < 10; i++) {
        printf("%d\n", arreglo[i]);
    }
    printf("Se ingresaron %d valores incorrectos.\n", errores);

    // Generar cadena
    char vocales[] = {'a', 'e', 'i', 'o', 'u'};
    char cadena[11]; // 10 caracteres + \0
    cadena[10] = '\0'; // Terminar la cadena

    int j = 0;
    for (i = 0; i < 10; i++) {
        if (arreglo[i] >= 1 && arreglo[i] <= 5) {
            cadena[j] = vocales[arreglo[i] - 1];
            j++;
        }
    }
    cadena[j] = '\0'; // Terminar la cadena en caso de que no esté llena

    // Mostrar cadena y cantidad de vocales
    if (j > 0) {
        printf("Cadena generada: %s\n", cadena);
        printf("Cantidad de vocales: %d\n", j);
        int conteo[5] = {0};
        for (i = 0; i < j; i++) {
            switch (cadena[i]) {
                case 'a':
                    conteo[0]++;
                    break;
                case 'e':
                    conteo[1]++;
                    break;
                case 'i':
                    conteo[2]++;
                    break;
                case 'o':
                    conteo[3]++;
                    break;
                case 'u':
                    conteo[4]++;
                    break;
            }
        }
        printf("Conteo de vocales:\n");
        printf("A: %d\n", conteo[0]);
        printf("E: %d\n", conteo[1]);
        printf("I: %d\n", conteo[2]);
        printf("O: %d\n", conteo[3]);
        printf("U: %d\n", conteo[4]);
    } else {
        printf("La cadena está vacía.\n");
    }

    return 0;
}