/*
============================================================================
Crear una función que permita determinar si un número es par o no.
La función retorna 1 en caso afirmativo y 0 en caso contrario. Probar en el main.
============================================================================
 */
#include <stdio.h>
#include <stdlib.h>

int parOImpar(int numero);

int main(void) {
	setbuf(stdout,NULL);

	int numero;
	int parImpar;

	printf("Ingresar un numero, el sistema informara si es PAR(1) O IMPAR(0): ");
	scanf("%d", &numero);

	parImpar = parOImpar(numero);

	if(parImpar == 0){
		printf("El numero ingresado es par");
	}else{
		printf("El numero ingresado es impar");
	}

	return 0;
}

int parOImpar(int numero){

	int retorno = 1;

	if(numero%2 == 0){
		retorno = 0;
	}

	return retorno;
}
