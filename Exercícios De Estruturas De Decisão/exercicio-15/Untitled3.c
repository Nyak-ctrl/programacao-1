#include <stdio.h>
#include <stdlib.h>

int main(){

    float valor, revenda, aplicado;

    printf("Digite o valor do produto:\n");
    scanf("%f", &valor);

    if(valor < 20){
        revenda = valor * 0.45;
        aplicado = valor + revenda;
        printf("O valor final vai ser %.2f", aplicado);
    }
    else{
        revenda = valor * 0.30;
        aplicado = valor + revenda;
        printf("O valor final vai ser %.2f", aplicado);
    }

return 0;
}
