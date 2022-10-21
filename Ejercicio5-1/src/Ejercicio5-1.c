/*
 ============================================================================
 Name        : Ejercicio5-1.c
 Author      : Denis Bottarini
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 Pedir el ingreso de 5 números. Mostrarlos y calcular la sumatoria de los mismos.
 */

#include <stdio.h>
#include <stdlib.h>
#include "validacion.h"
#define NUM 5

int main(void) {
	setbuf(stdout, NULL);

	int numero;
	int numeros[NUM];
	int i;
	int longitud = sizeof numeros / sizeof numeros[0];
	int sumatoria = 0;//Aquí vamos a almacenar cada valor

	//Recorro para cargar en forma secuencial
	for(i=0;i<NUM;i++)
	{

		printf("\nIngrese los numeros: ");
		scanf("%d", &numero);
		//En num escribo numeros en la posicion "i"
		numeros[i] = numero;

	}

	//Recorro para imprimir
	for(i=0;i<NUM;i++)
	{
		printf("%d ", numeros[i]);
	}

	//sumo los numeros
	for (i = 0; i < longitud; i++)
	{
		int numeroActual = numeros[i];
		// Sumar el número actual a la sumatoria
		sumatoria = sumatoria + numeroActual;
		// También se puede sumar de forma más simple:
		// sumatoria += numeroActual;
	}

	 printf("\t\tLa sumatoria es: %d\n", sumatoria);

     return 0;

}

/*
#include <stdio.h>
#include <stdlib.h>
#define NUM 5

int main() {

    int numero;
    int i;
	int numeros[NUM];
	int longitud = sizeof numeros / sizeof numeros[0];
    int sumatoria = 0;//Aquí vamos a almacenar cada valor

	//Recorro para cargar en forma secuencial
	for(i=0;i<NUM;i++)
	{

		printf("Ingrese los numeros: ");
		scanf("%d", &numero);
		//En num escribo numeros en la posicion "i"
		numeros[i] = numero;

	}

    for (i = 0; i < longitud; i++) {
        int numeroActual = numeros[i];
        // Sumar el número actual a la sumatoria
        sumatoria = sumatoria + numeroActual;
        // También se puede sumar de forma más simple:
        // sumatoria += numeroActual;
    }
    printf("La sumatoria es: %d", sumatoria);
    return 0;
}
*/
