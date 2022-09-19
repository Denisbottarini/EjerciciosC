/*
============================================================================
 Name        : Ejercicio1-2.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
============================================================================
ingresar 3 números y mostrar cuál de los tres es el mayor.
Ejemplo:
Si ingresamos 5, 9 y 3 el programa mostrará: “El mayor de los números es el segundo”
*/

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setbuf(stdout, NULL);

	int numeroUno;
	int numeroDos;
	int numeroTres;

	printf("\nIngresar numero uno: ");
	scanf("%d", &numeroUno);
	printf("\nIngresar numero dos: ");
	scanf("%d", &numeroDos);
	printf("\nIngresar numero tres: ");
	scanf("%d", &numeroTres);

	if (numeroUno > numeroDos && numeroUno > numeroTres) {
		printf("\nEl Numero mas grande es el primero: %d\n", numeroUno);
	} else if (numeroDos > numeroTres) {
		printf("\nEl Numero mas grande es el segundo: %d\n", numeroDos);
	} else {
		printf("\nEl Numero mas grande es el tercero: %d\n", numeroTres);
	}

	return 0;
}
