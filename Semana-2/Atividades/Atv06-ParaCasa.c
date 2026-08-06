/*
    Escreva um algortimo em C que receba 3 números inteiros
    e informe qual deles é o maior.
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {

    setlocale(LC_ALL, "Portuguese_Brazil");
    system("clear");

    int n1, n2, n3;

    printf("Informe o primeiro número: ");
    scanf("%d", &n1);

    printf("Informe o segundo número: ");
    scanf("%d", &n2);

    printf("Informe o terceiro número: ");
    scanf("%d", &n3);

    if(n1 > n2 && n1 > n3) {
        printf("O maior número é %d", n1);
    } else if(n2 > n1 && n2 > n3) {
        printf("O maior número é %d", n2);
    } else if(n3 > n1 && n3 > n2) {
        printf("O maior número é %d", n3);
    } else {
        printf("Todos os números são iguais");
    }

    return 0;
}