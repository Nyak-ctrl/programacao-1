#include <stdio.h>
#include <stdlib.h>

int main(){

    int number, number0;
    int subtracao;

    printf("Digite um numero inteiro\n");
    scanf("%d", &number);

    printf("Digite um segundo numero inteiro\n");
    scanf("%d", &number0);

    subtracao = number - number0;

    printf("A subtracao dos numeros digitaram foi %d", subtracao);


return 0;
}
