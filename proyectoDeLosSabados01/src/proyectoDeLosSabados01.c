/*
============================================================================
 Name        : proyectoDeLosSabados01.c
 Author      : Denis Bottarini
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
============================================================================
1.  Se ingresan 5 importes,
ingresar producto (zapatillas -- joyas -- lentes)
pais de origen ('C' para China, 'U' para Uruguay o 'P' para Paraguay).
Calcular y mostrar:
a.  Mínimo importe con su pais 													//Busca de un minimo
b.  Promedio importe 															//Promedio
c.  Cantidad de productos de China (c)											//Contador
d.  Sobre el mínimo encontrado aplicar un descuento del 10% a dicho importe. 	//Calculo
*/

//#include <stdlib.h>
//#include <ctype.h>
//#define CANTIDAD_DE_IMPORTES_INGRESADOS 5

#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	setbuf(stdout, NULL);

	int i;
	char producto;
	char ingresarPaisDeOrigen;
	int precioDelProducto;
	//A)
	int flag;
	int minimoImporte;
	int paisConPrecioMasBajo;
	//B)
	int acumuladorImporte;
	int promedioImporte;
	//C)
	int contadorProductosDeChina;
	//D)
	int descuentoDel10;

	flag = 0;
	acumuladorImporte = 0;
	contadorProductosDeChina = 0;


			for(i = 0; i < 1; i++)
			{

				do
				{
					printf("\nIngresar los productos, pueden ser (zapatillas) , (joyas) , (lentes): ");
					fflush(stdin);
					scanf("%c", &producto);
				}while(!(producto == 'z' || producto == 'j' || producto == 'l'));

				do
				{
					printf("\nIngresar pais de origen ('C' para China, 'U' para Uruguay o 'P' para Paraguay): ");
					fflush(stdin);
					scanf("%c", &ingresarPaisDeOrigen);
				}while(!(ingresarPaisDeOrigen == 'c' || ingresarPaisDeOrigen == 'u' || ingresarPaisDeOrigen == 'p'));

				do
				{
					printf("\nIngresar precio del producto: ");
					fflush(stdin);
					scanf("%d", &precioDelProducto);
				}while(!(precioDelProducto >= 1000));

				//B)

				acumuladorImporte+= precioDelProducto;

				//A)
				if(flag == 0 || minimoImporte > precioDelProducto)
				{
					minimoImporte = precioDelProducto;
					paisConPrecioMasBajo = ingresarPaisDeOrigen;
				}

				//C)
				if(ingresarPaisDeOrigen == 'c')
				{
					contadorProductosDeChina++;
				}

			}

			//B)
			promedioImporte = acumuladorImporte / i;

			//A) Mínimo importe con su pais
			printf("\nMínimo importe: %d , con su pais: %c\n", minimoImporte , paisConPrecioMasBajo);
			//B) Promedio importe
			printf("\nPromedio importe: %d\n", promedioImporte);
			//C) Cantidad de productos de China (c)
			printf("\nCantidad de productos de China: %d\n", contadorProductosDeChina);
			//D) Sobre el mínimo encontrado aplicar un descuento del 10% a dicho importe
			if(minimoImporte > 0){
			descuentoDel10 = minimoImporte * 0.9;
			printf("\nEl descuento del 10% sobre el minimo encontrado es: %d\n", descuentoDel10);
			}

	return 0;
}
/*
 float importeIngresado;

 char paisDeOrigenIngresado;

 for(int i = 0; i < CANTIDAD_DE_IMPORTES_INGRESADOS; i++){
 printf("Dame el importe %d: ", i+1);
 scanf("%f", &importeIngresado);
 __fpurge(stdin);
 printf("Dame el pais de origen [C-China] [U-Uruguay][P-Paraguay]: ");
 scanf("%c", &paisDeOrigenIngresado);
 paisDeOrigenIngresado = toupper(paisDeOrigenIngresado); //Pasa a mayuscula
 while(paisDeOrigenIngresado != 'C' && paisDeOrigenIngresado != 'U' && paisDeOrigenIngresado != 'P'){
 __fpurge(stdin);
 printf("[ERROR] Dame el pais de origen valido [C-China] [U-Uruguay][P-Paraguay]: ");
 scanf("%c", &paisDeOrigenIngresado);
 paisDeOrigenIngresado = toupper(paisDeOrigenIngresado); //Pasa DE NUEVO a mayuscula
 }
 //printf("IMPORTE: %f - PAIS: %c\n", importeIngresado, paisDeOrigenIngresado);
 }
	*/

