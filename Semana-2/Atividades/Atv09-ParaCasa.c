/*
    Escreva um programa que receba o cadastro de uma pessoa, contendo: Idade, CPF e código para sexo.

    Se o código for 1, a pessoa é do sexo masculino.
    Se o código for 2, a pessoa é do sexo feminino.
    Se o código for 3, a pessoa optou por não informar.

    O programa deverá escrever na tela a idade, o CPF e o sexo da pessoa.

*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {

    setlocale(LC_ALL, "Portuguese_Brazil");
    system("clear");

    int idade, sexo;
    char cpf[15];

    printf("Informe sua idade: ");
    scanf("%d", &idade);

    printf("Digite o CPF(somente número): ");
    scanf("%s",cpf);

    printf(
        "1 - Masculino\n"
        "2 - Feminino\n"
        "3 - Não informar\n"
        "Informar: "
    );
    scanf("%d", &sexo);

    // if(sexo == 1) {
    //     printf("Sexo Masculino\n");
    // } else if(sexo == 2) {
    //     printf("Sexo Feminino");
    // } else if(sexo == 3) {
    //     printf("Sexo Não Informado");
    // } else {
    //     printf("Opção inválida");
    // }

    switch (sexo){
        case 1:
            printf("\nSexo: Masculino\n");
        break;

        case 2:
            printf("\nSexo: Feminino\n");
        break;

        case 3:
            printf("\nSexo: Não Informado\n");
        break;
            
        default:
            printf("\nOpção inválida\n");
        break;
    }

    printf("Idade: %d\n", idade);
    printf("CPF: %s\n", cpf);

    return 0;
}