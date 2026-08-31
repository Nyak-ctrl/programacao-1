#include <stdio.h>
#include <stdlib.h>

int main(){

    int ano, idade;

    printf("Digite a data de nascimento:\n");
    scanf("%d", &ano);

    if(ano >= 2026){
        printf("Data invalida");
        return 0;
    }
    idade = 2026 - ano;

    printf("%d ano", idade);

return 0;
}
