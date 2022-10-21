/*
 ============================================================================
 Name        : Ejercicio18-0.c
 Author      : Denis Bottarini
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 Guardar en una variable nombre y apellido. Guardar el dato en un archivo de texto, leerlo y luego mostrarlo.

 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
	setbuf(stdout, NULL);

	char nombreYApellido[] = "Denis Bottarini";
	int longitud;
	int cantidad;
	FILE *parch;

	if ((parch = fopen("prueba.txt", "w")) == NULL) //Se abre en modo escritura
	{
		printf("\nEl archivo no puede ser abierto");
		exit(1);
	}

	longitud = strlen(nombreYApellido);

	cantidad = fwrite(nombreYApellido, sizeof(char), longitud, parch); //Se escribe al archivo
	if (cantidad < longitud)
		printf("\nError al escribir el archivo");
	else
		printf("\nSe escribieron %d caracteres", cantidad);
	fclose(parch);

	return 0;
}

/*
 struct a {
 char nombre[10];
 int edad;
 };
 int main(void) {
 FILE *bin;
 struct a pers;
 int cant;
 if ((bin = fopen("bin.dat", "rb")) == NULL) {
 printf("No se pudo abrir el archivo");
 exit(1);
 }
 while (!feof(bin)) {

 cant = fread(&pers, sizeof(pers), 1, bin);
 if (cant != 1) {
 if (feof(bin))
 break;
 else {
 printf("No leyo el ultimo registro");
 break;
 }
 }
 printf("\n%s\t%d", pers.nombre, pers.edad);

 }
 fclose(bin);

 }
 */
