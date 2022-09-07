/*
 ============================================================================
 Realizar un programa EN EL MAIN que permita calcular y mostrar el factorial de un número. Utilizar la función PedirNumero de la ejercitación 3-4.
 Por ejemplo:
 5! = 5*4*3*2*1 = 120
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "factorial.h"

int main(void) {

	setbuf(stdout, NULL);

	int numero;
	int factorial;
	int i;

	factorial = 1;

	numero = funcionNumeroEntero();
	for (i = 1; i <= numero;i++){

		factorial *= i;
	}

	printf("El factor del numero es: %d", factorial);

	return 0;
}
