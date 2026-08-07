/*
    Escreva um programa que receba a altura e peso de uma pessoa.
    O programa deverá calcular o IMC dessa pessoa e informar se ela está: 

    Abaixo do peso - IMC menor ou igual 18,5
    Peso normal - IMC entre 18,5 e 24,99
    Sobrepeso - IMC entre 25 e 29,99
    Obeso - IMC maior ou igual a 30

    IMC = PESO / ALTURA²
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main() {

    setlocale(LC_ALL, "Portuguese_Brazil");
    system("clear");

    float altura, peso, imc;

    printf("Digite sua altura em metros (1,75): ");
    scanf("%f", &altura);

    printf("Digite seu peso em Kg (72,5): ");
    scanf("%f", &peso);

    imc = peso / (pow(altura, 2)); // (altura * altura)

    if (imc <= 18.5) {
        printf("\nSeu IMC é: %.2f\nVocê está abaixo do peso", imc);
    } else if (imc <= 24.99) {
        printf("\nSeu IMC é: %.2f\nVocê está no peso normal", imc);
    } else if (imc <= 29.99){
        printf("\nSeu IMC é: %.2f\nVocê está com sobrepeso", imc);
    } else {
        printf("\nSeu IMC é: %.2f\nVocê está obeso", imc);
    }

    return 0;
}