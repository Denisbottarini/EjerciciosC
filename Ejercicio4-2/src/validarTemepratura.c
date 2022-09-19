/*
 * validarTemepratura.c
 *
 *  Created on: 15 sept 2022
 *      Author: denis
 */
#include <stdio.h>
#include <stdlib.h>

int validoTipoTemperatura(){

	char temperatura;

	do {
		printf("Ingresar la temperatura que desea convertir, colocando 'c' para celcius y 'f' para fahrenheit: ");
		fflush(stdin);
		scanf("%c", &temperatura);
	} while (!(temperatura == 'c' || temperatura == 'f'));

	return temperatura;

}

float validoRangoTemperaturaCelcius(){

	float gradosCelcius;

	do {
		printf("\nIngresar una temperatura en Grados Celcius, debe estar entre el punto de ebullicion (100) y su punto de congelacion (0): ");
		scanf("%f", &gradosCelcius);
	} while (!(gradosCelcius >= 0 && gradosCelcius <= 100));

	return gradosCelcius;

}

float validoRangoTemperaturafahrenheit(){

	float gradosFahrenheit;

	do {
		printf("\nIngresar una temperatura en Grados fahrenheit, debe estar entre el punto de ebullición del agua (212) y el punto de congelacion (32): ");
		scanf("%f", &gradosFahrenheit);
	} while (!(gradosFahrenheit >= 32 && gradosFahrenheit <= 212));

	return gradosFahrenheit;

}

