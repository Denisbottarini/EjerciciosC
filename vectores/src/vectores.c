/*
 ============================================================================
 Name        : vectores.c
 Author      : Denis Bottarini
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

#define MAX 5

void main(void) {

	int vec[MAX];
	int i;
	int mayor;
	int menor;
	int numero;
	int flag;

	/*Le vamos pidiendo al usuario que ingrese numeros
	 y lo vamos guardando en las posiciones del array */
	for (i = 0; i < MAX; i++) {

		printf("\nIngresar el numero: ");
		scanf("%d", &vec[i]);
	}

	/*Otras asignaciones = Tipo de asignaciones relacionadas con la busqueda*/
	if (vec[i] > mayor) {

		mayor = vec[i];
	}
	/*otras asignaciones = el razonamiento es el mismo solo cambia el signo de la desigualdad*/
	if (vec[i] < menor) {

		menor = vec[i];
	}

	/*Busqueda de un numero dentro del vector*/
	flag = 0;
	printf("\nIngresar el numero que desea buscar: ");
	scanf("%d", &numero);

	for (i = 0; i < MAX; i++) {

		if (numero == vec[i]) {

			printf("\nSe encontro el numero: ");
			flag = 1;
		}
	}
	if (flag == 0)
		ptinf("\nEl numero no se encontro");

	/*Ordenamiento del vector = Metodo de burbujeo*/
	for (i = 0; i < FIL - 1; i++) {
		for (j = i + 1; j < FIL; j++) {
			if (vec[i] > vec[j]) {
				aux = vec[i];
				vec[i] = vec[j];
				vec[j] = aux;
			}
		}

	}

void bubbleSort(int a[], int len) {

	int j, aux;
	int flagNoEstaOrdenado = 1;
	while (flagNoEstaOrdenado == 1) {
		flagNoEstaOrdenado = 0;
		for (j = 1; j < len; j++) {
			if (a[j] < a[j - 1]) {
				aux = a[j];
				a[j] = a[j - 1];
				a[j - 1] = aux;
				flagNoEstaOrdenado = 1;
			}
		}
	}
}
void insertion(int data[], int len) {


	int i, j;
	int temp;
	for (i = 1; i < len; i++) {
		temp = data[i];
		j = i - 1;
		while (j >= 0 && temp < data[j]) // temp<data[j] o temp>data[j]
		{
			data[j + 1] = data[j];
			j--;
		}
		data[j + 1] = temp; // inserción
	}
}
