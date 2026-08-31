#include <stdio.h>
#include <stdlib.h>

int main (){

    char nome[100];
    char endereco[100];
    char telefone[100];

    printf("Informe o nome do cliente\n");
    fgets(nome, 100, stdin);

    printf("Informe o endereco do cliente\n");
    fgets(endereco, 100, stdin);

    printf("informe o numero do telefone do cliente\n");
    fgets(telefone, 100, stdin);

    printf("\n----Informacoes do cliente----\n");
    printf("Nome: %s\n", nome);
    printf("Endereco: %s\n", endereco);
    printf("Telefone: %s\n", telefone);



return 0;
}
