/*
    Escreva um algoritmo que receba duas notas de um aluno e calcule a média.
*/

#include <stdio.h> //Biblioteca Padrão de Entrada e Saída - Standard Input Output . Header

// Função principal, por onde o código inicia a execução
int main(){

    float nota1, nota2, media; // Declaração de variáveis

    printf("Informe a primeira nota: "); //Printf para escrever na tela
    scanf("%f", &nota1); // Lê o valor digitado pelo usuário e armazena na variável nota1

    printf("Informe a segunda nota: "); //Printf para escrever na tela
    scanf("%f", &nota2); // Lê o valor digitado pelo usuário e armazena na variável nota2

    media = (nota1 + nota2) / 2; // Realiza a soma dos dois números e depois divide pela quantidade de nota (2) e armazena o resultado na variável média


    printf("Media: %.2f", media); // Exibe o resultado da soma na tela

    return 0;
}