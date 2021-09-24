/*
 * operaciones_utn.c
 *
 *  Created on: 21 sep. 2021
 *      Author: Lautaro Russo
 */
#include <stdio.h>
#include <stdlib.h>

/**
 *\brief funcion que pide numero float al usuario y lo valida
 *\param utiliza el puntero en el cual se guarda el resultado
 *\return no retorna nada
 */
void pedirFloatAUsuario(float* pNumero)
{
	int estado = 0;

	printf("Ingrese el numero: \n>");
	estado = scanf("%f", pNumero);

	while(estado !=  1)
	{


		estado = scanf("%f", pNumero);
		fflush(stdin);
		printf(" Error. Numero ingresado no es valido.\n Vuelva a intentarlo:\n>");
	}
}
/**
 *\brief funcion que suma 2 valores
 *\param utlitza el 1er operando
 *\param utiliza el 2do operando
 *\param utiliza el puntero en el cual se guarda el resultado
 *\return no retorna nada
 */
void operacionSuma(float numeroUno, float numeroDos, float* pResultado)
{
	*pResultado = numeroUno + numeroDos;
}
/**
 *\brief
 *\param utlitza el 1er operando
 *\param utiliza el 2do operando
 *\param utiliza el puntero en el cual se guarda el resultado
 *\return no retorna nada
 */
void operacionResta(float numeroUno, float numeroDos, float* pResultado)
{
	*pResultado = numeroUno - numeroDos;
}
/**
 *\brief
 *\param utlitza el 1er operando
 *\param utiliza el 2do operando
 *\param utiliza el puntero en el cual se guarda el resultado
 *\return no retorna nada
 */
void operacionProducto(float numeroUno, float numeroDos, float* pResultado)
{
	*pResultado = numeroUno * numeroDos;
}
/**
 *\brief
 *\param utlitza el 1er operando
 *\param utiliza el 2do operando
 *\param utiliza el puntero en el cual se guarda el resultado
 *\return "retorno" el cual se utiliza como estado para ver que la division es posible
 */
int operacionDivision(float numeroUno, float numeroDos, float* pResultado)
{
	int retorno = -1;
	if(numeroDos != 0)
	{
		*pResultado = numeroUno / numeroDos;
		retorno = 0;
	}
	return retorno;
}
/**
 *\brief
 *\param utlitza 1 numero (debe ser entero)
 *\param utiliza el puntero en el cual se guarda el resultado
 *\return "retorno" el cual se utiliza como estado para ver que el factorial es posible
 */
int operacionFactorial(int numero, float* pResultado)
{
	int i;
	int factorial = 1;
	int retorno = -1;
	if (numero > 0)
	{
		i=numero;
		while(i>1)
		{
			factorial = factorial*i;
			i--;
		}
		*pResultado = factorial;
		retorno = 0;
	}
	else
	{
		if(numero==0)
		{
			*pResultado=1;
			retorno=0;
		}

	}
	return retorno;
}

