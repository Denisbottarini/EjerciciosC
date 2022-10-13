/*
 ============================================================================
 Name        : doble_ordenamiento_array.c
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



	return 0;
}
int sortPerTypeAndDescriptionVehicle(sVehicle arrayVehicle[], int len) {

	int rtn = ERROR;
	sVehicle auxVehicle;

	if (arrayVehicle != NULL && len > 0) {
		for (int i = 0; i < len - 1; i++) {
			for (int j = i + 1; j < len; j++) {

				if (arrayVehicle[i].isEmpty == OCCUPIED
						&& arrayVehicle[j].isEmpty == OCCUPIED) {

					if (arrayVehicle[i].typeId > arrayVehicle[j].typeId
							|| (arrayVehicle[i].typeId == arrayVehicle[j].typeId
									&& (stricmp(arrayVehicle[i].description,
											arrayVehicle[j].description)) > 0)) {
						auxVehicle = arrayVehicle[i];
						arrayVehicle[i] = arrayVehicle[j];
						arrayVehicle[j] = auxVehicle;
					}
					rtn = OK;
				}
			}
		}

	}

	return rtn;
}
