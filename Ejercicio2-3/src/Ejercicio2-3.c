/*
 ============================================================================
 Name        : Ejercicio2-3.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 debemos alquilar el servicio de transporte para llegar a Mar del Plata con un grupo de personas
 (no más de 100), de cada persona debemos obtener los siguientes datos:
 número de cliente,
 estado civil ('s' para soltero", 'c' para casado o 'v' viudo),
 edad( solo mayores de edad, más de 17),
 temperatura corporal (validar por favor)
 y genero('f' para femenino, 'm' para masculino, 'o' para no binario).
 NOTA: El precio por pasajero es de $600.
 Se debe informar (solo si corresponde):
 a) La cantidad de personas con estado  civil"viudo" de más de 60 años.
 b) el número de cliente y edad de la mujer soltera más joven.
 c) cuánto sale el viaje total sin descuento.
 d) si hay más del 50% de los pasajeros que tiene más de 60 años , el precio final tiene un
 descuento del 25%, que solo mostramos si corresponde.
 */

#include <stdio.h>
#include <stdlib.h>
#define PRECIO_POR_PASAJERO 600

int main(void) {
	setbuf(stdout, NULL);

	char condicionDeSalida;
	int numeroCliente;
	char estadoCivil;
	int edad;
	int temperaturaCorporal;
	char genero;
	//A)
	int contadorViudosMayorA60;
	//B)
	int numeroClienteMujerSolteraMasJoven;
	int edadMujerSolteraMasJoven;
	int flag;
	//C)
	int viajeFinalSinDescuento;
	//D)
	int i;
	int precioFinalConDescuento;
	int porcentajeMayoresDe60;
	int contadorMayorDe60;

	contadorViudosMayorA60 = 0;
	flag = 0;
	i = 0;
	contadorMayorDe60 = 0;

	do {

		printf("\nIngresar numero de cliente: ");
		scanf("%d", &numeroCliente);

		do {
			printf("\nIngresar el estado civil del pasajero, siendo ('s' para soltero, 'c' para casado o 'v' viudo): ");
			fflush(stdin);
			scanf("%c", &estadoCivil);
		} while (!(estadoCivil == 's' || estadoCivil == 'c'
				|| estadoCivil == 'v'));

		do {
			printf(
					"\nIngresar la edad del pasajero, pero (solo mayores de edad, más de 17): ");
			scanf("%d", &edad);
		} while (!(edad > 17));

		do {
			printf("\nIngresar la temperatura corporal del pasajero: ");
			scanf("%d", &temperaturaCorporal);
		} while (!(temperaturaCorporal > 33));

		do {
			printf("\nIngresar el genero del pasajero, siendo('f' para femenino, 'm' para masculino, 'o' para no binario): ");
			fflush(stdin);
			scanf("%c", &genero);
		} while (!(genero == 'f' || genero == 'm' || genero == 'o'));

		if (estadoCivil == 'v' && edad > 60) {
			contadorViudosMayorA60++;
		}

		if (genero == 'f' && estadoCivil == 's') {
			if (flag == 0 || edadMujerSolteraMasJoven > edad) {
				edadMujerSolteraMasJoven = edad;
				numeroClienteMujerSolteraMasJoven = numeroCliente;
				flag = 1;
			}
		}

		if (edad > 60){
			contadorMayorDe60++;
		}

		printf("\nDesea seguir ingresando pasajeros? s para (si) o n para (no) ");
		fflush(stdin);
		scanf("%c", &condicionDeSalida);
		i++;
	} while (condicionDeSalida == 's' && i <= 100);

	viajeFinalSinDescuento = PRECIO_POR_PASAJERO * i;

	porcentajeMayoresDe60 = (contadorMayorDe60 * 100) / i;

	//a) La cantidad de personas con estado  civil"viudo" de más de 60 años.
	if (contadorViudosMayorA60 > 0) {
		printf("\nLa cantidad de personas con estado  civil 'v' de más de 60 años es: %d\n", contadorViudosMayorA60);
	} else {
		printf("\nNO TENEMOS PASAJEROS MAYORES DE 60 AÑOS QUE SEAN VIUDOS \n");
	}

	//b) el número de cliente y edad de la mujer soltera más joven.
	if (edadMujerSolteraMasJoven > 0) {
		printf("\nel numero de cliente es: %d\n", numeroClienteMujerSolteraMasJoven);
		printf("y edad de la mujer soltera mas joven es: %d\n", edadMujerSolteraMasJoven);
	} else {
		printf(".\nNO TENEMOS EN EL VIAJE MUJERES SOLTERAS \n");
	}

	//c) cuánto sale el viaje total sin descuento.
	printf("\nEl el viaje total sin descuento es: %d\n", viajeFinalSinDescuento);

	/*d)si hay más del 50% de los pasajeros que tiene más de 60 años , el precio final tiene un
	 descuento del 25%, que solo mostramos si corresponde.*/
	if(porcentajeMayoresDe60 > 50)
	{
		precioFinalConDescuento = viajeFinalSinDescuento * 0.75;
		printf("\nEl precio final con descuento es: %d \n", precioFinalConDescuento);
	}else
	{
		printf("\nNO HUBO DESCUENTOS EN SUS BOLETOS");
	}

	return 0;
}
