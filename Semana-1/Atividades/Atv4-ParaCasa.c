/*
    Escreva um algoritimo que receba 2 números e multiplique-os, mostrando o resultado na tela.
*/

#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main() {

    setlocale(LC_ALL,"Portuguese_Brazil");
    system("clear");

    int numero1, numero2, resultado;

    printf("Digite o primeiro número: ");
    scanf("%d", &numero1);

    printf("Digite o segundo número: ");
    scanf("%d", &numero2);

    resultado = numero1 * numero2;

    printf("%d x %d = %d\n",numero1, numero2, resultado);

    return 0;
}