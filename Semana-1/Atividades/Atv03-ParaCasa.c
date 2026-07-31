/*
    Escreva um programa que calcule a idade de uma pessoa
    Crie as variáveis anoAtual, anoNascimento e idade e calcule a idade.
*/

#include <stdio.h>
#include <locale.h> //Biblioteca Padrão de Localização - Standard Locale . Header

int main() {

    setlocale(LC_ALL, "Portuguese_Brazil"); // Deixa a saída de dados em português

    int  anoAtual, anoNascimento, idade;

    printf("Digite o seu ano atual: ");
    scanf("%d", &anoAtual);

    printf("Digite o seu ano de nascimento: ");
    scanf("%d", &anoNascimento);

    idade = anoAtual - anoNascimento;

    printf("Sua idade é: %d", idade);

    return 0;
}