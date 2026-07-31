/*
    Escreva um programa que receba uma temperatura em Celsius e converta para Fahrenheit.

    F = (C * 1.8) + 32    ||   F = (9/5 * C) + 32    ||    F = (C * (9/5)) + 32 
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "portuguese_BRA");
    system("clear");

    float celsius, fahrenheit;

    printf("Digite a temperatura em Celsius: ");
    scanf("%f", &celsius);

    fahrenheit = (celsius * 1.8) + 32;

    printf("A temperatura %.2fC em Fahrenheit é %.2fF", celsius, fahrenheit);



    return 0;
}
