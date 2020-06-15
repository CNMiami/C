#include <stdio.h>


int main()
{
	int lluvia = 1;
	int paraguas = 1;
	int OPC_SI = 1;
	int OPC_NO = 2;

	printf("Buenos dias, esta lloviendo?\n");
	printf("[%i] Si\n", OPC_SI);
	printf("[%i] No\n", OPC_NO);
	scanf("%i,", &lluvia);

	if (lluvia == OPC_SI)
	{
		printf("Tenes el paraguas a mano?\n");
		printf("[%i] Si\n", OPC_SI);
		printf("[%i] No\n", OPC_NO);
		scanf("%i", &paraguas);

		if (paraguas == OPC_SI)
		{
			printf("Con esta lluvia, el paraguas sera util.");
		}

		else if (paraguas == OPC_NO)
		{
			printf("Con esta lluvia, correr sera conveniente.");
		}

		else
		{
			printf("Opcion no valida");
		}		
	}

	else if (lluvia == OPC_NO)
	{
		printf("Hoy no llueve, alabado sea el Sol!");
	}

	else
	{
		printf("Opcion no valida.");
	}


	return 0;
}
