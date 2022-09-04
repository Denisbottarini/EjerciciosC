/*
 ============================================================================
 Name        : Ejemplogaston.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setbuf(stdout, NULL);

	char operador;
	int numeroUno;
	int numeroDos;
	int resultado;

	printf("Ingrese el numero: ");
	scanf("%d", &numeroUno);
	fflush(stdin); //SOLO WINDOWS
	printf("Ingrese el operador (+/-): ");
	scanf("%c", &operador);
	printf("\nIngrese el numero: ");
	scanf("%d", &numeroDos);

	switch(operador){
		case '+':
			resultado = numeroUno + numeroDos;
			break;
		case '-':
			resultado = numeroUno - numeroDos;
			break;
	}

	printf("El resultado es: %d", resultado);

	return 0;
}
