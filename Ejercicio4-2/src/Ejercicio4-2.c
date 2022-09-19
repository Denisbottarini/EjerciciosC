/*
 ============================================================================
 Name        : Ejercicio4-2.c
 Author      : Denis Bottarini
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 Realizar un programa que permita la carga de temperaturas en celsius y fahrenheit
 validando que las temperaturas ingresadas estén entre el punto de congelación y ebullición del agua para cada tipo de escala.
 Las validaciones se hacen en una biblioteca.
 Las funciones de transformación de fahrenheit a celsius y de celsius a fahrenheit se hacen en otra biblioteca.
 Extra:
 */

#include <stdio.h>
#include <stdlib.h>
#include "validarTemepratura.h"
#include "convertorTemperatura.h"

int main(void) {
	setbuf(stdout, NULL);

	char temperatura;
	float temperaturaCelcius;
	float temperaturaFahrenheit;
	float resultadoConvertirC_F;
	float resultadoConvertirF_C;

	temperatura = validoTipoTemperatura();

	if (temperatura == 'c'){
		temperaturaCelcius = validoRangoTemperaturaCelcius();
		resultadoConvertirC_F = celsiusAFahrenheit(temperaturaCelcius);
		printf("el resultado es: %.2f", resultadoConvertirC_F);
	}else{
		temperaturaFahrenheit = validoRangoTemperaturafahrenheit();
		resultadoConvertirF_C = fahrenheitACelsius(temperaturaFahrenheit);
		printf("el resultado es: %.2f", resultadoConvertirF_C);
	}

	return 0;
}
/*
 Grados celcius = su punto de ebullición del agua es a los 100 y el punto de congelacion es a los 0

 Grados fahrenheit = su punto de ebullición del agua es a los 212 y el punto de congelacion es a los 32

 Cuenta para pasar de Grados fahrenheit a celcius = (32 °F − 32) × 5/9 = 0 °C

 Cuenta para pasar de Grados celcius a fahrenheit = (32 °C × 9/5) + 32 = 89,6 °F
 */
