#include <stdio.h>
#include <math.h>


int main ()

{
	float cat_op, cat_ady, hip = 1;

	printf("Ingresar el valor del cateto opuesto:\n");
	scanf("%f", &cat_op);
	printf("Ingresar el valor del cateto adyacente:\n");
	scanf("%f", &cat_ady);

	hip = sqrt((cat_op * cat_op) + (cat_ady * cat_ady));

	printf("Hipotenusa: %.2f", hip);


	return 0;
}
