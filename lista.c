























































/*Una lista es una estructura de datos dinámica que permite almacenar una colección de elementos de forma lineal. A diferencia de un array, una lista puede crecer y reducir su tamaño en tiempo de ejecución.
En C, como no hay listas integradas como en otros lenguajes, se implementan usando estructuras (struct) y punteros (pointer).

Lista simple enlazada:
Cada elemento de la lista (llamado nodo) tiene dos partes:
Dato
Puntero al siguiente nodo

Explicación del código
struct Nodo define cómo luce un nodo (dato y puntero al siguiente).
insertarAlInicio agrega un nuevo nodo al principio de la lista.
mostrarLista recorre e imprime todos los nodos hasta que llega a NULL.

definicion del nodo
struct Nodo {
    int dato; // Dato del nodo
    struct Nodo* siguiente; // Puntero al siguiente nodo
};

operaciones comunes de listas
Insertar al inicio
Insertar al final
Eliminar un nodo
Buscar un valor
Mostrar todos los valores

 modularizacion:
 La modularización es dividir un programa grande en partes más pequeñas y organizadas, llamadas módulos. Cada módulo se escribe en archivos diferentes, y normalmente se separan en:
.h → archivos header (declaraciones).
.c → archivos de implementación (código de funciones).
main.c → archivo principal que usa los módulos.
¿Por qué usar modularización?
Hace el código más ordenado y fácil de entender.
Permite reutilizar funciones en otros proyectos.
Facilita el trabajo en equipo.
Es más fácil de probar y mantener.
PARA COPILAR:
gcc main.c operaciones.c -o programa
./programa
¿Por qué se usan archivos .h y .c con el mismo nombre?
En C, el archivo .h (header) y el archivo .c (implementación) suelen tener el mismo nombre porque trabajan juntos como un módulo. Pero no es obligatorio que tengan el mismo nombre; simplemente es una buena práctica para mantener tu código organizado y fácil de entender.
¿El orden afecta?
En la mayoría de los casos, NO afecta el orden:
Porque gcc primero compila todos los .c por separado, y luego los enlaza juntos en el ejecutable.
Es decir:
 gcc main.c input.c operaciones.c -o programa
 es igual que:
 gcc operaciones.c input.c main.c -o programa
Siempre que todas las dependencias estén satisfechas, el programa va a compilar igual.

COLA:
Una cola (queue) es una estructura de datos donde:
El primero que entra es el primero que sale.


En inglés se llama FIFO: First In, First Out.
Imaginá que estás en una fila para comprar entradas:
Inicio -> [Persona 1] → [Persona 2] → [Persona 3] ← Fin
Llega una nueva persona → va al final de la cola.
Atienden a una persona → se va el que está al inicio de la cola.
Operaciones básicas en una cola
Encolar (enqueue): agregar un elemento al final.


Desencolar (dequeue): sacar el primer elemento (el que está al frente).


Ver frente (peek o front): ver quién está primero (sin sacarlo).
Cosas importantes para recordar
La cola es como una fila: el primero en llegar es el primero en salir.
Se usan punteros y estructuras para hacerla crecer y reducirse dinámicamente.
Las funciones encolar() y desencolar() manejan los datos como si fueran personas en una fila.
Las colas se usan en:
Sistemas de impresión
Turnos en bancos
Comunicación entre programas
Juegos (para manejar acciones o eventos)
carcaterísticas entre una pila y una cola:asm
orden de atencion pila: ultimo en entrar, primero en salor (LIFO)
ORDEN DE ATENCION COLA: primero en entrar, primero en salir (FIFO)
funcion de insertar pila: push()
funcion de insertar cola: encolar()
funcion de eliminar pila: pop()
funcion de eliminar cola: desencolar()
funcion de ver el ultimo elemento pila: peek()  
funcion de ver el primer elemento cola: peek() o front()
estructura de datos: pila es una lista enlazada, cola es una lista enlazada
Cosas importantes para recordar
La cola es como una fila: el primero en llegar es el primero en salir.
Se usan punteros y estructuras para hacerla crecer y reducirse dinámicamente.
Las funciones encolar() y desencolar() manejan los datos como si fueran personas en una fila.
Las colas se usan en:
Sistemas de impresión
Turnos en bancos
Comunicación entre programas
Juegos (para manejar acciones o eventos)
Tipos de operaciones con archivos
En C, se pueden hacer principalmente 4 operaciones con archivos:
Abrir un archivo
Leer un archivo
Escribir en un archivo
Cerrar el archivo
Todo esto se hace con la ayuda de la biblioteca estándar stdio.h y el tipo FILE.
Abrir un archivo
Para trabajar con un archivo, primero se declara un puntero de tipo FILE y se usa la función fopen().
modos de apertura de archivos:
r: Abrir para lectura (el archivo debe existir).
w: Abrir para escritura (crea el archivo si no existe, o lo trunca  si existe).
a:asm Abrir para agregar al final (crea el archivo si no existe).
r+: Abrir para lectura y escritura (el archivo debe existir).
w+: Abrir para lectura y escritura (crea el archivo si no existe, o lo trunca si existe).
a+: Abrir para lectura y escritura (crea el archivo si no existe, y permite
fprintf(FILE *fp, const char *format, ...); Escribir texto formateado en un archivo.
fscanf(FILE *fp, const char *format, ...); Leer texto formateado desde
un archivo.
fgets(char *str, int n, FILE *fp); Leer una línea de texto desde
un archivo.
fputs(const char *str, FILE *fp); Escribir una línea de texto en un
archivo.
fget(FILE *fp); Leer una línea de texto desde un archivo.
fputc(FILE *fp); Escribir una línea de texto en un archivo.
feof(archivo): devuelve 1 si se llegó al final del archivo, 0 en caso contrario.
fclose(archivo): Cierra el archivo.
PILA:
Una pila es una estructura de datos dinámica que funciona como una pila de platos:
El último que entra es el primero que sale.


En inglés se llama LIFO: Last In, First Out.


Imagina que tenés una pila de libros:
Si ponés otro libro (Libro D), va arriba.
Si sacás uno, solo podés sacar el de arriba (Libro D).

La recursividad es una técnica de programación en la que una función
se llama a sí misma para resolver un problema más pequeño del
mismo tipo.
Es como cuando te mirás en un espejo frente a otro espejo y ves una
imagen dentro de otra imagen... dentro de otra imagen...
Una función recursiva tiene dos partes importantes:
1. Caso base (condición de parada): evita que la función se llame
infinitamente.
2. Llamada recursiva: la función se llama a sí misma con un nuevo
valor más cerca del caso base.
¿Qué pasa si NO hay caso base?
La función se llamaría a sí misma para
siempre → se produce un
desbordamiento de pila (stack
overflow) y el programa se cae… o
EXPLOTA!!!!
¿Cuándo usar recursividad?
Usá recursividad cuando:
● El problema se puede dividir en subproblemas más
pequeños.
● No se necesita guardar muchos resultados intermedios (aunque
esto puede optimizarse con técnicas como "memoización").
● Te conviene escribir menos código y más elegante (por ejemplo,
para árboles, fractales, estructuras jerárquicas)
⚠ Cuidados con la recursividad
1. Siempre debe tener un caso base que detenga las
llamadas.
2. Puede ser más lenta que las soluciones iterativas si no
se optimiza.
3. Consume más memoria por las llamadas anidadas en
la pila
concepto de recursividad:
Una función se llama a sí misma para resolver un
problema.
codigo mas legible: Sí, en problemas como factorial, torres de Hanoi, árboles. 
Uso de memoria Alto: cada llamada ocupa espacio en la pila (stack). 
Velocidad (performance) Más lento si hay muchas llamadas (por sobrecarga de
stack).
Riesgo de desbordamiento Sí, puede causar Stack Overflow si no tiene un caso base
correcto.
Adecuado para Problemas recursivos por naturaleza: árboles,
combinaciones, fractales.
Fácil de entender al inicio No, puede ser confuso para principiantes. 
Conversión a iterativo A veces difícil (ej: algoritmos con múltiples caminos como
backtracking).

estrcutura repetitiva:
concepto: Se repite un bloque de código usando for, while o
do-while.
codigo mas legible: No tanto para problemas muy recursivos.
uso de memoria: Bajo: usa una sola variable de control.
velocidad (performance): Más rápido en la mayoría de los casos.
riesgo de desbordamiento: No, no hay riesgo de Stack Overflow.
adecuado para: Problemas iterativos, bucles simples.
fácil de entender al inicio: Sí, más intuitivo para principiantes.
// Conversión a recursivo: A veces fácil, pero puede ser menos legible.
*/