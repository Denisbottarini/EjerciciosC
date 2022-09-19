/*
 ============================================================================
 Name        : Ejercicio3-1.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
Crear una función que muestre por pantalla el número flotante  que recibe como parámetro
 */

#include <stdio.h>
#include <stdlib.h>

void numeroFlotante(float numeroF);

int main(void) {
	setbuf(stdout, NULL);

	float numero;

	printf("Ingresar un numero: ");
	scanf("%f", &numero);

	numeroFlotante(numero);
	return 0;
}
//Esta funcion muestra el numero flotante que recibe como parametro
void numeroFlotante (float numeroF){

	printf("el numero flotante es: %.3f", numeroF);
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

//ARGUMENTO = ES EL VALOR QUE RECIBE UNA FUNCION
//PARAMETRO = ES EL VALOR QUE VA A RECIBIR CUANDO SE DECALRA LA FUNCION


