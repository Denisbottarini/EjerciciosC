/*
 ============================================================================
 Name        : Ejercicio1-3.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 ingresar 3 números y mostrar el número del medio, sólo si existe. En caso de que no exista también informarlo.
 Ejemplo:
 1   5   3     el 3 es del medio
 5   1   5    no hay numero del medio
 3   5   1     el 3 es del medio
 3   1   5    el 3 es del medio
 5   3   1    el 3 es del medio
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setbuf(stdout, NULL);

	int numeroUno;
	int numeroDos;
	int numeroTres;

	printf("\nIngresar numero uno: ");
	scanf("%d", &numeroUno);
	printf("\nIngresar numero dos: ");
	scanf("%d", &numeroDos);
	printf("\nIngresar numero tres: ");
	scanf("%d", &numeroTres);

	if((numeroUno > numeroDos && numeroUno < numeroTres) || (numeroUno < numeroDos && numeroUno > numeroTres)){
		printf("\nEl numero del medio es el primero: %d\n", numeroUno);
	}else if((numeroDos > numeroUno && numeroDos < numeroTres) || (numeroDos < numeroUno && numeroDos > numeroTres)){
		printf("\nEl numero del medio es el segundo: %d\n", numeroDos);
	}else if((numeroTres > numeroUno && numeroTres < numeroDos) || (numeroTres < numeroUno && numeroTres > numeroDos)){
		printf("\nEl numero del medio es el tercero: %d\n", numeroTres);
	}else{
		printf("\nNo existe numero del medio");
	}

	return 0;
}
