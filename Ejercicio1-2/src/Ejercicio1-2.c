/*
 ============================================================================
 Name        : Ejercicio1-2.c
 Author      : DenisBottarini
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

/*
ingresar 3 números y mostrar cuál de los tres es el mayor.
Ejemplo:
Si ingresamos 5, 9 y 3 el programa mostrará: “El mayor de los números es el segundo”
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	setbuf(stdout, NULL);

	int numeroUno;
	int numeroDos;
	int numeroTres;

	printf("Ingrese su primer numero: ");
	scanf("%d", &numeroUno);
	printf("Ingrese su segundo numero: ");
	scanf("%d", &numeroDos);
	printf("Ingrese su tercer numero: ");
	scanf("%d", &numeroTres);

	if(numeroUno > numeroDos && numeroUno > numeroTres)
	{
		printf("El mayor numero ingresado es el primero: %d", numeroUno);
	}else if(numeroDos > numeroTres)
	{
		printf("El mayor numero ingresado es el segundo: %d", numeroDos);
	}else
	{
		printf("El mayor numero ingresado es el tercero: %d", numeroTres);
	}

	return 0;
}
