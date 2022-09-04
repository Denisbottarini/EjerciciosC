/*
 ============================================================================
 Name        : Clasederepasodelossabados.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

/*
Realizar un programa que me permita ingresar 10 numeros y 10 letras
se necesita saber
a) el promedio de numeros (NO USO CONTADOR PARA CALCULAR EL PROMEDIO POR QUE ES UN FOR)
b) cantidad de vocales , (cuantas A, cuantas E....)  (USO switch)
c) de la letra A (si es que se ingreso alguna letra a) el valor mas grande!!!(BUSCO MAXIMO CONDICIONADO pero ya tengo contador de "A" ENTONCES USO EL CONTADOR, PARA EL MAXIMO)
d) el factor de todos los numeros ingresados
 */
#include <stdio.h>
#include <stdlib.h>
#define T 10

int main(void)
{
	setbuf(stdout, NULL);

	int numero;
	char letra;
	int acumuladorNumeros;
	float promedio;
	int contadorA;
	int contadorE;
	int contadorI;
	int contadorO;
	int contadorU;
	int maximoNumero;
	//int banderaMaximoA; PUEDO USARLO ASI TAMBIEN
	//int banderaMaximoE; PUEDO USARLO ASI TAMBIEN
	//int banderaMaximoI; PUEDO USARLO ASI TAMBIEN
	//int banderaMaximoO; PUEDO USARLO ASI TAMBIEN
	//int banderaMaximoU; PUEDO USARLO ASI TAMBIEN
	int factor;

	int i;

	acumuladorNumeros = 0;
	contadorA = 0;
    contadorE = 0;
    contadorI = 0;
    contadorO = 0;
    contadorU = 0;
    //banderaMaximoA = 0; PUEDO USARLO ASI TAMBIEN
    //banderaMaximoE = 0; PUEDO USARLO ASI TAMBIEN
    //banderaMaximoI = 0; PUEDO USARLO ASI TAMBIEN
    //banderaMaximoO = 0; PUEDO USARLO ASI TAMBIEN
    //banderaMaximoU = 0; PUEDO USARLO ASI TAMBIEN
    factor = 1; /*lo inicializo en 1 por que si lo inicializo en 0 factor siempre va a seguir valiendo 0
    pero si lo hago en 1 empieza a multiplicarlo por 1 por ejemplo*/



	for(i=0; i<T; i++){

		printf("Ingrese un numero: ");
		scanf("%d", &numero);


		printf("ingresar una letra: ");
		//__fpurge(stdin); //para LINUX
		scanf("%c", &letra);

		switch(letra)
		{
		    case 'a':
		    contadorA++;
		        if(numero>acumuladorNumeros || contadorA == 1) //banderaMaximoA == 0 TAMBIEN PUEDE SER ASI
		        {
		            maximoNumero = numero;
		            //banderaMaximoA = 1;
		        }
		    break;

		    case 'e':
		    contadorE++;
		        if(numero>acumuladorNumeros || contadorE == 1) //banderaMaximoE == 0 TAMBIEN PUEDE SER ASI
		        {
		            maximoNumero = numero;
		            //banderaMaximoE = 1;
		        }
		    break;

		    case 'i':
		    contadorI++;
		        if(numero>acumuladorNumeros || contadorI == 1) //banderaMaximoI == 0 TAMBIEN PUEDE SER ASI
		        {
		            maximoNumero = numero;
		            //banderaMaximoI = 1;
		        }
		    break;

		    case 'o':
		    contadorO++;
		        if(numero>acumuladorNumeros || contadorO == 1) //banderaMaximoO == 0 TAMBIEN PUEDE SER ASI
		        {
		            maximoNumero = numero;
		            //banderaMaximoO = 1;
		        }
		    break;

		    case 'u':
		    contadorU++;
		        if(numero>acumuladorNumeros || contadorU == 1) //banderaMaximoU == 0 TAMBIEN PUEDE SER ASI
		        {
		            maximoNumero = numero;
		            //banderaMaximoU = 1;
		        }
		    break;

		}

		//acumuladorNumeros = acumuladorNumeros + numero;
		acumuladorNumeros+= numero;
		//factor = factor * numero;
		factor *= numero;

	}

	promedio = (float) acumuladorNumeros/T;

	printf("El promedio es: %.3f\n", promedio);
	printf("Se ingresaron: %d letras a\n", contadorA);
	printf("Se ingresaron: %d letras e\n", contadorE);
	printf("Se ingresaron: %d letras i\n", contadorI);
	printf("Se ingresaron: %d letras o\n", contadorO);
	printf("Se ingresaron: %d letras u\n", contadorU);
	if(contadorA>0)
	{
	    printf("El maximo es: %d\n", maximoNumero);
	}
	else
	{
	    printf("No se ingresaron letras A para calcular el maximo");
	}
	if(contadorE>0)
	{
	    printf("El maximo es: %d\n", maximoNumero);
	}
	else
	{
	    printf("No se ingresaron letras E para calcular el maximo");
	}
	if(contadorI>0)
	{
	    printf("El maximo es: %d\n", maximoNumero);
	}
	else
	{
	    printf("No se ingresaron letras I para calcular el maximo");
	}
	if(contadorO>0)
	{
	    printf("El maximo es: %d\n", maximoNumero);
	}
	else
	{
	    printf("No se ingresaron letras O para calcular el maximo");
	}
	if(contadorU>0)
	{
	    printf("El maximo es: %d\n", maximoNumero);
	}
	else
	{
	    printf("No se ingresaron letras U para calcular el maximo");
	}


    printf("\nEl factor es: %d", factor);

	return 0;
}

