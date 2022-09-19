/*
 ============================================================================
 Realizar un programa en donde se puedan utilizar los prototipos de la función Sumar en sus 4 combinaciones.
 int Sumar1(int, int);
 int Sumar2(void);
 void Sumar3(int, int);
 void Sumar4(void);
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int sumar1(int numeroA, int numeroB);
int sumar2(void);
void sumar3(int numeroC, int numeroD);
void sumar4(void);

int main(void) {

	setbuf(stdout, NULL); // me setea el buffer para que pueda copilar el codigo en windows

	int numero1;
	int numero2;
	int numero3;
	int numero4;
	int resultadoSumar1;
	int resultadoSumar2;

	printf("\nIngresar el numero: ");
	scanf("%d", &numero1);
	printf("\nIngresar el numero: ");
	scanf("%d", &numero2);

	resultadoSumar1 = sumar1(numero1, numero2);

	printf("\nEl resultado de suma 1 es: %d\n", resultadoSumar1);

	resultadoSumar2 = sumar2();

	printf("\nEl resultado de suma 2 es: %d\n", resultadoSumar2);

	printf("\nIngresar el numero: ");
	scanf("%d", &numero3);
	printf("\nIngresar el numero: ");
	scanf("%d", &numero4);

	sumar3(numero3, numero4); //AL NO TENER RETORNO NO NECESITO CREAR UNA VARIABLE PARA LLAMAR A LA FUNCION

	sumar4();

	return 0;
}

int sumar1(int numeroA, int numeroB) {

	int resultado;

	resultado = numeroA + numeroB;

	return resultado;
}

int sumar2(void) {

	int numeroVacio1;
	int numeroVacio2;
	int resultado;

	printf("\nIngresar el primer numero: ");
	scanf("%d", &numeroVacio1);
	printf("\nIngresar el primer numero: ");
	scanf("%d", &numeroVacio2);

	resultado = numeroVacio1 + numeroVacio2;

	return resultado;
}

void sumar3(int numeroC, int numeroD) {

	int resultado3;

	resultado3 = numeroC + numeroD;

	printf("\nEl resultado de suma 3 es: %d\n", resultado3);
}

void sumar4(void) {

	int numeroVacio3;
	int numeroVacio4;
	int resultado;

	printf("\nIngresar el primer numero: ");
	scanf("%d", &numeroVacio3);
	printf("\nIngresar el primer numero: ");
	scanf("%d", &numeroVacio4);

	resultado = numeroVacio3 + numeroVacio4;

	printf("\nEl resultado de suma 4 es: %d\n", resultado);
}

/*
 TIPOS DE FUNCIONES

 RECIBE PARAMETRO - RETORNA PARAMETRO
 INT (INT)  CUANDO UNA FUNCION RECIBE PARAMETRO ESTA ESPERANDO QUE SE LE INGRESE DATO

 RECIBE PARAMETRO - NO RETORNA PARAMETRO
 VOID (INT) EN ESTA FUNCION EL RETORNO DIRECTAMENTE NO EXISTE!!!

 RETORNA PARAMETRO - NO RECIBE PARAMETRO
 INT (VOID) AL NO RECIBIR PARAMETRO NO ES NECESARIO PEDIR NINGUN DATO

 NO RECIBE PARAMETRO - NO RETORNA PARAMETRO
 VOID (VOID)
 */

//CON CTRL + SHIFT Y f identa el codigo SINO otra forma ctrl + A entro a source y luego a format
