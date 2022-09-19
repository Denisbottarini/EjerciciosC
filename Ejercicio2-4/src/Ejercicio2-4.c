/*
 ============================================================================
 Name        : Ejercicio2-4.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 Ingresar 5 caracteres e informar cuantas letras p (minúsculas) se ingresaron.
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setbuf(stdout, NULL);

	char caracter;
	int contadorP;
	//int i;

	contadorP = 0;
	//i = 0;


	for (int i = 0; i < 5; i++) {

		printf("Ingresar 5 letras minusculas la que usted desee: ");
		fflush(stdin);
		scanf("%c", &caracter);

		if (caracter == 'p' && caracter >= 'a' && caracter <= 'z') {
			contadorP++;
		}

	}
	/*  ESTO ES OTRA FORMA DE REALIZARLO, DEBO HABILITAR EL int i(ITERACIONES) EN LAS VARIBALES PARA QUE FUNCIONE!
|--------------------------------------------------------------------------------------------------------------------|
	do{
	i++;

	printf("Ingrese 5 caracteres: ");
	scanf("%c", &caracter);
	fflush(stdin);

	if(caracter=='p' && caracter >= 'a' && caracter <= 'z')
	{
		contadorP++;
	}
	}while(i < 5);
|--------------------------------------------------------------------------------------------------------------------|
	*/

	printf("\nLa cantidad de letras p (minuscula) que se ingresaron es: %d\n", contadorP);


	return 0;
}
