#include <stdio.h>


int main()
{
	int num = 1;

	printf("Ingresar un numero:\n");
	scanf("%i", &num);

	if ((num % 2) == 0)
	{
		printf("El numero %i es par.", num);
	}

	else
	{
		printf("El numero %i es impar.", num);
	}


	return 0;
}
