/* 
Arreglos-Array:
Conjunto de variables del mismo tipo almacenadas en posiciones continuas de memoria. Guarda muchos datos similares bajo un mismo nombre.
sintaxis
tipo nombre[tamaño];  
Arreglos bidimensionales-MATRICES:
Son como una tabla con filas y columnas
Busqueda: For para mostrar cada elemento.
Inserción : los arreglos tienen tamaño fijo, se pueden reemplazar pero no agregar nuevos.
BUSQUEDA BINARIA: encontrar un elemento en un arreglo ordenado. Divide el arreglo por la mitad en cada paso, descarta la mitad donde no este el elemento.
	El arreglo debe estar ordenado (ascendente o descendente).
	Es más rápida que la búsqueda lineal, especialmente en arreglos grandes.
Como funciona:
•	Se comparan los extremos: izquierda (inicio) y derecha (fin).
•	Se calcula el índice del medio:
 medio = (inicio + fin) / 2
•	Se compara el valor en esa posición con el valor buscado:
o	Si son iguales → ¡Listo! Elemento encontrado.
o	Si el buscado es menor → Buscar en la mitad izquierda.
o	Si es mayor → Buscar en la mitad derecha.
•	Se repite el proceso hasta encontrarlo o que no queden elementos
BUSQUEDA LINEAL: revisa uno por uno. No hace falta que este ordenado
CADENA DE CARACTERES: strcpy(destino, origen) – Copiar cadenas
Las estructuras secuenciales son colecciones de datos que se almacenan de forma ordenada, una al lado de la otra. El mejor ejemplo de esto son los arreglos (arrays).
strlen(cadena) – Longitud de la cadena
Devuelve la cantidad de caracteres (sin contar el \0).
strcmp(cad1, cad2) – Comparar cadenas
Compara dos cadenas carácter por carácter.
Devuelve 0 si son iguales
Un número negativo si cad1 < cad2
un número positivo si cad1 > cad2
strcat(destino, origen) – Concatenar cadenas
Compara dos cadenas carácter por carácter.
•	Devuelve 0 si son iguales
•	Un número negativo si cad1 < cad2
•	Un número positivo si cad1 > cad2
strchr(cadena, carácter) – Buscar un carácter
busca la primera aparición de un carácter
strstr(cadena, subcadena) – Buscar una subcadena
Busca la primer aparición de un carácter en la cadena.
ESTRUCTURAS
Una estructura en C (llamada struct) es una forma de crear un tipo de dato propio, que agrupa varios datos diferentes en una sola unidad.
Es como una caja que guarda distintos tipos de cosas: enteros, decimales, cadenas, etc., con nombre propio cada una.
Sirve para no tener muchas variables separadas.
ORDENAMIENTO:
La ordenación consiste en organizar los elementos de un arreglo en un orden específico, ya sea:
•	Ascendente (menor a mayor)
•	Descendente (mayor a menor)
métodos comunes:
Burbuja (Bubble Sort): Compara elementos adyacentes y los intercambia si están en el orden incorrecto. Repite hasta que todo esté ordenado.
Selección (Selection Sort): Encuentra el mínimo en cada pasada y lo pone en su posición correcta.
Inserción (Insertion Sort): Inserta cada elemento en su lugar correcto como si estuvieras ordenando cartas en la mano.
FUNCIONES Y PROCEDIMIENTOS
Una función es un bloque de código que devuelve un valor.
PROCEDIMIENTO: Un procedimiento es una función que NO devuelve valor. En C, se usa el tipo void.
Pasaje de parámetros:
1. Pasaje por valor (el más común en C)
La función recibe una copia del valor original. Si la función modifica el valor, no afecta al original.
2. Pasaje por referencia (usando punteros)
La función recibe la dirección de la variable, por lo tanto, puede modificar el valor original.

*/