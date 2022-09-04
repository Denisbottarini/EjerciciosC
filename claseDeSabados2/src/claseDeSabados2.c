
#include <stdio.h>
#include <stdlib.h>

//tipo_retorno nombreFuncion (listaParametros);
//prototipo

int sumarEnteros(int numeroUno, int numeroDos);
void sumarEnterosVoid(int numeroUno, int numeroDos);
int sumarSinParametros(void);
void sumarSinRetornoSinParametro(void);

int dividirEnteros(int numero1, int numero2, float* resultado);

int main(void) {

	//lamada
	setbuf(stdout, NULL);

	int numeroA;
	int numeroB;
	int division;
	int resultado;

	printf("Numero uno: ");
	scanf("%d", &numeroA);
	printf("\nNumero dos: ");
	scanf("%d", &numeroB);

	resultado = /*sumarEnteros*/(numeroA + numeroB);



	printf("\nEl resultado es %d", resultado);

	return 0;
}
//desarrollo
int sumarEnteros(int numeroUno, int numeroDos){ //siempre colocar nombres representativos

	int retorno;

	retorno = numeroUno + numeroDos;

	return retorno;
}
//desarrollo
void sumarEnterosVoid(int numeroUno, int numeroDos){
//sin retorno
	int suma;

	suma = numeroUno + numeroDos;

	printf("%d", suma);
}
//desarrollo
int sumarSinParametros(void){

	int numeroA;
	int numeroB;
	int retorno;

	printf("Numero uno: ");
	scanf("%d", &numeroA);
	printf("\nNumero dos: ");
	scanf("%d", &numeroB);

	retorno = numeroA + numeroB;

	return retorno;
}
//desarrollo
void sumarSinRetornoSinParametro(void){

	int suma;
	int numeroA;
	int numeroB;

	printf("Numero uno: ");
	scanf("%d", &numeroA);
	printf("\nNumero dos: ");
	scanf("%d", &numeroB);

	suma = numeroA + numeroB;
}
//desarrollo
int dividirEnteros(int numero1, int numero2, float* resultado){

	float retorno;

	if(numero2 != 0){

		*resultado = (float) numero1 / numero2;
		 retorno = 0;
	}else{

		retorno = -1; // el  -1 lo ponemos para saber que salio todo mal
	}

	return retorno;
}

//EJEMPLO DE LA PROFE

#include <stdio.h>
#include <stdlib.h>

//Prototipo
int SumarEnteros(int numeroUno,int numeroDos);
void SumarEnterosVoid (int numeroUno, int numeroDos);
int SumarSinParametros(void);
void SumarSinRetornoSinParametro(void);


int dividirEnteros(int numeroUno,int numeroDos,float* resultado);


int main(void) {

	setbuf(stdout,NULL);

	int numeroA;
	int numeroB;
	int division;
	int salioTodoBien;

	numeroA = 2;
	numeroB = 10;

	//llamadada con retorno
	//resultado = SumarEnteros(numeroA,numeroB);
	//printf("\nEstoy desde el main! \nEl resultado es %d",resultado);

	//Llamada al mostrar
	SumarEnterosVoid(10,30);


	salioTodoBien = dividirEnteros(numeroA,numeroB,&division);
	if(salioTodoBien == 0)
	{
		printf("La division se realizo correctamente y el resultado es %f", division);
	}
	else
	{
		printf("No se pudo realizar la division");
	}


	return EXIT_SUCCESS;
}

//desarrollo
int SumarEnteros(int numeroA,int numeroB)
{
	int retorno;
	retorno = numeroA + numeroB;
	return retorno;
}


void SumarEnterosVoid (int numeroUno, int numeroDos)
{
	int suma;
	suma = numeroUno + numeroDos;
	printf("\nEstoy desde la funcion! \nMostramos la suma nada mas %d",suma);
}


int SumarSinParametros(void)
{
	int retorno;
	int numeroA;
	int numeroB;
	printf("Ingrese un numero \n");
	scanf("%d",&numeroA);
	printf("Ingrese un numero \n");
	scanf("%d",&numeroB);
	retorno = numeroA + numeroB;
	return retorno;
}


void SumarSinRetornoSinParametro(void)
{
	int suma;
	int numeroA;
	int numeroB;
	printf("Ingrese un numero \n");
	scanf("%d",&numeroA);
	printf("Ingrese un numero \n");
	scanf("%d",&numeroB);
	suma = numeroA + numeroB;
	printf("\nEl resultado de la suma es %d",suma);
}



int dividirEnteros(int numeroUno,int numeroDos, float* resultado)
{
	int retorno;
	if(numeroDos != 0)
	{
		*resultado = (float) numeroUno / numeroDos;
		retorno = 0;
	}
	else
	{
		retorno = -1;
	}

	return retorno;
}
/*

    tipo de una funcion = prototypo (declaracion de la funcion, la damos a conocer, que va a recibir esa funcion y que va a devolver)
    desarrollo (la imploementaciond e la funcion, es el algoritmo) y llamada (cuando la invoco, cuando quiero que se cumpla esa funcion).

    que le importa a la funcion? que tipo de dato recibe

	scope = es el alcance

	la funcion siempre tiene que recibir algo y devolver algo

	RETORNO DEVUELVE EL VALOR A LA FUNCION QUE LLAMO O QUE INVOCO EN PARTICULAR

	por que le pusimos VOID? = porque no retorna nada, void significa vacio,
	significa que lo que pase en el scope de la funcion no te lo retorna



 */
