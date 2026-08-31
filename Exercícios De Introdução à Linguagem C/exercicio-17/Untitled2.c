#include <stdio.h>
#include <stdlib.h>

int main(){

    float c, calculo;

    printf("Digite um valor em centigrados\n");
    scanf("%f", &c);

    calculo = (( 9 * c) + 160) / 5;

    printf("Resultado da conversao %.2f", calculo);

return 0;
}
