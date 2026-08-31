#include <stdio.h>
#include <stdlib.h>

int main(){

    float number, quadrado;

    printf("Digite um numero real:\n");
    scanf("%f", &number);

    quadrado = number * number;

    printf("O resultado do numero %.2f ao quadrado vai ser %.2f", number, quadrado);

return 0;
}
