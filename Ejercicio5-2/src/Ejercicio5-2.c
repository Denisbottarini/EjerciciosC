/*
 ============================================================================
 Name        : Ejercicio5-2.c
 Author      : Denis Bottarini
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
Pedir el ingreso de 10 números enteros entre -1000 y 1000. Determinar:
1)Cantidad de positivos y negativos.
2)Sumatoria de los pares.
3)El mayor de los impares.
4)Listado de los números ingresados.
5)Listado de los números pares.
6)Listado de los números de las posiciones impares.
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "validacion.h"
#define NUM 10

int main(void) {
	setbuf(stdout, NULL);

	int numero;
	int numeros[NUM];
	int i;

	//Recorro para cargar en forma secuencial
	for(i=0;i<NUM;i++)
	{


		utn_getNumero(&numero, "\nIngrese los numeros: ", "No se ingresaron numero enteros", -1000, 1000, 3){

		}

	}

	return 0;
}
