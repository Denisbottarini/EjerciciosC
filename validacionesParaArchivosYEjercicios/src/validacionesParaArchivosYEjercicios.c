/*
 ============================================================================
 Name        : validacionesParaArchivosYEjercicios.c
 Author      : Denis Bottarini
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */
#include <stdio.h>
#include <stdlib.h>
#include "validaciones.h"
#include <string.h>
//#define LEN


typedef struct{

	int id;
	char name[100];
	int grade;

}sStudent;

int readNamesTXT(sStudent arrayStudent[], char *path);

int main(void) {

	setbuf(stdout, NULL);

	sStudent arrayStudent[10];




	if (readNamesTXT(arrayStudent, "archivo.csv") == 0) {

		printf("SE LEYO CORRECTAMENTE.\n");

	} else {

		printf("NO SE PUDO LEER ARCHIVO.\n");
	}

	return EXIT_SUCCESS;
}



int readNamesTXT(sStudent arrayStudent[], char *path) {
	FILE *pArchive;
	int rtn = -1;
	//int len;
	int ammount;
	int i = 0;
	char bufferauxId[100];
	char bufferauxName[100];
	char bufferauxGrade[10];
	sStudent auxStudent;

	pArchive = fopen("archivo.csv", "r");



	if (pArchive != NULL) {


		ammount = fscanf(pArchive, "%[^,],%[^,],%[^\n]\n", bufferauxId, bufferauxName, bufferauxGrade);
		while (!feof(pArchive) && i < 10) {
			rtn = -1;
			//0 FALSO,
			//CUALQUIER OTRO NUMERO VERDADERO
			ammount = fscanf(pArchive, "%[^,],%[^,],%[^\n]\n", bufferauxId, bufferauxName, bufferauxGrade);


			if (ammount != 3) {

				if (feof(pArchive)) {

					break;
				} else {
					printf("ERROR.\n");
					break;
				}

			}

			auxStudent.id=atoi(bufferauxId);
			strncpy(auxStudent.name,bufferauxName,100);
			auxStudent.grade=atoi(bufferauxGrade);

			arrayStudent[i]=auxStudent;


			printf("FREAD: %d %s %d \n", arrayStudent[i].id, arrayStudent[i].name, arrayStudent[i].grade);
			i++;
			rtn=0;

		}

	}
	fclose(pArchive);
	return rtn;
}

////////------------------------EJERCICIOS 18.0 ----------------------------////////////

/*
 Ejercicio 18-0:

 Guardar en una variable nombre y apellido. Guardar el dato en un archivo de texto, leerlo y luego
 mostrarlo.

 */


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Validaciones.h"

int main(void) {
	setbuf(stdout, NULL);

	char lastName[30];
	int amountWrite;
	int amountRead;
	int length;
	char fullNameDos[30];
	FILE *pFile;

	if(getString(lastName, "Ingrese Nombre completo(max 30): ", "Supero la cantidad permitida\nReingrese\n", 30)){

		printf("Se tomo el dato con exito\n");

	}else{

		printf("Rompiste todo master");
	}

	pFile = fopen("Archivo.txt","w");

	if(pFile != NULL){

		length = strlen(lastName);

		amountWrite = fwrite(lastName, sizeof(char), length, pFile); //Esto se usa para escribir en el archivo.

		if(amountWrite < length){

			printf("ERROR");

		}else{

			printf("Se escribio %s que son: %d chars", lastName, amountWrite);

		}

		fclose(pFile);

	}else{

		printf("No se pudo abrir el archivo");
	}

	//ARRANCA PARA MOSTRAR.....

	pFile = fopen("Archivo.txt","r");

	if(pFile == NULL){

		printf("No se puede abrir el archivo\n");

	}else{

		while(!feof(pFile)){

			amountRead = fscanf(pFile, "%s", fullNameDos); //Esta remplaza la de abajo!!

			//amountRead = fread(fullNameDos, sizeof(char), length, pFile);
			//fullNameDos[5] = '\0'; ESTO ASI DARIA BIEN!!

			if(amountRead < strlen(lastName)){

				if(feof(pFile)){

					break;

				}else{

					printf("\nNo se puede mostrar\n");
					break;
				}

			}

		}
			printf("\n%s\n", fullNameDos);
	}

	fclose(pFile);

	return (EXIT_SUCCESS);
}


