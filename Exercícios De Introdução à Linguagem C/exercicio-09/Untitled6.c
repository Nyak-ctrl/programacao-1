#include <stdio.h>
#include <stdlib.h>

int main(){

    float number;
    float imprimir;

    printf("Digite um numero real:\n");
    scanf("%f", &number);

    imprimir = number / 4.0;

    printf("Resultado %.2f", imprimir);

return 0;
}
