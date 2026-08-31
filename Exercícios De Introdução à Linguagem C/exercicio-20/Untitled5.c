#include <stdio.h>
#include <stdlib.h>

int main(){

    float valor,valor_dolar;

    printf("Digite o valor que voce deseja converter para dolar:\n");
    scanf("%f", &valor);

    valor_dolar = valor * 5.22;

    printf("\n----Resultado----\n");
    printf("Valor: %.2f\n", valor);
    printf("Valor do dolar hoje em dia: 5.22\n");
    printf("Conversao: %.2f", valor_dolar);


return 0;
}
