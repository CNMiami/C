#include <stdio.h>


const int TIEMPO_ENTREGA = 90;
const int OPC_1 = 1;
const int OPC_2 = 2;

int main ()
{
	int paquete = 1;
	int condiciones = 1;

	printf("Nos interesa su opinion! Por favor conteste el siguiente cuestionario asi mejoramos nuestros servicios.\n");
	printf("Cuantos dias tardo en llegar su paquete?\n");
	scanf("%i", &paquete);

	if (paquete > TIEMPO_ENTREGA)
	{
		printf("El paquete llego demasiado tarde, pesimo servicio! */***");
	}

	else
	{
		printf("En que condiciones llego su paquete?\n");
		printf("[%i] Buenas\n", OPC_1);
		printf("[%i] Malas\n", OPC_2);
		scanf("%i", &condiciones);

		if (condiciones == OPC_1)
		{
			printf("El paquete llego a tiempo y en buenas condiciones, todo muy bien. ***/***");
		}

		else if (condiciones == OPC_2)
		{
			printf("El paquete llego a tiempo pero en malas condiciones. **/***");
		}

		else
		{
			printf("Opcion no valida.");
		}
	}


	return 0;
}
