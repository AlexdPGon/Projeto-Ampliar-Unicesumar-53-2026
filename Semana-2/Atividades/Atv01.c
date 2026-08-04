/*
    Escreva um programa que receba a idade de 2 pessoas e informe qual a mais velha.

    < menor que
    > maior que
    <= menor ou igual que
    >= maior ou igual que 
    == igual a
    != diferente de 
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {

    setlocale(LC_ALL, "Portuguese_Brazil");
    system("clear");

    int idade1, idade2;

    printf("Informe a primeira idade: ");
    scanf("%d", &idade1);

    printf("Informe a segunda idade: ");
    scanf("%d", &idade2);

    if (idade1 > idade2) {
        printf("A primeira idade %d é a mais velha", idade1);
    }
    else if(idade2 > idade1) {
        printf("A segunda idade %d é o mais velho", idade2);
    }
    else {
        printf("As duas idades são iguais");
    }

    return 0;
}