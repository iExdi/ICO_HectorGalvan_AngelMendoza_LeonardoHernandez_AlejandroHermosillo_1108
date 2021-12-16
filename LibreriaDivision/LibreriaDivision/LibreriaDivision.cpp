//Programa de prueba de libreria(Proyecto principal de libreria)

#include<stdio.h>

//libreria de division
#include"Division.h"

int main()
{
	float x, y, z;
	scanf_s("%f", &x);
	scanf_s("%f", &y);
	z = div(x, y);
	printf("El resultado es %.2f", z);
}

