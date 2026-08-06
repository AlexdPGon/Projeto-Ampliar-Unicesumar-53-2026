/*
    Escreva um programa em C que receba a idade de uma pessoa e informe se ela é maior de idade (a partir de 18 anos) ou
    se ela ainda é menor de idade.
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese_Brazil");
    system("clear");

    int idade;

    printf("Perguntar a idade: ");
    scanf("%d", &idade);

    if(idade > 17) // idade >= 18
    {
        printf("Você é maior de idade!!\nVocê está ficando idoso");
    } else {
        printf("Você é menor de idade");
    }

    return 0;
}