/*
 ============================================================================
 Name        : Ejercicio3-3Ejercicio3-4.c
 Author      : Denis Bottarini
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 3.3)Crear una función que pida el ingreso de un entero y lo retorne.

 3.4)Especializar la función anterior para que permita validar el entero ingresado en un rango determinado.
 */

#include <stdio.h>
#include <stdlib.h>

int pedirNumeroEntero();

int main(void) {
	setbuf(stdout, NULL);

	int numeroA;

	numeroA = pedirNumeroEntero();
	printf("\nEl numero ingresado es: %d\n", numeroA);

	return 0;
}
//Esta funcion lo que realiza es pedir un rango de numeros validado entre 0 y 1000, y lo retorna para mostrarlo en la funcion MAIN
int pedirNumeroEntero(){

	int numeroB;

	do{
		printf("Ingresar un numero: ");
		scanf("%d", &numeroB);
	}while(!(numeroB > 0 && numeroB < 1000));


	return numeroB;
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
