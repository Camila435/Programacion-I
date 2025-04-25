#quiero sumar dos numeros que ingrese el usuario
#include <stdint.h>
int main(){
print('Esta es una calculadora de dos números, puede comenzar a ingresar sus números\n')
numero1 = int(input('Ingrese un número: '));
numero2 = int(input('Ingrese otro número: '));
#numero3 = float(input('Ingrese un número: ')); #para resultado decimal
#numero4 = float(input('Ingrese otro número: '));

resultado = numero1 + numero2;
#resultado2= numero3 + numero4;



print(type(numero1)) ;#para saber que tipo de variables es
print(type(numero2));
print(type(resultado));
print(resultado);
#print(resultado2);
print(f'El resultado de la suma es: {resultado}');
 return0;
}