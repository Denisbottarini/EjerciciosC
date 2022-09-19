/*
 ============================================================================
 Name        : clase15-09Laboratorio.c
 Author      : Denis Bottarini
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setbuf(stdout, NULL);
	/*
	 struct estudiante {
	 int edad;
	 char nombre[45];
	 char apellido[45];
	 char materia[45];
	 int legajo;
	 };

	 typedef struct estudiante unEstudiante;	//esta es una forma de realizarlo*/
//----------------------------------------------------------------------------------------------------------------------------//
	// esta es otra forma de representarlo, esta segunda vamos a usar siempre

	typedef struct {
		int edad;
		char nombre[45];
		char apellido[45];
		char materia[45];
		int legajo;

	} estudiante;

	/*
	 typedef int entero;

	 entero entero = 2;
	 */

	estudiante unEstudiante;

	/*
	unEstudiante.edad = 23;
	unEstudiante.nombre = "Pedro";
	*/

	printf("Ingresar la edad: \n");





	return 0;
}
/*
 ESTRUCTURAS = tenemos varios tipos de datos distintos agrupados en una sola cosa

 typedef = lo utilizo para crear tipos de datos

 strcpy = me sirve para validar tipo de caracteres

 ordenamiento = lo vimops algoritmo es una nunica vez y listo

 array paralelos, no lo vamos a usar

 recursividad no lo vamos a usar

 toUpper()= convierte de mayuscula a minuscula

*/
