#include <stdio.h>


int main ()

{
	int entero;
	float real;
	char caracter;


	printf("Ingrese un valor entero:\n");
	scanf("%i", &entero);
	printf("Ingrese un valor real:\n");
	scanf("%f", &real);
	printf("Ingrese un caracter:\n");
	scanf(" %c", &caracter);

	printf("Valor entero ingresado: %i\n", entero);
	printf("Valor real ingresado: %f\n", real);
	printf("Caracter ingresado: %c", caracter);


	return 0;
}