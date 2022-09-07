/*
 ============================================================================
Crear una función que pida el ingreso de un entero y lo retorne.

Especializar la función anterior para que permita validar el entero ingresado en un rango determinado.
 ============================================================================
*/

#include <stdio.h>
#include <stdlib.h>
#include "validacion.h"

//int funcionNumeroEntero(); LA COMENTO POR QUE YA LA INCLUYO EN LA BIBLIOTECA QUE CREE "VALIDACION.H"

int main(void) {

	setbuf(stdout, NULL);

	int numeroEntero;

	numeroEntero = funcionNumeroEntero();
	printf("El numero ingresado es: %d", numeroEntero);

	return 0;
}
/*
int funcionNumeroEntero(){

	int numero;

	do{
	 printf("Ingresar un numero entero: ");
	 scanf("%d", &numero);
	}while(!(numero >= 1 && numero <= 20));

	return numero;
}
*/ //LO COMENTO POR QUE YA REALICE UNA BIBLIOTECA PARA ESTE EJERCICIO
