/*
    Escreva um programa que receba 2 números inteiros e multiplique-os.
    O programa deverá informar se o resultado da multiplicação é par ou í­mpar.
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {

    setlocale(LC_ALL, "Portuguese_Brazil");
    system("clear");

    int numero1, numero2, resultado;

    printf("Digite o primeiro número: ");
    scanf("%d", &numero1);

    printf("Digite o segundo número: ");
    scanf("%d", &numero2);

    resultado = numero1 * numero2;
    printf("%d x %d = %d\n", numero1, numero2, resultado);

    if(resultado % 2 == 0) {
        printf("O número %d é PAR", resultado);
    } else {
        printf("O número %d é IMPAR", resultado);
    }

    return 0;
}