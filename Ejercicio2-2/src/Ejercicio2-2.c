/*
 ============================================================================
 Name        : Ejercicio2-2.c
 Author      : DenisBottarini
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */
/*
Ejercicio 2-2:
Ingresar 10 números enteros, distintos de cero. Mostrar:
A) Cantidad de pares e impares.
B) El menor número ingresado.
C) De los pares el mayor número ingresado.
D) Suma de los positivos.
E) Producto de los negativos.
*/
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	setbuf(stdout, NULL);

	int numeroEntero;
	int contadorPar = 0;
	int contadorImpar = 0;
	int menorNumeroIngresado;
	int mayorNumeroIngresadoPar;
	int acumuladorNumerosPositivos = 0;
	int acumuladorProductoNegativos = 1;
	int i;
	int flag = 0;
	int flag2 = 0;

	for(i = 0; i < 10; i++)
	{

		printf("Ingresar un numero entero: ");
		scanf("%d", &numeroEntero);


		if(numeroEntero % 2 == 0)
		{
			contadorPar++;

			if(flag2 == 0 || mayorNumeroIngresadoPar < numeroEntero)
			{
				mayorNumeroIngresadoPar = numeroEntero;
			    flag2 = 1;
			}
		}else
		{
			contadorImpar++;
		}

		if(flag == 0 || menorNumeroIngresado > numeroEntero)
		{
			menorNumeroIngresado = numeroEntero;
			flag = 1;
		}

		if(numeroEntero > 0)
		{
			acumuladorNumerosPositivos+= numeroEntero;
		}else
		{
			acumuladorProductoNegativos *= numeroEntero;
		}


	}

	//A) Cantidad de pares e impares.
	printf("\ncantidad de numeros pares es: %d", contadorPar);
	printf("\n\ncantidad de numeros impares es: %d", contadorImpar);
	//B) El menor número ingresado.
	printf("\n\nEl menor numero ingresado es: %d", menorNumeroIngresado);
	//C) De los pares el mayor número ingresado.
	printf("\n\nEl mayor numero ingresado par es: %d", mayorNumeroIngresadoPar);
	//D) Suma de los positivos.
	printf("\n\nLa suma de los numeros positivos es: %d", acumuladorNumerosPositivos);
	//E) Producto de los negativos.
	printf("\n\nEl producto de los negativos es: %d", acumuladorProductoNegativos);


	return 0;
}
