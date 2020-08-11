#include <stdio.h>
#include <windows.h>


//Constantes de Texto
#define INTRO_1 "\n\n\n\t\t\tSTAR CODE: THE RISE OF A PROGRAMMER"
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
const double INFLUENCIA = 3.4;
const double OSCURIDAD = 0.001117684315;
const double VOLUNTAD_FB = 10.3;
const float VOLUNTAD_MA = 54.5;
const double VOLUNTAD_EP = 103.4;
const double PASADO_NT = 0.4;
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
	printf("%s", INTRO_1);
	Sleep(2400);
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
			Sleep(1500);
		}
	}

	while (midiclorianos < MIN_MIDI || midiclorianos > MAX_MIDI);


	return midiclorianos;
}


char recibir_voluntad()
{
	char voluntad = DEFAULT_VOLUNTAD;

	printf("%s", TEXTO_VOLUNTAD_1);
	Sleep(1500);
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
			Sleep(1500);
		}
	}

	while (voluntad != OPC_F_MAY && voluntad != OPC_F_MIN && voluntad != OPC_VB_MAY && voluntad != OPC_VB_MIN && voluntad != OPC_M_MAY && voluntad != OPC_M_MIN && voluntad != OPC_A_MAY && voluntad != OPC_A_MIN && voluntad != OPC_E_MAY && voluntad != OPC_E_MIN && voluntad != OPC_P_MAY && voluntad != OPC_P_MIN);


	return voluntad;
}


char recibir_pasado()
{
	char pasado = DEFAULT_PASADO;

	printf("%s", TEXTO_PASADO_1);
	Sleep(1500);
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
			Sleep(1500);
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
