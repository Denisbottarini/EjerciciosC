/*
 ============================================================================
 Name        : Ejercicio3-2.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 Crear una función que permita determinar si un número es par o no.
 La función retorna 1 en caso afirmativo y 0 en caso contrario. Probar en el main.
 */

#include <stdio.h>
#include <stdlib.h>

int numeroParOImpar(int numeroB);

int main(void) {
	setbuf(stdout, NULL);

	int numero;
	int parImpar;

	printf("Ingresar un numero, el sistema informara si es PAR(1) O IMPAR(0): ");
	scanf("%d", &numero);

	parImpar = numeroParOImpar(numero);

	if (parImpar != 0) {
		printf("\nEl numero ingresado es PAR %d\n", parImpar);
	} else {
		printf("\nEl numero ingresado es IMPAR %d\n", parImpar);
	}

	return 0;
}
// esta funcion la ultilizo para que me indique si un numero es par o impar, retornando 1 para PAR y 0 para IMPAR
int numeroParOImpar(int numeroB) {

	int retorno;

	retorno = 1;

	if (numeroB % 2 == 1) {
		retorno = 0;
	}

	return retorno;
}

/*
 TIPOS DE FUNCIONES

 RECIBE PARAMETRO - RETORNA PARAMETRO
 INT (INT)  CUANDO UNA FUNCION RECIBE PARAMETRO ESTA ESPERANDO QUE SE LE INGRESE DATO

 RECIBE PARAMETRO - NO RETORNA PARAMETRO
 VOID (INT) EN ESTA FUNCION EL RETORNO DIRECTAMENTE NO EXISTE!!!

 RETORNA PARAMETRO - NO RECIBE PARAMETRO
 INT (VOID) AL NO RECIBIR PARAMETRO NO ES NECESARIO PEDIR NINGUN DATO

 NO RECIBE PARAMETRO - NO RETORNA PARAMETRO
 VOID (VOID)
*/

