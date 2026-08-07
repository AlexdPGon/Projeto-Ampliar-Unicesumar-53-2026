/*
    Escreva um algoritmo em C que receba o salário de um funcionário e o cargo de seu código.
    De acordo com seu código, informe quanto de aumento ele teve e o valor atual de seu salário.
    A tabela a seguir apresenta os cargos e seus respectivos aumentos:

    Códigos        |         Cargo           |      Aumento
    1                   Desenvolvedor Java           30%
    2                   Analista de Redes            25%
    3                   Arquiteto DevOps             50%
    4                   Técnico de Suporte           13%

    A saída deverá ser:
    Salário atual: R$xxxxx,xx
    Aumento de x%: R$xxx,xx
    Novo salário:  R$xxxxx,xx

    Desafio (opcional):
    Que tal se arriscar um pouco mais em um conceito que não trabalhamos ainda? Como entrada, receba também o nome do funcionário e escrevê-lo na saída?

    Se for se aventurar, a saída deverá ser assim:

    Nome do Funcionário: xxxxxxxxxxx
    Salário atual: R$xxxxx,xx
    Aumento de x%: R$xxx,xx
    Novo salário:  R$xxxxx,xx

*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {

    setlocale(LC_ALL, "Portuguese_Brazil");
    system("clear");

    float salario, salarioAumentado, aumento;
    int codigo, percentual;
    char nome[15];

    printf("Informe seu nome: ");
    scanf("%s", nome);

    printf("Informe seu salário: ");
    scanf("%f", &salario);

    printf(
        "::: Informe o código da profissão :::\n"
        "1 - Desenvolvedor Java\n"
        "2 - Analista de Redes\n"
        "3 - Arquiteto DevOps\n"
        "4 - Técnico de Suporte\n"
        "Escolha: "
    );
    scanf("%d", &codigo);

    switch (codigo) {
        case 1:
            percentual = 30;
            aumento = salario * percentual / 100;
        break;

        case 2:
            percentual = 25;
            aumento = salario * percentual / 100;
        break;

        case 3:
            percentual = 50;
            aumento = salario * percentual / 100;
        break;

        case 4:
            percentual = 13;
            aumento = salario * percentual / 100;
        break;
    
        default:
            printf("Opção inválida!!");
            return 1;
        break;
    }

    salarioAumentado = salario + aumento;

    printf(
        "Nome do Funcionário: %s\n"
        "Antigo salário: R$%.2f\n"
        "Aumento de %d%%: R$%.2f\n"
        "Salário atual: R$%.2f\n", nome, salario, percentual, aumento, salarioAumentado
    );

    return 0;
}