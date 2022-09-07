/*
 ============================================================================
 Name        : Ejercicio2-1.c
 Author      : DenisBottarini
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */
/*
Ejercicio 2-1: Ingresar 5 números enteros calcular y mostrar el promedio de los números.
Probar la aplicación con distintos valores.
Ejemplo 1:  3 - 5 - 7 - 9 - 1
Ejemplo 2:  2 - 1 - 8 - 1 - 2
*/
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	setbuf(stdout, NULL);

	int numero;
	float promedio;
	int acumulador = 0;
	int i;

	for(i = 0; i < 5; i++){

		printf("Ingresar numero: ");
		scanf("%d", &numero);

		acumulador+= numero;
	}

	promedio = (float) acumulador/5;

	printf("El promedio total de todos los numero es %.3f", promedio);

	return 0;
}
