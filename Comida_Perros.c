#include <stdio.h>


const int PRECIO_KG = 210;

int main ()

{
	int cant_mascotas = 1;
	float kg_comida = 1;
	float total = 1;


	printf("Cuantos perros tiene?\n");
	scanf("%i", &cant_mascotas);
	printf("Cuantos kilogramos de comida compra aproximadamente por mes?\n");
	scanf("%f", &kg_comida);

	total = kg_comida * PRECIO_KG * 12;

	printf("Con una bolsa de %.2fkg para %i perro/s, se gasta en un anio $%.2f ", kg_comida, cant_mascotas, total);


	return 0;
}