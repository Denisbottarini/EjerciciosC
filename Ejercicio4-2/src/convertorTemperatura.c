/*
 * convertorTemperatura.c
 *
 *  Created on: 17 sept 2022
 *      Author: denis
 */
#include <stdio.h>
#include <stdlib.h>

float celsiusAFahrenheit(float celsius) {
    return (celsius * 1.8) + 32;
}

float fahrenheitACelsius(float fahrenheit) {
    return (fahrenheit - 32) / 1.8;
}
