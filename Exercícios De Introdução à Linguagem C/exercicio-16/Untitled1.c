#include <stdio.h>
#include <stdlib.h>

int main(){

    float salario, reajuste, aplicando, novo_salario;

    printf("Digite o salario do funcionario:\n");
    scanf("%f", &salario);

    printf("Digite o reajuste (com o. na frente);\n");
    scanf("%f", &reajuste);

    aplicando = salario * reajuste;

    novo_salario = salario + aplicando;

    printf("O salario com o reajustr %.2f",novo_salario);

return 0;
}
