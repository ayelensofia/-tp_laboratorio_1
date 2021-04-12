#ifndef FUNCIONES_H_
#define FUNCIONES_H_
#include <stdio.h>

/**
 * @fn int Menu(char[], char[], char[], char[], char[], char[], int, int, int)
 * @brief Muestra el menu de opciones de la calculadora
 *
 * @param Muestra la opcion para ingresar el primer operando
 * @param Muestra la opcion para ingresar el segundo operando
 * @param Muestra la opcion para calcular operaciones
 * @param Muestra la opcion para informar los resultados
 * @param Muestra la opcion para salir del programa
 * @param Muestra el mensaje para seleccionar una opcion
 * @param Opcion que ingresa el usuario
 * @param Primer operando
 * @param Segundo operando
 * @return retorna la opcion seleccionada por el usuario
 */
int Menu(char[],char[],char[],char[],char[],char[],int,int,int);
/**
 * @fn int IngresarOperando(int)
 * @brief Permite ingresar un operando
 *
 * @param operando ingresado por el usuario
 * @return retorna el operando ingresado por el usuario para mostrarlo fuera de la funcion
 */
int IngresarOperando(int);
/**
 * @fn int CalcularOperaciones(int, int)
 * @brief LLama a las funciones que realizan distintas operaciones
 *
 * @param Primer operando
 * @param Segundo operando
 * @return Si no logro calcular retorna 0 y si lo logro retorna 1
 */
int CalcularOperaciones(int,int);
/**
 * @fn int SumarOperandos(int, int)
 * @brief Realiza la suma entre los dos operandos ingresados
 *
 * @param Primer operando
 * @param Segundo operando
 * @return Si no logro sumar retorna -1 y si lo logro retorna la suma entre los dos operandos
 */
int SumarOperandos(int,int);
/**
 * @fn int RestarOperandos(int, int)
 * @brief Realiza la resta entre los dos operandos ingresados
 *
 * @param Primer operando
 * @param Segundo operando
 * @return Si no logro restar retorna -1 y si lo logro retorna la resta entre los dos operandos
 */
int RestarOperandos(int,int);
/**
 * @fn int MultiplicarOperandos(int, int)
 * @brief Realiza la multiplicacion entre los dos operandos ingresados
 *
 * @param Primer operando
 * @param Segundo operando
 * @return Si no logro multiplicar retorna -1 y si lo logro retorna el producto entre los dos operandos
 */
int MultiplicarOperandos(int,int);
/**
 * @fn float DividirOperandos(int, int)
 * @brief Realiza la division entre los dos operandos ingresados
 *
 * @param Primer operando
 * @param Segundo operando
 * @return Si no logro dividir retorna -1 y si lo logro retorna la division entre los dos operandos
 */
float DividirOperandos(int,int);
/**
 * @fn long int CalcularFactorial(int)
 * @brief Calcula el factorial de un operando
 *
 * @param operando ingresado
 * @return retorna el factorial del operando ingresado
 */
long int CalcularFactorial(int);
/**
 * @fn int InformarResultados(int, int)
 * @brief Muestra los resultados de todas las operaciones
 *
 * @param Primer operando
 * @param Segundo operando
 * @return Si no logro mostrar los resultados retorna 0 y si lo logro retorna 1
 */
int InformarResultados(int,int);
#endif /* FUNCIONES_H_ */
