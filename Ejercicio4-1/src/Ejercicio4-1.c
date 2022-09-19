/*
 ============================================================================
 Name        : Ejercicio4-1.c
 Author      : Denis Bottarini
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
Realizar un programa EN EL MAIN que permita calcular y
mostrar el factorial de un número. Utilizar la función PedirNumero de la ejercitación 3-4.
Por ejemplo:
5! = 5*4*3*2*1 = 120
*/

#include <stdio.h>
#include <stdlib.h>
#include "factorial.h"

int main(void) {
	setbuf(stdout, NULL);

	int numeroA;
	int factorial;

	factorial = 1; //Se iguala a 1 por que es para poder multiplciar

	numeroA = pedirNumeroEntero();

	for(int i = 1; i <= numeroA; i++){
		factorial *= i;
	}

	printf("\nEl factorial de un numero es: %d\n", factorial);

	return 0;
}

