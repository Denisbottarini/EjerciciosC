

#include <stdio.h>

int sumarDosEnteros(int primerNumero, int segundoNumero) {
	int suma;

	suma = primerNumero + segundoNumero;

	return suma;
}
int dividirDosEnteros(int a, int b, int * pepe){ //parametros como valor

	int retorno = 0;

	if (a > 100) {
		retorno = -2;
	}

	if (b != 0) {

		*pepe = a / b;
		//operador de indireccion
	} else {
		retorno = -1;
	}

	return retorno;
}

