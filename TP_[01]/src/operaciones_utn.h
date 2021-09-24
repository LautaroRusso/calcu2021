/*
 * operaciones_utn.h
 *
 *  Created on: 21 sep. 2021
 *      Author: Lautaro Russo
 */

#ifndef OPERACIONES_UTN_H_
#define OPERACIONES_UTN_H_
#include <stdio.h>
#include <stdlib.h>

void pedirFloatAUsuario(float* num);
void operacionSuma(float numeroUno, float numeroDos, float* pResultado);
void operacionResta(float numeroUno, float numeroDos, float* pResultado);
void operacionProducto(float numeroUno, float numeroDos, float* pResultado);
int operacionDivision(float numeroUno, float numeroDos, float* pResultado);
int operacionFactorial(int numero, float* pResultado);

#endif /* OPERACIONES_UTN_H_ */
