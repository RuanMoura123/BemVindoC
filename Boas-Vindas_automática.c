#include <stdio.h>;
#include <stdlib.h>;


int main(){

//Boas vindas-----

    char nome[25];
    int idade, cpf, menu;

    printf("\n Seja Bem-Vindo! \n");
    printf("\n--------------------------------------------\n");
    printf("Digite como devo me referir a voce: \n");
    printf("--------------------------------------------\n");

    scanf("%s", &nome);
    printf("\nAgora sim...\n\nSeja bem-vindo %s !\n", nome);

    return 0;
}
