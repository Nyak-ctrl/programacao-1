#include <stdio.h>
#include <stdlib.h>

int main(){

    float p1, p2, p3, aux, media, soma;

    printf("Digite a pontuacao obtida por cada jogador:\n");
    scanf("%f %f %f", &p1, &p2, &p3);

    if(p1 < p2){
        aux = p1;
        p1 = p2;
        p2 = aux;
    }
    if(p1 < p3){
        aux = p1;
        p1 = p3;
        p3 = aux;
    }
    if(p2 < p3){
        aux = p2;
        p2 = p3;
        p3 = aux;
    }
    soma = p1 + p2 + p3;

    if(soma > 100){
        media = soma / 3;
        printf("%.2f, %.2f, %.2f\n", p1, p2, p3);
        printf("Media %.2f", media);
    }
    else{
        printf("%.2f, %.2f, %.2f\n", p1, p2, p3);
        printf("Equipe desclassifica");
    }

return 0;
}
