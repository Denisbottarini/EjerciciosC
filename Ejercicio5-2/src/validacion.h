/*
 * validacion.h
 *
 *  Created on: 28 sep. 2022
 *      Author: denis
 */

#ifndef VALIDACION_H_
#define VALIDACION_H_

/// @brief = valida que la cadena sea numerica
/// @param cadena = cadena de caracteres a ser analizada
/// @return = retorna 1 si es correcto y 0 caso contrario
int esNumerica(char cadena[]);
/// @brief = verifica si la cadena ingresada es numerica
/// @param pResultado = puntero al espacio de memoria donde se dejara el resultado de la funcion
/// @return = retorna 1 si se obtiene un numero entero y -1 si no
int getInt(int *pResultado);
/// @brief = valido el ingreso de un numero dentro de un rango determinado con una cierta cantidadn de reintentos
/// @param pResultado = le envio un espacio de memoria para el resultado
/// @param mensaje = le muestro al usuario un mensaje, para indicarle algunas acciones para poder fluir en el programa
/// @param mensajeError = le muestro al usuario un mensaje de ERROR al realizar algo contrario a lo solicitado en el mensaje anterior
/// @param minimo = valido el minimo de un numero que pueda llegar a ingresar el usuario
/// @param maximo = valido el maximo de un numero que pueda llegar a ingresar el usuario
/// @param reintentos = le indico una cantidad de reintentos, al no colocar la opcion correcta
/// @return = retorna 1 para indicar que esta mal y 0 caso contrario
int utn_getNumero(int *pResultado, char *mensaje, char *mensajeError, int minimo, int maximo, int reintentos);

#endif /* VALIDACION_H_ */
