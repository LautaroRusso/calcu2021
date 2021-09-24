/*
 ============================================================================
 Name        : Tp1_Lab1.c
 Author      : Lautaro Russo
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "operaciones_utn.h"

int main(void) {

		setbuf(stdout,NULL);

		int opcion;
		int estadoPrimerNumero;
		int estadoSegundoNumero;
		int estadoDivision;
		int estadoResultado;
		float numeroUno;
		float numeroDos;
		float resultadoSuma;
		float resultadoResta;
		float resultadoProducto;
		float resultadoDivision;
		float resultadoPrimerFactorial;
		float resultadoSegundoFactorial;

		opcion = 0;
		estadoPrimerNumero = -1;
		estadoSegundoNumero = -1;
		estadoDivision = -1;
		estadoResultado = -1;

		while(opcion!=5)
		{
			printf("\n============================================================\nMenu:\n 1.INGRESAR 1ER OPERANDO %.2f \n 2.INGRESAR 2DO OPERANDO %.2f \n 3.CALCULAR TODAS LAS OPERACIONES \n 4.INFORMAR RESULTADOS \n 5.SALIR\n============================================================\n>",numeroUno, numeroDos);
			scanf("%d",&opcion);

			switch(opcion)
			{
				case 1: //Ingresar 1er operando
					printf("\nOPCION 1\n");
					pedirFloatAUsuario(&numeroUno);
					estadoPrimerNumero = 0;
					printf("\nPrimer numero tomado\n");
					break;

				case 2: // Ingresar 2do operando
					printf("\nOPCION 2\n");
					pedirFloatAUsuario(&numeroDos);
					estadoSegundoNumero = 0;
					printf("\nSegundo numero tomado\n");
					break;

				case 3: //Calcular todas las operaciones
					if (estadoPrimerNumero == 0 && estadoSegundoNumero == 0)
					{
					operacionSuma(numeroUno,numeroDos,&resultadoSuma);
					operacionResta(numeroUno,numeroDos,&resultadoResta);
					operacionProducto(numeroUno,numeroDos,&resultadoProducto);
					estadoDivision=operacionDivision(numeroUno,numeroDos,&resultadoDivision);
					operacionFactorial(numeroUno, &resultadoPrimerFactorial);
					operacionFactorial(numeroDos, &resultadoSegundoFactorial);

					printf("\n Operaciones realizadas\n");
					estadoResultado = 0;
					}
					else
					{
						printf("\n ERROR, para realizar las operaciones debe ingresar 2 numeros, con la opcion 1 y 2 del menu\n "); //valida si estan ingresado los 2 numero necesarios, sino te pide que vuelvas a hacerlo
						if (estadoPrimerNumero == -1)
						{
							printf("\n En este caso, olvido ingresar el primer numero");
						}
						else
						{
							printf("\n En este caso, olvido ingresar el segundo numero");
						}

					}


					estadoPrimerNumero = -1;
					estadoSegundoNumero = -1;

					break;

				case 4: //Informar resultados
					if (estadoResultado == 0)
					{
					printf(" El resultado de %.3f + %.3f es: %.3f\n", numeroUno, numeroDos, resultadoSuma);
					printf(" \nEl resultado de %.3f - %.3f es: %.3f\n", numeroUno, numeroDos, resultadoResta);
					printf(" \nEl resultado de %.3f * %.3f es: %.3f\n", numeroUno, numeroDos, resultadoProducto);
						if(estadoDivision == 0)
						{
							printf(" \nEl resultado de %.3f / %.3f es: %.3f\n", numeroUno, numeroDos, resultadoDivision);	//divisor tiene que ser dsitinto a 0
						}
						else
						{
							printf("\nEl resultado de %.3f / %.3f, no es posible de resolver ya que el divisor es 0\n",numeroUno, numeroDos);
						}


						if(numeroUno < 0 )
						{
							printf("\n El factorial del 1er operando no es posible de realizar ya que el numero es negativo\n");  	//informar si lso factoriales son negativos
						}
						else
						{
							printf("\n El factorial de !%d es: %d \n",(int)numeroUno, (int)resultadoPrimerFactorial);
						}

						if (numeroDos < 0)
						{
							printf("\n El factorial del 1er operando no es posible de realizar ya que el numero es negativo\n");
						}
						else
						{
							printf("\n El factorial de !%d es: %d \n",(int)numeroDos, (int)resultadoSegundoFactorial);
						}
					}
					else
					{
						printf("\n ERROR, para mostrar los resultados de las operaciones debe primero realizar las mismas con la opcion 3");
					}
					estadoResultado = -1;

					break;

				case 5: //Salida del programa
					estadoPrimerNumero = -1;
					estadoSegundoNumero = -1;
					estadoResultado = -1;
					printf("Programa Terminado");
					break;
			}
		}






	return EXIT_SUCCESS;
}
