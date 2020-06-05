#include <stdio.h>


int main ()

{
	int alumnos_presentes, alumnos_ausentes = 1;

	printf("Cuantos alumnos hay presentes actualmente?\n");
	scanf("%i", &alumnos_presentes);
	
	alumnos_ausentes = 15 - alumnos_presentes;

	printf("Alumnos que no pusieron bien la alarma: %i :(", alumnos_ausentes);


	return 0;
}