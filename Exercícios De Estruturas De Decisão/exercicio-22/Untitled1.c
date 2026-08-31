#include <stdio.h>
#include <stdlib.h>

int main(){

    int tipo;
    float percurso,litro;

    printf("Digite o tipo do carro (0 - para o carro tipo A, 1 - para o tipo B, 2 - para o tipo C):\n");
    scanf("%d", &tipo);

    if(tipo == 0){
        printf("Digite o percurso do carro em quiloemtro:\n");
        scanf("%f", &percurso);

        litro = percurso * 0.12;

        printf("Tipo do carro: A\n");
        printf("O consumo estimado: %.2f", litro);
    }
    else if(tipo == 1){
        printf("Digite o percurso do carro em quiloemtro:\n");
        scanf("%f", &percurso);

        litro = percurso * 0.8;

        printf("Tipo do carro: B\n");
        printf("O consumo estimado: %.2f", litro);
    }
    else if(tipo == 2){
        printf("Digite o percurso do carro em quiloemtro:\n");
        scanf("%f", &percurso);

        litro = percurso * 0.8;

        printf("Tipo do carro: C\n");
        printf("O consumo estimado: %.2f", litro);
    }
    else{
        printf("Tipo de carro invalido");
    }

return 0;
}
