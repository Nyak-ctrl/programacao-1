#include <stdio.h>
#include <stdlib.h>

int main(){

    float salario, desconto;

    printf("Digite o valor do salario:\n");
    scanf("%f", &salario);

    if(salario <= 600){
        printf("Inserto");
    }
    else if(salario  > 600 && salario <= 1200){
        desconto = salario * 0.20;

        printf("O desconto sera de %.2f", desconto);
    }
    else if(salario > 1200 && salario <= 2000){
        desconto = salario * 0.25;

        printf("O desconto sera de %.2f reais", desconto);
    }
    else{
        desconto = salario * 0.30;

        printf("O desconto sera de %.2f reais", desconto);
    }
return 0;
}
