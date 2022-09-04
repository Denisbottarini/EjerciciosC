/*
 ============================================================================
 Name        : Ejercicio.c
 Author      : DenisBottarini
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

/*
Ejercicio 1-1: Ingresar dos números enteros, sumarlos y mostrar el resultado.
Ejemplo:
Si ingresamos 3 y 2 el programa mostrará: “La suma entre 3 y 2 da como resultado 5”
 */
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	setbuf(stdout, NULL);

	int numeroUno;
	int numeroDos;
	int resultadoDeLaSuma;

	printf("Numero uno: ");
	scanf("%d", &numeroUno);
	printf("Numero dos: ");
	scanf("%d", &numeroDos);

	resultadoDeLaSuma = numeroUno + numeroDos;

	printf("El resultado de la suma es: %d", resultadoDeLaSuma);

	return 0;
}
