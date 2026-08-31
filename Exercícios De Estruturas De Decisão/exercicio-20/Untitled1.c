#include <stdio.h>
#include <stdlib.h>

int main(){

    float saldo, credito;

    printf("Digite o saldo medio do cliente:\n");
    scanf("%f", &saldo);

    if(saldo <= 500){
        printf("Nenhum credito");
    }
    else if(saldo >= 501 && saldo <= 1000){
        credito = saldo * 0.30;
        printf("Saldo media: %.2f\n", saldo);
        printf("O valor do credito: %.2f", credito);
    }
    else if(saldo >= 101 && saldo <= 3000){
        credito = saldo * 0.40;
        printf("Saldo media: %.2f\n", saldo);
        printf("O valor do credito: %.2f", credito);
    }
    else if(saldo > 3001){
        credito = saldo * 0.50;
        printf("Saldo media: %.2f\n", saldo);
        printf("O valor do credito: %.2f", credito);
    }

return 0;
}
