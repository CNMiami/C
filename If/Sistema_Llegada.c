#include <stdio.h>


int main()
{
	int hora = 1;

	printf("Buenos dias, alumno. Ingrese su hora de llegada:\n");
	scanf("%i", &hora);

	if (hora < 900)
	{
		printf("Llego temprano :l");
	}

	else if (hora >= 900) && (hora <= 930)
	{
		printf("Llego justo a tiempo c:");
	}

	else
	{
		printf("Llego tarde >:c");
	}


	return 0;
}
