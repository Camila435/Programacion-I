/*Característica	if (solo)                                        	if-else
Ejecución:	Solo si la condición es verdadera	                   Ejecuta un bloque u otro, nunca ambos.
Uso típico:	Validar una condición sin alternativa	            Tomar decisiones binarias (sí/no).
¿Puede omitirse?:	Sí (si la condición es falsa, no hace nada).    No, siempre se ejecuta alguna de las dos ramas.
Ejemplo común:	Verificar si un número es positivo.	                   Clasificar en "mayor de edad" o "menor de edad".*/


/*
Característica	          while	                     for
Inicialización:  Fuera del bucle	                 Dentro de la sintaxis (for(int i=0; ...))
Condición	:     Siempre al inicio	                Siempre al inicio
Actualización:	 Dentro del cuerpo           	    En la sintaxis (i++)
Uso típico:	 Condiciones complejas/desconocidas.	Iteraciones contadas*/

/*Situación	                  while	                                               do-while
Primera iteración:	Verifica condición antes de ejecutar	Ejecuta primero, luego verifica
Uso típico:	Validar entrada, loops con condición inicial	Menús, acciones que deben correr al menos una vez
Ejemplo	 :          while (num != 0) { ... }	               do { ... } while (num != 0);*/


/*Característica	if-else                             	switch
Tipo de condición:	Rangos, operadores lógicos (>, &&).	    Solo igualdad (==).
Legibilidad:	Mejor para pocas condiciones.	               Ideal para muchas opciones.
Rendimiento:	Más lento con muchas condiciones.	           Optimizado para múltiples casos.
Uso de break:	No aplica.	                              Obligatorio para evitar "caer" al siguiente caso.
Valor por defecto:	Usa else.	                          Usa default.*/



