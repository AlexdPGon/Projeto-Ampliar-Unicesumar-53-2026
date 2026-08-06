/*
    Escreva um algortimo que receba 2 notas de um aluno. O pgorgrama deverá calcular a média do aluno e informar se
    ele está aprovado (média maior que 7), em recuperação (média entre 5 e 7) ou reprovado (média menor que 5).
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
    } else if(media > 7) {
        printf("Parabéns!! Você está aprovado com a nota %.2f", media);
    } else if(media >= 5 && media <= 7) {
        printf("Você está de recuperação!!");
    } else {
        printf("Infelizmente você foi reprovado!! Volte a estudar ;( . Sua nota foi %.2f", media);
    }

    return 0;
}