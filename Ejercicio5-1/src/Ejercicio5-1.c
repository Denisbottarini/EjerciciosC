/*
 ============================================================================
 Name        : Ejercicio5-1.c
 Author      : Denis Bottarini
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 Pedir el ingreso de 5 números. Mostrarlos y calcular la sumatoria de los mismos.
 */

#include <stdio.h>
#include <stdlib.h>
#include "validacion.h"
#define NUM 5

int main(void) {
	setbuf(stdout, NULL);

	int numero;
	int numeros[NUM];
	int i;
	int suma = 0;

	//Recorro para cargar en forma secuencial
	for(i=0;i<NUM;i++)
	{

		printf("Ingrese los numeros: ");
		scanf("%d", &numero);
		//En num escribo numeros en la posicion "i"
		numeros[i] = numero;

	}

	//Recorro para imprimir
	for(i=0;i<NUM;i++)
	{
		printf("%d ", numeros[i]);
	}

	return 0;
}
