/*
 ============================================================================
 Name        : Ejercicio1-1.c
 Author      : 
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

	int numeroUno;
	int numeroDos;
	int resultado;

	printf("Ingresar el primero numero: ");
	scanf("%d", &numeroUno);
	printf("\nIngresar el primero numero: ");
	scanf("%d", &numeroDos);

	resultado = numeroUno + numeroDos;

	printf("\nEl resultado de la suma es: %d\n", resultado);

	return 0;
}
