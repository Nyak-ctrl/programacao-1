#include <stdio.h>
#include <stdlib.h>

int main(){

    int periodo;
    float prestacao, taxa_periodica, aplicando, acrescimo;

    printf("Digite o valor de quantos a pessoa deveria ter pago:\n");
    scanf("%f", &prestacao);

    printf("Digite a taxa periodica de juros (com 0. na frente):\n");
    scanf("%f", &taxa_periodica);

    printf("Digite o periodo de atraso em meses:\n");
    scanf("%d", &periodo);

    aplicando = ((prestacao * taxa_periodica) * periodo);
    acrescimo = prestacao + aplicando;

    printf("\n----Resultado----\n");
    printf("O valor da prestacao original: %.2f\n", prestacao);
    printf("Os juros que sera cobrado: %.2f\n", taxa_periodica);
    printf("O periodo de atraso %d meses", periodo);
    printf("A prestacao com juro: %.2f", acrescimo);

return 0;
}
