/*
 ============================================================================
 Name        : Estructuras.c
 Author      : Denis Bottarini
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */
#include <stdio.h>
#include <stdlib.h>
#include <stdio_ext.h>
#include "datosPersonales.h"

int main(void) {

	int i, j;

	datosPersonales datosProfesores[20];
	datosPersonales datosEstudiantes[20];
	datosPersonales aux;

	for (i = 0; i < 20; i++) {
		printf("\nIngrese nombre ");
		gets(datosProfesores[i].nombre);
		printf("\nIngrese apellido ");
		gets(datosProfesores[i].apellido);
		printf("\nIngrese calle ");
		gets(datosProfesores[i].direccion.calle);
		printf("\nIngrese numero ");
		scanf("%d", &datosProfesores[i].legajo);
		fflush(stdin);
	}

	for (i = 0; i < 20 - 1; i++) {
		for (j = i + 1; j < 20; j++) {
			if (datosProfesores[i].direccion.altura > datosProfesores[j].direccion.altura) {
				aux = datosProfesores[i];
				datosProfesores[i] = datosProfesores[j];
				datosProfesores[j] = aux;
			}
		}

	}

	return 0;
}
/*
Las estructuras pueden ser de cualquier tipo, es una estructura que contiene varios campos
tiene un operador de punto(.) con el nombre de la variable, para poder ingresar en cualqueir campo de nuestra estructura
strcmp = compara string con per, y dice si la funcion devuelve 0 quiere decir que son los 2 iguales
*/
