// PROYECTOF_ICO.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include "FuncionResta/FuncionResta/Resta.h"
#include "LibreriaDivision/LibreriaDivision/Division.h"
#include "ProyectoSuma/Funciones.h"



int main()
{
    int num1, num2;
    float numero1, numero2;
    

    
    printf("Ingrese un numero entero: ");
    scanf_s("%i", &num1);
    scanf_s("%f", &numero1);
    

    printf("Ingrese su segundo numero entero: ");
    scanf_s("%i", &num2);
    scanf_s("%f", &numero2);
    

 


    int resultadoR = Resta(num1, num2);
    printf("El resultado de su resta es: %i\n", resultadoR);

    int resultadoS = func_sumar(num1, num2);
    printf("El resultado de su suma es: %i\n", resultadoS);

    float resultadoD = div(numero1, numero2);
    printf("El resultado de su division es: %f\n", resultadoD);


}

