/*
Ejercicio 1:
Crear una función que le solicite al usuario el ingreso de un numero y lo retorne.
Ejercicio 2:
Crear una función que reciba como parámetro dos números enteros, que realice el promedio de los números y que retorne dicho valor.
Ejercicio 3:
Crear una función que reciba como parámetro un número entero. La función retorna 1 en caso de que sea positivo,
(-1 en caso de que sea negativo y 0 en caso de que sea 0. Realizar la prueba lógica de la función en el main).
Ejercicio 4:
Realizar un programa que permita el ingreso de 10 números enteros.
Determinar:
El promedio de los positivos
La cantidad de ceros
Del menor de los negativos la suma de los antecesores de ese valor (frenar en cero).
Nota:
Utilizar las funciones del punto anterior y desarrollar funciones para resolver los procesos que están resaltados.
*/

#include <stdio.h>
#include <stdlib.h>
#include "biblioteca.h"

//PROTOTIPO
// RETORNOS = INT (ENTERO) - FLOAT(NUMEOR CON COMA) - DOUBLE(NUMEOR CON COMA, MAS GRANDES) - CHAR(UN CARACTER) - VOID(NO ES NADA) - VOID* (ES TOD0, COMODIN) (LOS QUE MAS VAMOS A USAR)

int main(void) {

	setbuf(stdout,NULL);

	int numero;

	numero = pedirNumero_int();
	printf("El numero es: %d", numero);
	return 0;
}

// siempre que usemos el fflush(stdin) es antes de un "scanf" al que limpiar el buffer antes de tomar el dato
