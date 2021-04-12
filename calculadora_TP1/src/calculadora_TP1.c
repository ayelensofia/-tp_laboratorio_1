#include <stdlib.h>
#include "funciones.h"
int main(void)
{
	setbuf(stdout, NULL);
	int A;
	int B;
	int opcion;
	int pudoInformar;
	int pudoCalcular;

	A = 0;
	B = 0;

	do
	{
		opcion = Menu("1.Ingresar primer operando","\n2.Ingresar segundo operando","\n3.Calcular\n","4.Informar resultados\n","5.Salir\n","Seleccione opcion: ",opcion,A,B);
		switch(opcion)
		{
		case 1:

			A = IngresarOperando(A);

			break;
		case 2:
			B = IngresarOperando(B);
			break;
		case 3:

			pudoCalcular = CalcularOperaciones(A,B);
			switch(pudoCalcular)
			{
			case 0:
				printf("No se pudo realizar calculos. Asegurese de ingresar operandos\n");
				break;
			case 1:
				printf("Calculos realizados!\n");
				break;
			}


			break;
		 case 4:

			pudoInformar = InformarResultados(A,B);
			if(pudoInformar == 0)
			{
				printf("No se lograron informar los resultados\n");
			}
			A=0;
			B=0;
			break;

		 case 5:
			 printf("Fin del programa!\n");
			 break;

		 default:
			 printf("Ingrese opcion valida\n");


		}
	}while(opcion!=5);





	return EXIT_SUCCESS;
}

