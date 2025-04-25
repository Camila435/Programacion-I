#include <stdio.h>
#include <string.h>

int main(){
    int op=1;
    int alumnos, legajo, nota;
    int desap, app=0, prom; 
    char apellido[50], nombre[50], materia[20];
    char mat[] = {"Matematica"};
    char org[] = {"Org. empresarial"};
    char prog[] = {"Programación 1"};
    char arq[] = {"Arq. Sistemas"};

    printf("Menu de carga de materias.\n");
    while (op!=0){
        printf("1 - Matemática\n");
        printf("2 - Programación 1\n");
        printf("3 - Org. Empresarial\n");
        printf("4 - Arq. Sistemas\n");
        printf("0 - Salir\n");
        printf("Seleccionar materia: ");
        scanf("%d", &op);

        switch (op){
            case 1: strcpy(materia, mat); break;
            case 2: strcpy(materia, prog); break;
            case 3: strcpy(materia, org); break;
            case 4: strcpy(materia, arq); break;
            case 0: printf("Programa finalizado."); break;
        }

        if (op != 0){
            printf("Indicar cantidad de alumnos: ");
            scanf("%d", &alumnos);    
            for (int i=1; i<=alumnos; i++){
                printf("\nAlumno %d \n", i);
                printf("Ingresar n° de legajo: ");
                scanf("%d", &legajo);
                printf("Ingresar apellido: ");
                scanf("%s", &apellido);
                printf("Ingresar nombre: ");
                scanf("%s", &nombre);
                printf("Ingresar nota: ");
                scanf("%d", &nota);
                if (nota > 0 && nota < 60){
                    desap++;
                }else if(nota >= 60 && nota < 80){
                    app++;
                }else if(nota >= 80 && nota <=100){
                    prom++;
                }else{
                    ;
                }
                
                printf("| %s  |\n", materia);
                printf("Legajo | Apellido | Nombre | Nota \n");
                printf("%d \t %s\t     %s\t     %d", legajo, apellido, nombre, nota);
            }
            printf("\nCantidad de alumnos: \n");
            printf("Aprobados: %d \n", app);
            printf("Promocionados: %d \n", prom);
            printf("Desaprobados: %d \n", desap);
        }
    }

    return 0;
}