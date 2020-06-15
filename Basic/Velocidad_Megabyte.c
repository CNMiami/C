#include <stdio.h>


int main ()

{
	float megabyte, velocidad = 1;

	printf("De cuantos megabytes es el paquete que compraste?\n");
	scanf("%f", &megabyte);

	velocidad = megabyte / 8;

	printf("El usuario compro un paquete de %.2fmb y la velocidad relevante en realidad es de %.2fmb/s", megabyte, velocidad);


	return 0;
}
