/*
 ============================================================================
 Name        : Ejercicio1-1.c
 Author      : Denis Bottarini
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
Ingresar dos números enteros, sumarlos y mostrar el resultado.
Ejemplo:
Si ingresamos 3 y 2 el programa mostrará: “La suma entre 3 y 2 da como resultado 5”
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setbuf(stdout, NULL);

	int numA;
	int numB;
	int resultado;

	printf("\nIngrese el primer numero que desea sumar: \n");
	scanf("%d", &numA);
	printf("\nIngrese el segundo numero que desea sumar: \n");
	scanf("%d", &numB);

	resultado = numA + numB;

	printf("\nLa suma entre %d y %d da como resultado %d\n", numA, numB, resultado);

	return 0;
}
