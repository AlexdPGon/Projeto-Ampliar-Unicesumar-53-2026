/*
    Escreva um programa que apresente as quatro operações aritmeticas pro usuário.
    Como uma calculadora. O usuário deverá escolher qual operação ele quer realizar
    e informar 2 números.

    1. Soma
    2. Subtração
    3. Divisão
    4. Multiplicação
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {

    setlocale(LC_ALL, "Portuguese_Brazil");
    system("clear");

    int operacao;
    float numero1, numero2, resultado;

    printf(
        "::: Escolha a operação que deseja realizar :::\n"
        "1. Soma\n"
        "2. Subtração\n"
        "3. Divisão\n"
        "4. Multiplicação\n"
        "Escolha: "
    );

    scanf("%d", &operacao);

    printf("Informe o primeiro número: ");
    scanf("%f", &numero1);

    printf("Informe o segundo número: ");
    scanf("%f", &numero2);

    switch(operacao) {
        case 1:
            resultado = numero1 + numero2;
        break;

        case 2:
            resultado = numero1 - numero2;
        break;

        case 3:
            if(numero2 == 0){
                printf("Não é possível dividir por zero\n");
                return 1;
            } else {
                resultado = numero1 / numero2;
            }
        break;

        case 4:
            resultado = numero1 * numero2;
        break;

        default:
            printf("Erro!! Essa opção não existe");
            return 1;
        break;
    }

    printf("Resultado = %.1f", resultado);

    return 0;
}