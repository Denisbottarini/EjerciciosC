/*
 ============================================================================
 Name        : Ejercicio2-1.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 Ingresar 5 números enteros calcular y mostrar el promedio de los números. Probar la aplicación con distintos valores.
 Ejemplo 1:  3 - 5 - 7 - 9 - 1
 Ejemplo 2:  2 - 1 - 8 - 1 - 2

 */

#include <stdio.h>
#include <stdlib.h>
#define ITERACION 5

int main(void) {
	setbuf(stdout, NULL);

	int numeroEntero;
	int acumulador;
	int promedio;

	acumulador = 0;

	for (int i = 0; i < ITERACION; i++) {

		printf("\nIngresar numero entero: ");
		scanf("%d", &numeroEntero);

		acumulador+= numeroEntero;

	}

	promedio = acumulador / ITERACION;

	printf("\nEl promedio es: %d\n", promedio);

	return 0;
}
