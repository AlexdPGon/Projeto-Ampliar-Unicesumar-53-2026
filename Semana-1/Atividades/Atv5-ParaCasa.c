/*
    Escreva um programa que calcule e exiba a área de um círculo.
    Como dado de entrada, o programa deverá solicitar o raio do círculo ao usuário.
    Fórmula: Área = pi x raio^2
*/

#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main() {
    setlocale(LC_ALL,"Portuguese_Brazil");
    system("clear");
    const float PI = 3.1416;
    float raio, area;

    printf("Informe o raio do círculo: ");
    scanf("%f", &raio);

    area = PI * (raio * raio);

    printf("Área do círculo é igual a %.2f", area);

    return 0;
}