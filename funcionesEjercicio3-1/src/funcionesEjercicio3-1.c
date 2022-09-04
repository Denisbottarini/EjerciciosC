/*
 ============================================================================
Crear una función que muestre por pantalla el número flotante  que recibe como parámetro.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

void numeroFlotante(float numero);

int main(void) {

	setbuf(stdout, NULL);

	float numero;
	printf("dame un numero: ");
	scanf("%f", &numero);

	numeroFlotante(numero);
	return 0;
}
//DESARROLLO
void numeroFlotante (float numero){
	printf("el numero flotante es: %.3f", numero);
}

//ARGUMENTO = ES EL VALOR QUE RECIBE UNA FUNCION
//PARAMETRO = ES EL VALOR QUE VA A RECIBIR CUANDO SE DECALRA LA FUNCION
