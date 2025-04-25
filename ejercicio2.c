/*calcule la nota final de un estudiante  a partir de 3 notas que se ingresan por teclado, considerando: notas parciales tienen una ponde de 0,25,0,30 y 0,45 respectivamente
cada nota parcial se que multiplica por las ponderaciones, la nota final es la sumatoria de los valores obtenidos en el item anterior.
se debe mostrar las notas parciales, las ponderaciones y la nota final.
si la nota final es mayor o igual a 6: emitir un mensaje de materia aprobado en caso contrario el mensaje sera materia desaprobada.
las notas parciales pueden estar comprendidas entre 0 o 10 en caso de ingresar por lo menos una nota incorrecta, finalizar el programa y mostrar un mensaje de error.
el usuario debe tener la alternativa de realizar este calculo las veces que considere necesario (usar sentencia do- while)*/

#include <stdio.h>

int main(){ 
    double nota1,nota2, nota3,suma;

    printf("Ingrese la primer nota:\n");
    scanf("%lf", &nota1);
    printf("Ingrese la segunda nota:\n");
    scanf("%lf", &nota2);
    printf("Ingrese la tercer nota:\n");
    scanf("%lf", &nota3);
    nota1= nota1*0.25;
    nota2= nota2*0.30;
    nota3= nota3*0.45;
    suma= nota1+nota2+nota3;
    printf("1°NOTA=%f", nota1 );
    printf("2°NOTA=%f", nota2 );
    printf("2°NOTA=%f", nota3 );
    printf("Suma=%f", suma );


    return 0;
}