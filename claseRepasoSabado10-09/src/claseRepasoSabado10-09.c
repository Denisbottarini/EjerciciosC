/*
 ============================================================================
 Name        : claseRepasoSabado10-09.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#define TAM 5

void inicializarVector(int vector[], int size, int inicial);
void cargarVector(int vector[], int size,);

int main(void) {
	setbuf(stdout, NULL);

	int numero;

	int lista [TAM]; //= {5,7,1,9,10}; //array
	char continuar;
	int posicion;
	int acumulador;

	acumulador = 0;

	inicializarVector(lista, TAM, -1);
	inicializarVector(lista, 339, 0);

	cargarVector(lista, TAM);


	for(int i=0 ; i < TAM; i++)
		{
			if(lista[i] != -1)
			{
				acumulador+= lista[i];
			}

		}

			printf("El total acumulado es %d\n", acumulador);

			printf("la lista de numero es: \n");

	// si quiero mostrar el vector enotnces realizo

	for(int i = 0; i < TAM; i++)
	{
		if(lista[i] != -1)
		{
		   printf("%d\n", lista[i]);
	    }
	}


	return 0;
}

void inicializarVector(int vector[], int size, int inicial)
{
	// CARGA SECUENCIAL

	for(int i = 0; i < size; i++)
		{
			/*
			printf("ingrese un numero: ");
			scanf("%d", &lista[i]);
			*/
		vector[i] = inicial;//valor ilogico para inicializar
// el -1 seria un valor ilogico para saber que cada elemento del vector esta vacio, el -1 es como bandera por que quiero numeros positivos
		}

}

void cargarVector(int vector[], int size,)
{

	int numero:
	int posicion;
	char continuar;

	//CARGA ALEATORIA del conjunto de elementos le usuario toma la opcion cuantos carga y cuales carga, se le pregunta al usuario donde lo guarda
	do
	{
		printf("Ingrese un numero: ");
		scanf("%d", &numero);
		printf("Ingresar una posicion dentro de la lista (1 a 5): ");
		scanf("%d", &posicion);

		lista[posicion-1] = numero;

		printf("quiere ingresar otro numero? s/n: ");
		fflush(stdin);
		scanf("%c", &continuar);

	}while(continuar == 's');

}
/*
Vector / array = conjunto de elemento del mismo tipo y mimso nombre, por el momento los vectores son finitos

un ARRAY = esta indexado

el for lo utilizamos para poder por ejemplo recorrer el indice
*/

/*
#include <stdio_ext.h>
#define TAM 5

void InicializarVector(int vector[], int size, int inicial);
void CargarVector(int vector[], int size);
int main()
{
    int numero;
    int lista[TAM];//={5,7,1,9,10};
    char seguir;
    int posicion;
    int acumulador;

    acumulador = 0;

    InicializarVector(lista, TAM, -1);


    CargarVector(lista,TAM);


    for(int i=0; i<TAM; i++)
    {
       if(lista[i]!=-1)
       {
           acumulador+=lista[i];
       }
    }

    printf("El total acumulado es: %d\n", acumulador);

    printf("La lista de numeros es: \n");
    for(int o=0; o<TAM; o++)
    {
        if(lista[o]!=-1)
        {
             printf("%d\n", lista[o]);
        }

    }


    return 0;
}
void InicializarVector(int vector[], int size, int inicial)
{
    for(int i = 0; i<size; i++)
    {
        vector[i] = inicial; //valor ilogico para inicializar
    }
}
void CargarVector(int vector[], int size)
{
    int numero;
    int posicion;
    char seguir;
    do
    {
        printf("Ingrese un numero: ");
        scanf("%d", &numero);
        printf("Ingrese la posicion dentro de la lista (1 a 5): ");
        scanf("%d", &posicion);
        /*validar >0 y <= size*/

        /*
        vector[posicion-1] = numero;

        printf("Quiere ingresar otro numero? s/n");
        __fpurge(stdin);
        scanf("%c", &seguir);

    }while(seguir=='s');
}
*/
