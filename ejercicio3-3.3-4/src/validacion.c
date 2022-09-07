/*
 * validacion.c
 *
 *  Created on: 6 sept 2022
 *      Author: denis
 */

#include <stdio.h>

int funcionNumeroEntero(){

	int numero;

	do{
	 printf("Ingresar un numero entero: ");
	 scanf("%d", &numero);
	}while(!(numero >= 1 && numero <= 20));

	return numero;
}

