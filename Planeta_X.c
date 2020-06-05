#include <stdio.h>


int main ()

{
	int tiempo_x = 1;
	int tiempo_tierra = 1;


	printf("Ingresar cantidad de horas transcurridas en el Planeta X:\n");
	scanf("%i", &tiempo_x);

	tiempo_tierra = tiempo_x * 7;

	printf("It's been %i years, Cooper...", tiempo_tierra);


	return 0;
}