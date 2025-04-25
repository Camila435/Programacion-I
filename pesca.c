/*Suponga que el gobierno impone a los prestadores un limite los kg de pesca que puede recoger en un dia. 
desarrolle un programa que se le vayan dando los pesos de lo que va pescando y muestre el total de kg pescado en ese momento. 
cuando supere el maximo se debe dar la alarma y terminar el programa tambien debe terminar el programa si se intruduce un 0.
usar while*/

#include <stdio.h>

int main(){
    int limite=10, kg=0, totalkg;

    printf("Ingrese la cantidad de kg de pescado que pesco:");
    scanf("%d", &kg);
    while(kg!=0){
        printf("No puede ingresar el peso 0.");
    } if(kg>10){
        printf("Excediste la cantidad que se podia pescar en el dia.");
    } else{
        printf("la cantidad de pescado es: %d", kg);
    }



    return 0;
}