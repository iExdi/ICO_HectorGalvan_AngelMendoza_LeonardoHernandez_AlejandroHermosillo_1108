

#include <stdio.h>

// Libreria Resta 
#include "Resta.h"

int main()
{
    float a, b, c;
    scanf_s("%f", &a);
    scanf_s("%f", &b);
    c = Resta(a, b);
    printf("El resultado es %.2f", c);
    
}

