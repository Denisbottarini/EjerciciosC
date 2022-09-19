/*
 ============================================================================
 Name        : Ejercicio2-2.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 Ingresar 10 números enteros, distintos de cero. Mostrar:
 A)Cantidad de pares e impares.
 B)El menor número ingresado.
 C)De los pares el mayor número ingresado.
 D)Suma de los positivos.
 E)Producto de los negativos.
 */

#include <stdio.h>
#include <stdlib.h>
#define ITERACION 5

int main(void) {
	setbuf(stdout, NULL);

	int numeroEntero;
	//A)
	int contadorNumerosPares;
	int contadorNumerosImpares;
	//B)
	int menorNumeroIngresado;
	int flag;
	//C)
	int mayorNumeroPar;
	int flag2;
	//D)
	int acumuladorNumerosPositivos;
	//E)
	int productoNumerosNegativos;

	contadorNumerosPares = 0;
	contadorNumerosImpares = 0;
	flag = 0;
	flag2 = 0;
	acumuladorNumerosPositivos = 0;
	productoNumerosNegativos = 1;

	for (int i = 0; i < ITERACION; i++) {

		do {
			printf("\nIngresar numero entero, debe ser distinto de cero(0): ");
			scanf("%d", &numeroEntero);
		} while (!(numeroEntero != 0));

		if (numeroEntero % 2 == 0) {
			contadorNumerosPares++;

			if (flag2 == 0 || mayorNumeroPar < numeroEntero) {
				mayorNumeroPar = numeroEntero;
				flag2 = 1;
			}
		} else {
			contadorNumerosImpares++;
		}

		if (flag == 0 || menorNumeroIngresado > numeroEntero) {
			menorNumeroIngresado = numeroEntero;
			flag = 1;
		}

		if (numeroEntero >= 0) {
			acumuladorNumerosPositivos += numeroEntero;
		} else {
			productoNumerosNegativos *= numeroEntero;
		}

	}
	//A)Cantidad de pares e impares.
	printf("\nLa cantidad de numeros pares es: %d\n", contadorNumerosPares);
	printf("\nLa cantidad de numeros impares es: %d\n", contadorNumerosImpares);
	// B)El menor número ingresado.
	printf("\nEl menor número ingresado es: %d\n", menorNumeroIngresado);
	//C)De los pares el mayor número ingresado.
	printf("\nEl mayor número ingresado es: %d\n", mayorNumeroPar);
	//D)Suma de los positivos.
	printf("\nLa suma de los positivos es: %d\n", acumuladorNumerosPositivos);
	//E)Producto de los negativos.
	printf("\nEl producto de los negativos es: %d\n", productoNumerosNegativos);

	return 0;
}
