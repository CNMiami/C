#include <stdio.h>
#include "demogorgon.h"

const int DEF_ANIMO_JUGADOR = 0;
const char DEF_NIVEL_CONFIANZA_JUGADOR = 'w';
const float DEF_FUERZA_PSIQUICA = -1.0F;


int main()
{
	int animo = DEF_ANIMO_JUGADOR;
	char nivel_conf = DEF_NIVEL_CONFIANZA_JUGADOR;
	float fuerza_psiquica = DEF_FUERZA_PSIQUICA;

	comienzo_enfrentamiento();
	
	animo = recibir_animo();

	printf("Animo recibido: %i\n", animo);

	nivel_conf = recibir_confianza();

	printf("Confianza recibida: %c\n", nivel_conf);

	fuerza_psiquica = recibir_fuerza_psiquica(animo, nivel_conf);

	printf("\nFuerza psiquica: %f", fuerza_psiquica);

	resultado_enfrentamiento(fuerza_psiquica);


	return 0;
}