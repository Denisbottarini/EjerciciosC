/*
 ============================================================================
 Name        : IDautoIncremental.c
 Author      : Denis Bottarini
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

void incrementarId();
//int incrementarId();  SEGUNDO EJEMPLO

int main(void) {
	setbuf(stdout, NULL);

	incrementarId();
	incrementarId();
	incrementarId();
	incrementarId();
	//int algo = incrementarId();   SIRVE PARA EL SEGUNDO EJEMPLO


	return 0;
}
void incrementarId(){

    static int id = 1000;
    id+= 1000;

    printf("El id: %d\n", id);

}
/*
int incrementarId(){ // SEGUNDO EJEMPLO

    static int id = 1000;
    id+= 1000;

    return id++;
}
*/


/*
 *
 *La variable statica reemplaza a las variables globales
 *NO PODEMOS USAR VARIABLES GLOBALES
 *SI PODEMOS USAR VARIABLES STATICAS
 *
 *
 */
