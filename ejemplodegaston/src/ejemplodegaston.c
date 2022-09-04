/*
 ============================================================================
 Name        : ejemplodegaston.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */
#include <stdio.h>
#include <stdlib.h>
#include "calculos.h"

int main(void) {

	char operador;
	int numeroUno;
	int numeroDos;
	int resultado;
	int resultadoDivision = 3456;
	int retornoScanf;

	printf("\nNumero uno en main: %p\n", &numeroUno);

	printf("Ingrese el numero: ");
	retornoScanf = scanf("%d", &numeroUno);
	while (retornoScanf != 1) {
		printf("Le pifiaste al tipo\n");
		fflush(stdin);
		//__fpurge(stdin); sirve para LINUX
		printf("Ingrese el numero: ");
		retornoScanf = scanf("%d", &numeroUno);
	}
	//__fpurge(stdin);sirve para LINUX
	fflush(stdin); //SOLO WINDOWS
	printf("Ingrese el operador (+/-): ");
	retornoScanf = scanf("%c", &operador);

	printf("\nIngrese el numero: ");
	scanf("%d", &numeroDos);

	switch (operador) {
	case '+':
		resultado = sumarDosEnteros(numeroUno, numeroDos);
		break;
	case '-':
		resultado = numeroUno - numeroDos;
		break;
	case '/':
		printf("\nAntes de la funcion: %d", resultadoDivision);
		printf("\nPuntero en main de resultadoDivision: %p", &resultadoDivision);
		resultado = dividirDosEnteros(numeroUno, numeroDos, &resultadoDivision);
		if (resultado == -1) {
			printf("\nNo puede dividir por 0");
		}
		if (resultado == -2) {
			printf("\nNo puede ser mayor a 100 el primer numero");
		}
		printf("\nDespues de la funcion: %d", resultadoDivision);

		break;
	}

	//printf("El resultado es: %d", resultado);

	return 0;
}

 /*

	que es una funcion?= puedo reutilizar el codigo, sirve para que el codigo quede mas pequeño y prolijo.
	algunas hacen cosas con un dato y otras no.
	valida que lo que tenemos como parametro sean cosas correctas, si paso algo que no corresponde tiene la inteligencia para evitar
	realizar lo que esta mal. tiene parametros, o los que haga falta y algo que me va a retornar. tiene cuerpo y desarrollo.
	las funcionene llevan nombre de cosas que hacen cosas, nombres ejemplo sumarDosEnteros, o restar ... ect...

  	No usamos funciones globales, esta prohibido realizar funciones globales

    stack = pila de memoria

    como retorno un resultado por ejemplo en la funcion que estoy creando? = en ves de (0) le pongo "resultado"

    como uso o invoco una funcion? = escribo el nombre de la funcion con los parentesis y sus parametros osea en este ejemplo
    numeroUno y numeroDos!!

    que hace? = atraves de los parametros va a copiar y pegar lo que tenga en unas variables en otras variables que son las que recibo
    como parametro.

    no son las mismas variables aunque se llamen igual si estan dentro de otra funcion

    para el return de MAIN siempre vamos a usar (0) por lo menos en las clases nosotros!!

    error en tiempo de compilacion =

    error en tiempo de ejecucion =

    que vamos a realizar con la funciones? = vamos a validar datos

	el prototipo = es decirle al programa le dice al programa cuando te encuentres algo que se llame sumar o divir algo son funciones
	que te vana  dar instrucciones mas adelante, osea le dice que la funcion existe

	escuchar el poscat INTERNET ME ARRUINO

	video juego hacknet buscar en internet

	scanf = me sirve para dar la direccion de memoria!! es una funcion y guarda una variable y puede cambiar valores en main

	& = es la direccion de memoria, osea para encontar la variable que vive en mi memoria utilizo "&"
	no le doy el valor que esta dentro de la variable ( todas las variables tienen un valor adentro y una direccion donde viven
	en la memoria) con el "&" le digo cual es esa direccion de donde se encuentra en la memoria.

	puntero = apunta a una direccion de una variable, le indica donde esta una variable

	* = EJEMPLO "int * (nombre variable)" dice que la variable no es de tipo entero "es un puntero a un entero"
	es una direccion de memoria de una variable de tipo entero.

	* = es un puntero a un entero, operador de INDIRECCION (lo que no es la direccion es el contenido)

	&(variable) = tambien es un puntero , se dice que es por REFERENCIA, puntero a un entero

	"*" = acceso al contenido, cambio el valor a la variable a la que apunto , "&" = se obtiene la direccion de memoria

	el retorno lo uso para = saber si mi funcion andubo bien o mal

	__fpurge(stdin) = limpia el buffer para LINUX

	fflush(stdin) = limpia el buffer para WINDOWS

	en el punto H van los prototipos

	en el punto C van lo que hace las funciones

	debemos hacer las funciones lo mas robusta posibles, si armo la funcion bien puedo usarla siempre

	en retornos usamos 0 (para OK) negativo o mejor dicho -1 (para MAL)

  */







