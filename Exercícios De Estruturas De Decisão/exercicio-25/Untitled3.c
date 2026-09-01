#include <stdio.h>
#include <stdlib.h>

int main(){

    float indice;

    printf("Informe o indice de poluicao:\n");
    scanf("%f", &indice);

    if(indice <= 0.25){
        printf("O indice de poluicao aceitavel");
    }
    else if(indice > 0.25 && indice <= 0.39){
        printf("1 grupo vai receber uma intimacao:");
    }
    else if(indice >= 0.4 && indice <= 0.49){
        printf("1 e 2 grupos ira receber uma intimacao");
    }
    else{
        printf("1, 2 e 3 grupo ira receber uma intimacao");
    }
return 0;
}
