/*
 * validacion.C
 *
 *  Created on: 28 sep. 2022
 *      Author: denis
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int esNumerica(char cadena[]){
	int i = 0;
	int retorno = 1;
	if (cadena != NULL && strlen(cadena) > 0) {//asegura que la cadena no venga nula y que la cadena no se mas larga de lo que deberia
		while (cadena[i] != '\0') {
			if (cadena[i] < '0' || cadena[i] > '9') {
				retorno = 0;
				break;
			}
			i++;
		}
	}

	return retorno;
}

int getInt(int *pResultado) {
	int retorno = -1;
	char buffer[1024];
    if(pResultado != NULL){
	fgets(buffer, sizeof(buffer), stdin); //con el fgets = pido el dato a travez de la consola, lee hasta el "\0" y strlen = mide el largo de la cadena y ve que no se pase del largo que puede escribir //buffer = es lo que se va a reescribir sizeof = mide el peso en bits de la memoria
	buffer[strlen(buffer) - 1] = '\n';
	buffer[strlen(buffer) - 1] = '\0';

	if (esNumerica(buffer)) {
		*pResultado = atoi(buffer);//atoi = alfabeto a entero, convierte la cadena de caracteres en numeros
		retorno = 1;
	}
  }
	return retorno;
}

int utn_getNumero(int *pResultado, char *mensaje, char *mensajeError, int minimo, int maximo, int reintentos) {
	int retorno;
	int num;
	if(pResultado != NULL && mensaje != NULL && mensajeError != NULL){
	while (reintentos > 0) {
		printf("%s", mensaje);
		if (getInt(&num)==1) {
			if (num <= maximo && num >= minimo){
				break;
			}
		}
		reintentos--;
		printf("%s", mensajeError);
	}
	if (reintentos == 0) {
		retorno = -1;
	} else {
		retorno = 0;
		*pResultado = num;
	}
  }
	return retorno;
}

