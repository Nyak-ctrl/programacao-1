#include <stdio.h>
#include <stdlib.h>

int main(){

    float produto, desconto, aplicando, new_price;

    printf("Digite o valor do produto\n");
    scanf("%f", &produto);

    printf("Digite o valor do desconto (com 0. na frente)\n");
    scanf("%f", &desconto);

    aplicando = produto * desconto;
    new_price = produto - aplicando;

    printf("\n----Resultado----\n");
    printf("Valor inical do produto: %.2f\n", produto);
    printf("Valor do desconto: %.2f\n", desconto);
    printf("Desconto aplicado: %.2f", new_price);

return 0;
}
