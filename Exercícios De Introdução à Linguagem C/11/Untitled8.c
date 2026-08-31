#include <stdio.h>
#include <stdlib.h>

int main(){

    float number, number0;
    float adicao, substracao, multiplicacao, divisao;

    printf("Digite dois numeros reais:\n");
    scanf("%f %f", &number, &number0);

    adicao = number + number0;
    substracao = number - number0;
    multiplicacao = number * number0;
    divisao = number / number0;

    printf("\n----Resultado----\n");
    printf("Adicao: %.2f\n", adicao);
    printf("Substracao: %.2f\n", substracao);
    printf("multiplicacao: %.2f\n", multiplicacao);
    printf("Divisao: %.2f\n", divisao);

return 0;
}
