#include "funciones.h"


int Menu(char mensaje1[],char mensaje2[],char mensaje3[],char mensaje4[],char mensaje5[],char mensaje6[],int opcion,int x,int y)
{
	printf("%s(%d)",mensaje1,x);
	printf("%s(%d)",mensaje2,y);
	printf("%s",mensaje3);
	printf("%s",mensaje4);
	printf("%s",mensaje5);
	printf("%s",mensaje6);
	scanf("%d",&opcion);


	return opcion;
}

int IngresarOperando(int operando)
{

	printf("ingrese operando: ");
	scanf("%d",&operando);


	return operando;
}

int CalcularOperaciones(int x,int y)
{

	int suma;
	int resta;
	int multiplicacion;
	float division;
	long int factorialX;
	long int factorialY;
	int retorno;

	retorno = 0;

		if((x!=0 && y!=0) || (x==0 && y!=0) || (x!=0 && y==0))
		{
			suma = SumarOperandos(x,y);
			resta = RestarOperandos(x,y);
			multiplicacion = MultiplicarOperandos(x,y);
			division = DividirOperandos(x,y);
			factorialX = CalcularFactorial(x);
			factorialY = CalcularFactorial(y);
			if((suma >= -1 || suma <= -1) && (resta >= -1 || resta <= -1) && (multiplicacion >= -1 || multiplicacion <= -1) && (division >= -1 || division<=-1) && (factorialX != 0) && (factorialY != 0))
			{
				retorno = 1;
			}

		}


		return retorno;
}
int SumarOperandos(int x,int y)
{
	int suma;

	suma = -1;

	suma = x + y;


	return suma;
}
int RestarOperandos(int x, int y)
{
	int resta;

	resta = -1;

	resta = x - y;

	return resta;
}
int MultiplicarOperandos(int x, int y)
{
	int multiplicacion;

	multiplicacion = -1;

	multiplicacion = x * y;



	return multiplicacion;
}
float DividirOperandos(int x,int y)
{
	float division;

	division = -1;

	division = (float)x/y;


	return division;
}
long int CalcularFactorial(int operando)
{
	long factorial;
	int i;

	factorial = 1;

	for(i=operando;i>0;i--)
	{
		factorial= factorial * i;
	}




	return factorial;
}

int InformarResultados(int x,int y)
{
	int suma;
	int resta;
	int multiplicacion;
	float division;
	long int factorialX;
	long int factorialY;
	int retorno;

	retorno = 0;

	if((x!=0 && y!=0) || (x==0 && y!=0) || (x!=0 && y==0))
	{
		suma = SumarOperandos(x,y);
		resta = RestarOperandos(x,y);
		multiplicacion = MultiplicarOperandos(x,y);
		division = DividirOperandos(x,y);
		factorialX = CalcularFactorial(x);
		factorialY = CalcularFactorial(y);

		printf("ESTOS SON LOS RESULTADOS:\n");
		printf("El resultado de %d + %d es %d\n",x,y,suma);
		printf("El resultado de %d - %d es %d\n",x,y,resta);
		printf("El resultado de %d * %d es %d\n",x,y,multiplicacion);
		if(y != 0)
		{
			printf("El resultado de %d / %d es %.2f\n",x,y,division);
		}
		else
		{
			printf("No fue posible dividir por 0\n");
		}
		if(x < 0 && y < 0)
		{
			printf("No fue posible calcular el factorial de %d y %d\n",x,y);
		}
		else
		{
			if((x > 0 && y < 0) || (x==0 && y < 0))
			{
				printf("El factorial de %d es %ld pero no fue posible calcular el factorial de %d\n",x,factorialX,y);
			}
			else
		   {
			   if((y > 0 && x < 0) || (y==0 && x < 0))
			   {
				   printf("El factorial de %d es %ld pero no fue posible calcular el factorial de %d\n",y,factorialY,x);
			   }
			   else
			   {
				printf("El factorial de %d es %ld y el fatorial de %d es %ld\n",x,factorialX,y,factorialY);
			   }
		   }
		}
		retorno = 1;
	}








	return retorno;
}





