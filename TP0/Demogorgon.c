#include "demogorgon.h"


//Constantes Int
const int DEF_ANIMO = 0;
const int ANIMO_MIN = 1;
const int ANIMO_MAX = 100;

//Constantes Float
const float DEF_PSIQUICA = -0.1F;
const float MAX_PSIQUICA = 370.0F;
const float MIN_PSIQUICA = 67.0F;
const float MULT_ALTO = 3.7F;
const float MULT_MEDIO = 1.3F;
const float MULT_BAJO = 0.7F;
const float PSIQUICA_JUSTA = 65.0F;
const float DEF_MULT = 0.0F;


//Constantes Bool
const bool ANIMO_VERDADERO = true;
const bool ANIMO_FALSO = false;
const bool CONF_VERDADERO = true;
const bool CONF_FALSO = false;

//Nivel de Confianza
const char DEF_CONFIANZA = 'z';
#define CONF_ALTA 'a'
#define CONF_MEDIA 'm'
#define CONF_BAJA 'b'

//Resultado
const char DEF_RESULTADO = 'w';
#define GANO 'g'
#define GANO_JUSTO 'h'
#define RESULT_DESCONOCIDO 'd'


void comienzo_enfrentamiento()
{
	printf ("El enfrentamiento esta por comenzar!\n");
}


int recibir_animo()
{
	int ingreso_animo = DEF_ANIMO;

	printf ("Ingrese el animo de Eleven en un rango del 1 al 100.\n");

	do
	{
		scanf ("%i", &ingreso_animo);

		if (!verificar_animo(ingreso_animo))
		{
			printf ("Ingreso no valido. Intente de nuevo\n");
		}

		else
		{
			printf("Ingreso aceptado.\n");
		}
	}

	while (!verificar_animo(ingreso_animo));


	return ingreso_animo;
}


bool verificar_animo(int animo_ver)
{
	bool animo_estado = ANIMO_VERDADERO;

	if ( (animo_ver < ANIMO_MIN) || (animo_ver > ANIMO_MAX) )
	{
		animo_estado = ANIMO_FALSO;
	}


	return animo_estado;
}


char recibir_confianza()
{
	char ingreso_conf = DEF_CONFIANZA;

	printf ("Ingrese el nivel de confianza que tiene Eleven con sus amigos:\n");
	printf ("Alto [a] - Medio [m] - Bajo [b]\n");

	do
	{
		scanf (" %c", &ingreso_conf);

		if (verificar_confianza(ingreso_conf))
		{
			printf("Ingreso de nivel de confianza correcto.\n");
		}

		else
		{
			printf("Ingreso no correcto.\n");
		}
	}

	while (!verificar_confianza(ingreso_conf));


	return ingreso_conf;
}


bool verificar_confianza(char conf_ver)
{
	bool conf_estado = CONF_FALSO;

	if (conf_ver == CONF_ALTA || conf_ver == CONF_MEDIA || conf_ver == CONF_BAJA)
	{
		conf_estado = CONF_VERDADERO;
	}


	return conf_estado;
}


float recibir_fuerza_psiquica (int nivel_animo, char nivel_conf)
{
	float multiplicador = DEF_MULT;

	switch(nivel_conf)
	{
		case CONF_BAJA:
			multiplicador = MULT_BAJO;
			break;
		case CONF_MEDIA:
			multiplicador = MULT_MEDIO;
			break;
		default:
			multiplicador = MULT_ALTO;
	}


	return calcular_fuerza(nivel_animo, multiplicador);
}


float calcular_fuerza(int nivel_animo, float mult_conf)
{
	return ((float)nivel_animo * mult_conf);
}

void resultado_enfrentamiento(float fuerza_psiquica)
{
	switch(enfrentamiento(fuerza_psiquica))
	{
		case RESULT_DESCONOCIDO:
			printf("\nEleven enfrento al Demogorgon pero no parecia que lo pudiera vencer hasta que \nuna luz cubrio todo el lugar desapareciendo al Demogorgon junto a Eleven.\nFin...?");
			break;
		case GANO_JUSTO:
			printf("\nEleven apenas conto con la fuerza psiquica justa para poder vencer al Demogorgon por lo que quedo debil luego del enfrentamiento!\n");
			break;
		default:
			printf("\nEleven conto con su mayor animo y con la confianza de sus amigos por lo que \nlogro vencer al Demogorgon con su fuerza psiquica!\n");
	}
}


char enfrentamiento (float fuerza_psiquica)
{
	char resultado_enfrentamiento = DEF_RESULTADO;

	if (fuerza_psiquica < PSIQUICA_JUSTA)
	{
		resultado_enfrentamiento = RESULT_DESCONOCIDO;
	}

	else if (fuerza_psiquica < MIN_PSIQUICA)
	{
		resultado_enfrentamiento = GANO_JUSTO;
	}

	else
	{
		resultado_enfrentamiento = GANO;
	}


	return resultado_enfrentamiento;
}
