#include <stdio.h>
#include <stdlib.h>

int main(){

    float number, number0, number1;
    float media;

    printf("Digite um numero reais:\n");
    scanf("%f %f %f", &number, &number0, &number1);

    media = (number + number0 + number1) / 3;

    printf("Resultado %f", media);

return 0;
}
