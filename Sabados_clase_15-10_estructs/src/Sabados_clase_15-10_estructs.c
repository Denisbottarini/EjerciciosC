/*
 ============================================================================
 Name        : Sabados_clase_15-10_estructs.c
 Author      : Denis Bottarini
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 funcion que devuelva de un array cual es el numero negativo mas grande
 la funcion ademas me debe retornar si encontro o no un numero negativo
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setbuf(stdout,NULL);
	int numero;
	int* pEntero;

	numero = 5;

	pEntero = &numero;

	printf("numero: %d\n", numero);
	printf("&numero: %d\n", &numero);
	printf("pEntero: %d\n", pEntero);
	printf("*pEntero: %d\n", *pEntero);//Indireccion de memoria
	printf("&pEntero: %d\n", &pEntero);//

	return 0;
}


/*
 un  punteroe s una variable que en vez de guardar un valor, guarda una referencia osea (una direccion de memoria)

 */
/*
#include <stdio.h>
#include <stdlib.h>

int buscarNegativoMayor(int* array, int tam, int* resultado);

int main(void) {
	setbuf(stdout,NULL);
	int resultado;

	int array[10]={-1,-30,45,10,-20,30,1,5,4000,20};

	//buscarNegativoMayor(array, 10, &resultado);
	if(buscarNegativoMayor(array, 10, &resultado)==0)
	{
		printf("El numero negativo mayor es %d ",resultado);
	}
	else
	{
		printf("No hay numeros negativos");
	}
	return EXIT_SUCCESS;
}

int buscarNegativoMayor(int* array, int tam, int* resultado)
{
	int retorno=-1;
	int numeroNegativoMayor;
	int flag=0;
	//numeroNegativoMayor=array[0];

	for(int i=0;i<tam;i++)
	{
		if(array[i]<0 && flag==0)
		{
			flag=1;
			numeroNegativoMayor=array[i];
		}
		else
		{
			if(numeroNegativoMayor<array[i] && array[i]<0)
			{
				numeroNegativoMayor=array[i];

			}
		}

	}
	if(flag==1)
	{
		*resultado=numeroNegativoMayor;
		retorno=0;
	}

	return retorno;
}
*/

/*
#include <stdio.h>
#include <stdlib.h>
#define QTY_EDADES 5

int buscarNumeroMayorArray(int* pResultado, int* arrayNros, int len);
void pedirNros(int arrayNros[], int len);

int main(void) {
	setbuf(stdout, NULL);
	int edades[QTY_EDADES];
	int elMasGrande;

	pedirNros(edades,QTY_EDADES);

    if(buscarNumeroMayorArray(&elMasGrande, edades, QTY_EDADES) == 0){
     printf("Encontraste el mayor y es: %d",elMasGrande);
    }else{
    	printf("No se pudo realizar la validación");
    }


	return EXIT_SUCCESS;

}
*/

/*
 * \brief Busca el mayor del array
 * \param pResultado puntero del espacio de memoria donde se copiará la cadena obtenida
 * \param arraNros cadena de numeros
 * \param longitud Define tamaño de cadena
 * \return Retorna 0 si si lo obtuvo, 1 sino
 */

/*
int buscarNumeroMayorArray(int* pResultado, int* arrayNros, int len){

	int mayorArray;
	int retorno = 1;
	int flag = 0;
	int i;

	if (pResultado != NULL && arrayNros != NULL && len >= 0) {

		for (i = 0; i < len; i++) {

			if (arrayNros[i] > arrayNros[i + 1] || flag == 0) {

				mayorArray = arrayNros[i];
				flag = 1;
			}
		}
         retorno = 0;
		*pResultado = mayorArray;
	}
	return retorno;
}

void pedirNros(int arrayNros[], int len) {
	int i;
	int bufferInt;

	for (i = 0; i < len; i++) {

		printf("Ingrese un nro: ");
		scanf("%d", &bufferInt);
		arrayNros[i] = bufferInt;
	}
}
*/
