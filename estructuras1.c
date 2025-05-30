/*Crea un programa en C que defina una estructura llamada Estudiante con los campos: nombre, edad y promedio.
 El programa debe permitir ingresar los datos de un estudiante, y luego mostrarlos por pantalla.*/
 #include <stdio.h>
 struct estudiante
 {
    char nombre[10];
    int edad;
    float promedio;
 };
 


 int main(){
    struct estudiante e;
    {
        printf("Ingrese el nombre: %c", e.nombre);
        scanf("%c", &e.nombre);
    };
    


    return 0;
 }