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
RECURSIVIDAD
La recursividad es una técnica de programación en la que una función se llama a sí misma para resolver un problema más pequeño del mismo tipo.
Es como cuando te mirás en un espejo frente a otro espejo y ves una imagen dentro de otra imagen... dentro de otra imagen...
Una función recursiva tiene dos partes importantes:
Caso base (condición de parada): evita que la función se llame infinitamente.
Llamada recursiva: la función se llama a sí misma con un nuevo valor más cerca del caso base
¿Qué pasa si NO hay caso base?
La función se llamaría a sí misma para siempre → se produce un desbordamiento de pila (stack overflow) y el programa se cae… o EXPLOTA!!!! 
¿Cuándo usar recursividad?
Usá recursividad cuando:
El problema se puede dividir en subproblemas más pequeños.


No se necesita guardar muchos resultados intermedios (aunque esto puede optimizarse con técnicas como "memoización").


Te conviene escribir menos código y más elegante (por ejemplo, para árboles, fractales, estructuras jerárquicas).
Cuidados con la recursividad
Siempre debe tener un caso base que detenga las llamadas.


Puede ser más lenta que las soluciones iterativas si no se optimiza.


Consume más memoria por las llamadas anidadas en la pila.
 🧠 Concepto
Una función se llama a sí misma para resolver un problema.
Se repite un bloque de código usando for, while o do-while.
📚 Código más legible
Sí, en problemas como factorial, torres de Hanoi, árboles.
No tanto para problemas muy recursivos.
🔁 Uso de memoria
Alto: cada llamada ocupa espacio en la pila (stack).
Bajo: usa una sola variable de control.
🚀 Velocidad (performance)
Más lento si hay muchas llamadas (por sobrecarga de stack).
Más rápido en la mayoría de los casos.
🧪 Riesgo de desbordamiento
Sí, puede causar Stack Overflow si no tiene un caso base correcto.
No hay riesgo de desbordamiento por sí solo.
🧩 Adecuado para
Problemas recursivos por naturaleza: árboles, combinaciones, fractales.
Cálculos repetitivos como sumas, multiplicaciones, bucles comunes.
👶 Fácil de entender al inicio
No, puede ser confuso para principiantes.
Sí, es más directo.
🔄 Conversión a iterativo
A veces difícil (ej: algoritmos con múltiples caminos como backtracking).
Fácil de codificar y entender.
LISTA
Una lista es una estructura de datos dinámica que permite almacenar una colección de elementos de forma lineal. A diferencia de un array, una lista puede crecer y reducir su tamaño en tiempo de ejecución.
En C, como no hay listas integradas como en otros lenguajes, se implementan usando estructuras (struct) y punteros (pointer).
Lista simplemente enlazada
Lista doblemente enlazada
Lista circular (variante de las anteriores)
Explicación del código
struct Nodo define cómo luce un nodo (dato y puntero al siguiente).
insertarAlInicio agrega un nuevo nodo al principio de la lista.
mostrarLista recorre e imprime todos los nodos hasta que llega a NULL.

*/