#include <stdio.h>


//Constantes de Texto
#define TEXTO_INICIAL "\n\n\n\t\tHace mucho tiempo, en una galaxia muy, muy lejana...\n\n"
#define TEXTO_LOGO_1 "      _                                      "
#define TEXTO_LOGO_2 "  ___| |_ __ _ _ __  __      ____ _ _ __ ___ "
#define TEXTO_LOGO_3 " / __| __/ _` | '__| \\ \\ /\\ / / _` | '__/ __|"
#define TEXTO_LOGO_4 " \\__ \\ || (_| | |     \\ V  V / (_| | |  \\__ \\"
#define TEXTO_LOGO_5 " |___/\\__\\__,_|_|      \\_/\\_/ \\__,_|_|  |___/"
#define INTRO_1 "\n\n\n\t\t\t\tEPISODIO X"
#define INTRO_2 "\n\tNuestra historia comienza en el planeta Tierra 616 con un joven"
#define INTRO_3 "\n\testudiante de programacion. Se le fue asignado por el Consejo CFP-27"
#define INTRO_4 "\n\trealizar un programa que calcule la fuerza y voluntad de los jovenes"
#define INTRO_5 "\n\tPadawans. Para esto, debera crear un codigo capaz de recibir la"
#define INTRO_6 "\n\tinformacion imporante de los Padawans y, a su vez, realizar el"
#define INTRO_7 "\n\tcalculo necesario para verificar si los jovenes viviran para"
#define INTRO_8 "\n\tluchar junto con el Orden Jedi en el lado luminoso de la Fuerza"
#define INTRO_9 "\n\ty proteger a la Galaxia...o si estan destinados a corromperse"
#define INTRO_10 "\n\tpor el lado oscuro y unirse a los Sith. Podra nuestro estudiante"
#define INTRO_11 "\n\trealizar esta tarea de suma importancia y ser aprobado por el"
#define INTRO_12 "\n\tMaestro Erick? O sera otra victima del Orden 66? Sean bienvenidos a..."
#define INTRO_13 "\n\t\t\tSTAR CODE: THE RISE OF A PROGRAMMER"
#define TEXTO_MIDI_1 "\n\n\tEmpecemos, ingrese la cantidad de midiclorianos del joven Padawan"
#define TEXTO_MIDI_2 "\n\t(100.0 - 2999.9):\n\n\t-> "
#define ERROR_MIDI "\n\t(Cantidad de midiclorianos no valida.)\n\n\t-> "
#define MIDI_VALIDO "\n\t(Cantidad de midiclorianos aceptada.)"
#define TEXTO_VOLUNTAD_1 "\n\n\n\tSiguiente, ingrese la voluntad del Padawan:"
#define TEXTO_VOLUNTAD_2 "\n\n\t[F] Floja  [B] Buena  [M] Mediana"
#define TEXTO_VOLUNTAD_3 "\n\t[A] Alta   [E] Enorme [P] Peligrosa\n\n\t-> "
#define ERROR_VOLUNTAD "\n\t(Eleccion de voluntad no valida.)\n\n\t-> "
#define VOLUNTAD_VALIDA "\n\t(Eleccion de voluntad aceptada.)"
#define TEXTO_PASADO_1 "\n\n\n\tAhora, elija el pasado que tuvo el Padawan:"
#define TEXTO_PASADO_2 "\n\n\t[B] Bueno  [N] Normal  [T] Tragico\n\n\t-> "
#define ERROR_PASADO "\n\t(Eleccion de pasado no valida.)\n\n\t-> "
#define PASADO_VALIDO "\n\t(Eleccion de pasado aceptada.)"


//Defaults
const float DEFAULT_MIDI = 0.5;
const char DEFAULT_VOLUNTAD = 'x';
const char DEFAULT_PASADO = 'y';
const float DEFAULT_INFLUENCIA = 21.5;


//Constantes Float/Double
const float MIN_MIDI = 100.0;
const double MAX_MIDI = 2999.9;
const float INFLUENCIA = 3.4;
const float OSCURIDAD = 0.001117684315;
const float VOLUNTAD_FB = 10.3;
const float VOLUNTAD_MA = 54.5;
const float VOLUNTAD_EP = 103.4;
const float PASADO_NT = 0.4;
const float PASADO_B = 1.5;


