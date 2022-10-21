/*
 ============================================================================
 Name        : funciones_para_archivos.c
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

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//#define LEN

int writeNamesTXT(char names[][20], char *path);
int readNamesTXT(char names[][20], char *path);

int main(void) {

	setbuf(stdout, NULL);

	char Names[5][20] =
			{ "Juan\n", "Carmen\n", "Mirtha\n", "Jorge\n", "Luis\n" };

	if (writeNamesTXT(Names, "archive.txt") == 0) {

		printf("SE ESCRIBIO CORRECTAMENTE.\n");

	} else {

		printf("NO SE PUDO ABRIR ARCHIVO.\n");
	}

	if (readNamesTXT(Names, "archive.txt") == 0) {

		printf("SE LEYO CORRECTAMENTE.\n");

	} else {

		printf("NO SE PUDO LEER ARCHIVO.\n");
	}

	return EXIT_SUCCESS;
}

int writeNamesTXT(char names[][20], char *path) {

	FILE *pArchive;
	int rtn = -1;
	int len;
	int ammount;

	pArchive = fopen("archive.txt", "w");

	if (pArchive != NULL) {

		for (int i = 0; i < 5; i++) {

			len = strlen(names[i]);
			ammount = fwrite(names[i], sizeof(char), len, pArchive);

			printf(" & %p\n", &names[i]);
			printf("%s\n", names[i]);

			if (len != ammount) {
				rtn = -1;
				printf("No se escribio correctamente");
				break;
			}

			rtn = 0;
		}
	} else {

		rtn = -1;
	}
	fclose(pArchive);

	return rtn;
}

int readNamesTXT(char names[][20], char *path) {
	FILE *pArchive;
	int rtn = -1;
	//int len;
	int ammount;
	int i = 0;

	pArchive = fopen("archive.txt", "r");

	if (pArchive != NULL) {

		while (!feof(pArchive) && i < 5) {
			rtn = -1;
			//0 FALSO,
			//CUALQUIER OTRO NUMERO VERDADERO
			ammount = fscanf(pArchive, "%s", names[i]);

			if (ammount != 1) {

				if (feof(pArchive)) {

					break;
				} else {
					printf("ERROR.\n");
					break;
				}

			}

			printf("FREAD: %s\n", names[i]);
			i++;
			rtn=0;

		}

	}
	return rtn;
}

// EJERCICIO 18-0
//
//  int main(void) {
//
//	setbuf(stdout,NULL);
//
//	char NameLastName[LEN];
//
//	FILE *pArchive;
//
//	int len;
//	int ammount;
//
//
//	if(utn_getAlphabeticDescription(NameLastName, "Ingrese Nombre y apellido\n", "ERROR. REINTENTE\n", 4)==0){
//
//
//		pArchive=fopen("archive.txt", "w");
//
//
//		if(pArchive!=NULL){
//
//			len=strlen(NameLastName);
//			ammount=fwrite(NameLastName, sizeof(char), len, pArchive);
//
//			if(ammount<len){
//
//				printf("ERROR");
//
//			}else{
//
//				printf("NOMBRE Y APELLIDO: %s\n", NameLastName);
//
//			}
//
//
//		}else{
//			printf("NO SE PUDO ABRIR ARCHIVO.\n");
//		}
//		fclose(pArchive);
//
//
//	}else{
//
//
//		printf("Sin reintentos\n");
//	}
//
//	return EXIT_SUCCESS;
//}
//
//
