/*
    Escreva um programa que some 2 números inteiros
*/

#include <stdio.h> //Biblioteca Padrão de Entrada e Saída - Standard Input Output . Header

// Função principal, por onde o código inicia a execução
int main()  {

    int num1, num2, resultado;
    
    printf("Digite o primeiro numero: "); //Printf para escrever o valor da variável na tela
    scanf("%d", &num1); // Lê o valor digitado pelo usuário e armazena na variável num1

    printf("Digite o segundo numero: ");
    scanf("%d", &num2); // Lê o valor digitado pelo usuário e armazena na variável num2

    resultado = num1 + num2; // Realiza a soma dos dois números e armazena o resultado na variável resultado

    printf("Soma: %d\n", resultado); // Exibe o resultado da soma na tela

    return 0;
}