//Constantes Char
const char OPC_F_MAY = 'F';
const char OPC_F_MIN = 'f';
const char OPC_VB_MAY = 'B';
const char OPC_VB_MIN = 'b';
const char OPC_M_MAY = 'M';
const char OPC_M_MIN = 'm';
const char OPC_A_MAY = 'A';
const char OPC_A_MIN = 'a';
const char OPC_E_MAY = 'E';
const char OPC_E_MIN = 'e';
const char OPC_P_MAY = 'P';
const char OPC_P_MIN = 'p';
const char OPC_PB_MAY = 'B';
const char OPC_PB_MIN = 'b';
const char OPC_N_MAY = 'N';
const char OPC_N_MIN = 'n';
const char OPC_T_MAY = 'T';
const char OPC_T_MIN = 't';


void introduccion ()
{
	printf("%s", TEXTO_INICIAL);
	getchar();
	printf("\t\t%s\n", TEXTO_LOGO_1);
	printf("\t\t%s\n", TEXTO_LOGO_2);
	printf("\t\t%s\n", TEXTO_LOGO_3);
	printf("\t\t%s\n", TEXTO_LOGO_4);
	printf("\t\t%s\n", TEXTO_LOGO_5);
	getchar();
	printf("%s", INTRO_1);
	getchar();
	printf("%s", INTRO_2);
	getchar();
	printf("%s", INTRO_3);
	getchar();
	printf("%s", INTRO_4);
	getchar();
	printf("%s", INTRO_5);
	getchar();
	printf("%s", INTRO_6);
	getchar();
	printf("%s", INTRO_7);
	getchar();
	printf("%s", INTRO_8);
	getchar();
	printf("%s", INTRO_9);
	getchar();
	printf("%s", INTRO_10);
	getchar();
	printf("%s", INTRO_11);
	getchar();
	printf("%s", INTRO_12);
	getchar();
	printf("%s", INTRO_13);
	getchar();
}


float recibir_midiclorianos()
{
	float midiclorianos = DEFAULT_MIDI;

	printf("%s", TEXTO_MIDI_1);
	printf("%s", TEXTO_MIDI_2);

	do
	{
		scanf("%f", &midiclorianos);

		if (midiclorianos < MIN_MIDI || midiclorianos > MAX_MIDI)
		{
			printf("%s", ERROR_MIDI);
		}

		else
		{
			printf("%s", MIDI_VALIDO);
		}
	}

	while (midiclorianos < MIN_MIDI || midiclorianos > MAX_MIDI);


	return midiclorianos;
}


char recibir_voluntad()
{
	char voluntad = DEFAULT_VOLUNTAD;

	printf("%s", TEXTO_VOLUNTAD_1);
	printf("%s", TEXTO_VOLUNTAD_2);
	printf("%s", TEXTO_VOLUNTAD_3);

	do
	{
		scanf(" %c", &voluntad);

		if (voluntad != OPC_F_MAY && voluntad != OPC_F_MIN && voluntad != OPC_VB_MAY && voluntad != OPC_VB_MIN && voluntad != OPC_M_MAY && voluntad != OPC_M_MIN && voluntad != OPC_A_MAY && voluntad != OPC_A_MIN && voluntad != OPC_E_MAY && voluntad != OPC_E_MIN && voluntad != OPC_P_MAY && voluntad != OPC_P_MIN)
		{
			printf("%s", ERROR_VOLUNTAD);
		}

		else
		{
			printf("%s", VOLUNTAD_VALIDA);
		}
	}

	while (voluntad != OPC_F_MAY && voluntad != OPC_F_MIN && voluntad != OPC_VB_MAY && voluntad != OPC_VB_MIN && voluntad != OPC_M_MAY && voluntad != OPC_M_MIN && voluntad != OPC_A_MAY && voluntad != OPC_A_MIN && voluntad != OPC_E_MAY && voluntad != OPC_E_MIN && voluntad != OPC_P_MAY && voluntad != OPC_P_MIN);


	return voluntad;
}


char recibir_pasado()
{
	char pasado = DEFAULT_PASADO;

	printf("%s", TEXTO_PASADO_1);
	printf("%s", TEXTO_PASADO_2);

	do
	{
		scanf(" %c", &pasado);

		if (pasado != OPC_PB_MAY && pasado != OPC_PB_MIN && pasado != OPC_N_MAY && pasado != OPC_N_MIN && pasado != OPC_T_MAY && pasado != OPC_T_MIN)
		{
			printf("%s", ERROR_PASADO);
		}

		else
		{
			printf("%s", PASADO_VALIDO);
		}
	}

	while (pasado != OPC_PB_MAY && pasado != OPC_PB_MIN && pasado != OPC_N_MAY && pasado != OPC_N_MIN && pasado != OPC_T_MAY && pasado != OPC_T_MIN);


	return pasado;
}


int main ()
{
	introduccion();

	recibir_midiclorianos();

	recibir_voluntad();

	recibir_pasado();

	return 0;
}
