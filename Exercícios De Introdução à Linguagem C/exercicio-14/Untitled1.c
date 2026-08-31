#include <stdio.h>
#include <stdlib.h>

int main(){

    float base, altura;
    float perimetro, area;

    printf("Digite a base do retangulo:\n");
    scanf("%f", &base);

    printf("Digite a altura do retangulo:\n");
    scanf("%f", &altura);

    perimetro = base + altura;
    area = base * altura;

    printf("perimetro: %.2f\n", perimetro);
    printf("Area: %.2f\n", area);


return 0;
}
