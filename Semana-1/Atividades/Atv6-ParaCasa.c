/*
    Escreva um algoritmo que receba 4 notas de um aluno e calcule a média.
    M = (N1+N2+N3+N4) / 4
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "portuguese_BRA");
    system("clear");

    float nota1, nota2, nota3, nota4, media;

    printf("Informe a primeira nota: ");
    scanf("%f", &nota1);

    printf("Informe a segunda nota: ");
    scanf("%f", &nota2);

    printf("Informe a terceira nota: ");
    scanf("%f", &nota3);

    printf("Informe a quarta nota: ");
    scanf("%f", &nota4);

    media = (nota1 + nota2 + nota3 + nota4) / 4;

    printf("Média = %.2f", media);

    return 0;
}
