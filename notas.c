//Calcule la nota final de un estudiante a partir de tres notas que se ingresan
//por teclado considerando:
//Las notas parciales tienen una ponderación 0,25, 0,30 y 0,45 respectivamente.
//Cada nota parcial se multiplica por la ponderación correspondiente.
//La nota final es la sumatoria de los valores obtenidos en el item anterior.
//Se debe mostrar las notas parciales, las ponderaciones y la nota final.
//Si la nota final es mayor o igual a 6, el ultimo mensaje sera "Materia aprobada"
//en caso contrario sera "Materia desaprobada".
//Las notas parciales pueden estar comprendidas entre 0 y 10, en caso de ingresar
//por lo menos una nota incorrecta, finalizar el programa y mostrar un mensaje
//de error.
//El usuario debe tener la alternativa de realizar este calculo las que considere
//necesario (usar sentencia do-while)

#include <stdio.h>

int main(){
    float nota1, nota2, nota3, final;
    char op[2];

    printf("Programa que calcula la nota.\n");
    do{
        printf("Notas ingresadas:\n ");
        scanf("%f", &nota1);
        if (nota1 < 0 || nota1 > 10){
            printf("Nota incorrecta. El valor debe ser de 0 a 10.");
            break;
        }
        printf("\t \n");
        scanf("%f", &nota2);
        if (nota2 < 0 || nota2 > 10){
            printf("Nota incorrecta. El valor debe ser de 0 a 10.");
            break;
        }
        printf("\t\t \n");
        scanf("%f", &nota3);
        if (nota3 < 0 || nota3 > 10){
            printf("Nota incorrecta. El valor debe ser de 0 a 10.");
            break;
        }

        printf("Notas ingresadas: \n");
        printf("%.0f\n \t%.0f\n \t\t%.0f\n", nota1, nota2, nota3);
        printf("Cálculo de la nota\n");
        printf("1° Nota - %.0fx0.25 = %.2f\n", nota1, nota1*0.25);
        printf("2° Nota - %.0fx0.30 = %.2f\n", nota2, nota2*0.30);
        printf("3° Nota - %.0fx0.45 = %.2f\n", nota3, nota3*0.45);
        final = nota1*0.25 + nota2*0.30 + nota3*0.45;
        printf("Nota final - %.0f \n", final);

        printf("Desea calcular otra nota? s/n: ");
        scanf(" %c", &op);
        
    }while(op == "s" || op == "S");

    printf("Programa finalizado. ");


}