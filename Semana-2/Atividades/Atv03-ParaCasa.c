/*
    Escreva um programa que receba 2 notas de um aluno.
    O programa deverá calcular a média das notas e informar se o aluno 
    está aprovado ou reprovado. Média para aprovação tem que ser 
    igual ou maior que 6
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {

    setlocale(LC_ALL, "Portuguese_Brazil");
    system("clear");

    float n1, n2, media;

    printf("Insira a primeira nota: ");
    scanf("%f", &n1);

    printf("Insira a segunda nota: ");
    scanf("%f", &n2);

    media = (n1 + n2) / 2;

    if(media < 0 || media > 10) {
        printf("Erro, encerrando o programa");
        return 1;
    } else if(media >= 6) {
        printf("Parabéns!! Você está aprovado com a nota %.2f", media);
    } else {
        printf("Infelizmente você foi reprovado!! Volte a estudar ;( . Sua nota foi %.2f", media);
    }

    return 0;
}