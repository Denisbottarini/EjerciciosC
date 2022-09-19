/*
 ============================================================================
 Name        : ejercicioDelSabado10-09.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 Pedir el ingreso de 10 números enteros entre -1000 y 1000. Determinar:
 Cantidad de positivos y negativos.
 Sumatoria de los pares.
 El mayor de los impares.
 Listado de los números ingresados.
 Listado de los números pares.
 Listado de los números de las posiciones impares.
 Se deberán utilizar funciones y vectores.
 */

#include <stdio.h>
#include <stdlib.h>
#define TAM 10

int cargarArray(int array[], int size, int minimo, int maximo); //size es la cantidad de elementos que tiene el array

int main(void){
	setbuf(stdout, NULL);

	int vectorNumeroEnteros[TAM];
	int contadorNegativos;
	int contadorPositivos;
	int acumuladorPar;
	int acumuladorImpares;

	contadorNegativos = 0;
	contadorPositivos = 0;
	acumuladorPar = 0;
	acumuladorImpares = 0;

	cargarArray(vectorNumeroEnteros, TAM, -1000, 1000);

	/*aca estoy recorriendo un array
	 y pidiendo que ingrese un numero segun la cantidad de iteraciones*/

	for (int i = 0; i < TAM; i++){

		if (vectorNumeroEnteros[i] >= 0) {
			contadorPositivos++;
		} else {
			contadorNegativos++;
		}

	}

	for (int i = 0; i < TAM; i++){

		if (vectorNumeroEnteros[i] % 2 == 0) {
			acumuladorPar+= vectorNumeroEnteros[i];

		}else{
			acumuladorImpares+= vectorNumeroEnteros[i];
		}
	}

	for (int i = 0; i < TAM; i++){

		printf("%d\n", vectorNumeroEnteros[i]);
	}

	printf("Numeros Positivos:  %d\n", contadorPositivos);

	printf("Numeros Negativos:  %d\n", contadorNegativos);

	printf("Numeros Pares:  %d\n", acumuladorPar);

	printf("Numeros Impares:  %d\n", acumuladorImpares);



	return 0;
}

int cargarArray(int array[], int size, int minimo, int maximo){

	/*MINIMO = -1000 Y MAXIMO = 1000, LOS REEMPLAZO*/
	int numeroIngresado; // seria la variable de NUMERO de mi funcion MAIN
	int retorno;

	retorno = -1;

	if (array != NULL && size > 0){

		for (int i = 0; i < size; i++){

			do {

				printf("\nIngresar un numero: ");
				scanf("%d", &numeroIngresado);

			} while (numeroIngresado < minimo || numeroIngresado > maximo);

			array[i] = numeroIngresado;
		}
	}

	return retorno;

}
/*siempre que trabajo con punteros o arrays/vectores = validar que no sea NULL = nulo
 EJEMPLO= if (array != NULL && size > 0){ Y aqui meto lo que esta haciendo mi algoritmo*/
