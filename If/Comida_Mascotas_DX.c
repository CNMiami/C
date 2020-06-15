#include <stdio.h>

const char OPC_1_MAY = 'A';
const char OPC_1_MIN = 'a';
const char OPC_2_MAY = 'B';
const char OPC_2_MIN = 'b';
const char OPC_3_MAY = 'C';
const char OPC_3_MIN = 'c';

#define MARCA_G1 "Royal Canin"
#define MARCA_G2 "Cat Chow"
#define MARCA_G3 "Whiskas"

const float PRECIO_MG1 = 300;
const float PRECIO_MG2 = 170;
const float PRECIO_MG3 = 150;

#define MARCA_P1 "Royal Canin"
#define MARCA_P2 "Dog Chow"
#define MARCA_P3 "Dogui"

const float PRECIO_MP1 = 300;
const float PRECIO_MP2 = 120;
const float PRECIO_MP3 = 75;

const int CANT_MESES = 12;

int main ()
{
	int cant_mascotas;
	float kg_comida, total;
	char tipo_mascota, marca_comida;

	printf("Que tipo de mascota tenes?\n");
	printf("[%c] Gato\n", OPC_1_MAY);
	printf("[%c] Perro\n", OPC_2_MAY);
	scanf(" %c", &tipo_mascota);

	if (tipo_mascota == OPC_1_MAY || tipo_mascota == OPC_1_MIN)
	{
		printf("Cuantos gatos tenes?\n");
		scanf("%i", &cant_mascotas);
		printf("Cuantos kilos de comida compras aproximadamente por mes?\n");
		scanf("%f", &kg_comida);
		printf("Que marca compras?\n");
		printf("[%c] %s - $%.2f c/kg\n", OPC_1_MAY, MARCA_G1, PRECIO_MG1);
		printf("[%c] %s - $%.2f c/kg\n", OPC_2_MAY, MARCA_G2, PRECIO_MG2);
		printf("[%c] %s - $%.2f c/kg\n", OPC_3_MAY, MARCA_G3, PRECIO_MG3);
		scanf(" %c", &marca_comida);

		if (marca_comida == OPC_1_MAY || marca_comida == OPC_1_MIN)
		{
			total = (kg_comida * PRECIO_MG1 * CANT_MESES);
		}

		else if (marca_comida == OPC_2_MAY || marca_comida == OPC_2_MIN)
		{
			total = (kg_comida * PRECIO_MG2 * CANT_MESES);
		}

		else if (marca_comida == OPC_3_MAY || marca_comida == OPC_3_MIN)
		{
			total = (kg_comida * PRECIO_MG3 * CANT_MESES);
		}

		if ((marca_comida != OPC_1_MAY) && (marca_comida != OPC_1_MIN) && (marca_comida != OPC_2_MAY) && (marca_comida != OPC_2_MIN) && (marca_comida != OPC_3_MAY) && (marca_comida != OPC_3_MIN))
		{
			printf("Opcion no valida.");
		}

		else
		{
			printf("Con una bolsa de %.2fkg. para %i gato/s, se gasta en %i mes/es: $%.2f.", kg_comida, cant_mascotas, CANT_MESES, total);
		}
	}

	else if (tipo_mascota == OPC_2_MAY || tipo_mascota == OPC_2_MIN)
	{
		printf("Cuantos perros tenes?\n");
		scanf("%i", &cant_mascotas);
		printf("Cuantos kilos de comida compras aproximadamente por mes?\n");
		scanf("%f", &kg_comida);
		printf("Que marca compras?\n");
		printf("[%c] %s - $%.2f c/kg\n", OPC_1_MAY, MARCA_P1, PRECIO_MP1);
		printf("[%c] %s - $%.2f c/kg\n", OPC_2_MAY, MARCA_P2, PRECIO_MP2);
		printf("[%c] %s - $%.2f c/kg\n", OPC_3_MAY, MARCA_P3, PRECIO_MP3);
		scanf(" %c", &marca_comida);

		if (marca_comida == OPC_1_MAY || marca_comida == OPC_1_MIN)
		{
			total = (kg_comida * PRECIO_MP1 * CANT_MESES);
		}

		else if (marca_comida == OPC_2_MAY || marca_comida == OPC_2_MIN)
		{
			total = (kg_comida * PRECIO_MP2 * CANT_MESES);
		}

		else if (marca_comida == OPC_3_MAY || marca_comida == OPC_3_MIN)
		{
			total = (kg_comida * PRECIO_MP3 * CANT_MESES);
		}

		if ((marca_comida != OPC_1_MAY) && (marca_comida != OPC_1_MIN) && (marca_comida != OPC_2_MAY) && (marca_comida != OPC_2_MIN) && (marca_comida !=OPC_3_MAY) && (marca_comida != OPC_3_MIN))
		{
			printf("Opcion no valida.");
		}

		else
		{
			printf("Con una bolsa de %.2fkg. para %i perro/s, se gasta en %i mes/es: $%.2f.", kg_comida, cant_mascotas, CANT_MESES, total);
		}
	}

	else
	{
		printf("Opcion no valida.");
	}


	return 0;
}
