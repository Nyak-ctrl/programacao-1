#include <stdio.h>
#include <stdlib.h>

int main(){

    char nome[100];
    int idade;

    printf("Digite o nome:\n");
    fgets(nome, 100, stdin);

    printf("Digite a idade:\n");
    scanf("%d", &idade);

    if(idade <= 10){
        printf("Nome: %s\n", nome);
        printf("Idade: %d\n", idade);
        printf("Valor que devera se pago: 30 reais");
    }
    else if(idade > 10 && idade <= 29){
        printf("Nome: %s\n", nome);
        printf("Idade: %d\n", idade);
        printf("Valor que devera se pago: 60 reais");
    }
    else if(idade > 29 && idade <= 45){
        printf("Nome: %s\n", nome);
        printf("Idade: %d\n", idade);
        printf("Valor que devera se pago: 120 reais");
    }
    else if(idade > 45 && idade <= 59){
        printf("Nome: %s\n", nome);
        printf("Idade: %d\n", idade);
        printf("Valor que devera se pago: 150 reais");
    }
    else if(idade > 59 && idade <= 65){
        printf("Nome: %s\n", nome);
        printf("Idade: %d\n", idade);
        printf("Valor que devera se pago: 250 reais");
    }
    else{
        printf("Nome: %s\n", nome);
        printf("Idade: %d\n", idade);
        printf("Valor que devera se pago: 400 reais");
    }


return 0;
}
