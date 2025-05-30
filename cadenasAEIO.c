#include <stdio.h>

int main() {
	int arreglo[10];
	int errores = 0;
	int contador = 0;
	int num = 0;
	int intentos = 0;
	int contadorCadena = 0;
	char cadena[10];
	int vocA=0,vocE=0,vocI=0,vocO=0,vocU=0;
	
	while(contador < 10){
		printf("Ingrese un numero comprendido entre 1 y 10\n");
		scanf("%d",&num);
		
		if(num > 0 && num < 10){
			arreglo[contador]=num;
			contador++;
			errores=0;
		}else{
			errores++;
			intentos++;
			printf("Numero incorrecto, vuelva a ingresar un numero. Errores %d\n",errores);
		}
		
		if(errores >= 3){
			arreglo[contador]=1;
			contador++;
			errores=0;
		}
		
		
	}
	
	printf("\nNumero del arreglo\n");
	for(int i=0;i<10;i++){
		printf("%d\n",arreglo[i]);
		if(arreglo[i] > 0 && arreglo[i] < 6){
		switch(arreglo[i]){
		case 1: {cadena[contadorCadena]='A';
		vocA++;
		break;
		}
		case 2: {cadena[contadorCadena]='E';
		vocE++;
		break;
		}
		case 3: {cadena[contadorCadena]='I';
		vocI++;
		break;
		}
		case 4: {cadena[contadorCadena]='O';
		vocO++;
		break;
	}
		case 5: {cadena[contadorCadena]='U';
		vocU++;
		break;
}
		}
		contadorCadena++;
		}
	}
	
	for(int j = 0;j<contadorCadena;j++){
		printf("\n%c",cadena[j]);
	}
	
	printf("\nCantidad de Vocales:\n");
	printf("A: %d\n",vocA);
	printf("E: %d\n",vocE);
	printf("I: %d\n",vocI);
	printf("O: %d\n",vocO);
	printf("U: %d\n",vocU);
	printf("Cantidad de vocales %d",vocA+vocE+vocI+vocO+vocU);
	
	return 0;
}