/*
printf doy la intruccion

scanf guardo en la variable un valor

el "&" es= la direccion de memoria de la variable

%d= por que es D de decimal, es la mascara que sirve para mostrar la variable, sabe como codificarlo

%c= por que es C un caracter, es la mascara que sirve para mostrar la variable, sabe como codificarlo

la memoria ram= es volatil, al apagarse no se guardan las cosas, es de lectura y escritura

memoria intermedia que se llama buffer, cuando escribimos escribimos en el buffer

\n= es un enter

los char= pesan 1 bit osea 8 bits

los caracteres= el scanf lleva el caracter a la memoria pero deja cargado el \n por eso genera un salto

funcion que limpia el buffer segun sistema operativo para LINUX =__fpurge(stdin)  WINDOWS __fflush

stdin = nombre del buffer es standar imput

flotante = son los numeros con (",") coma......ejemplo= 30.52 /// 20.50 ...

#include <stdio.h> = no tiene el fpush!!!

#include <stdio_ext.h> = para linuz deberia funcionar

GDB = trabja con LINUX

fpush= va despues de un scanf para que este limpio el buffer

lo que hago ahora aca= es para LINUX por que GDB trabaja con LINUX pero yo uso WINDOWS

como formatear el cod para que quede prolijo= Arriba a la izquierda tenes un apartado que dice Source, ahi esta la opcion de Format //  cntrl+shift+F

un warnig=es algo que te dice ojo con esto yo te lo compilo pero no te aseguro que eso que usas es lo que estas usando realmente

float= para numero con coma

la constante = existe en memoria y no puede ser modificada

variables contador / acumulador y banderas= siempre se inicializan siempre!!!

%f= comodin para ver donde voy a colocar la variable la F es de flotante

castear= convertir de tipo numerico a otro tipo numerico

parsear= convertir tipo cadena a tipo numerico

(float)=tomo el valor del acumulador y lo convierte en flotante

cuando comparemos una variable contra un caracter usamos comillas simples ''

C= en C no existre true o false; pero 0 y 1 si

factorear= multiplicar numero por otro ose en este caso la multiplicacion de todo
*/
