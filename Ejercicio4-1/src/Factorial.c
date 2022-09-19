/*
 * Factorial.c
 *
 *  Created on: 12 sept 2022
 *      Author: denis
 */

#include <stdio.h>
#include <stdlib.h>

//Esta funcion lo que realiza es pedir un rango de numeros validado entre 0 y 1000, y lo retorna para mostrarlo en la funcion MAIN
int pedirNumeroEntero(){

	int numeroB;

	do{
		printf("Ingresar un numero: ");
		scanf("%d", &numeroB);
	}while(!(numeroB > 0 && numeroB < 1000));


	return numeroB;
}
