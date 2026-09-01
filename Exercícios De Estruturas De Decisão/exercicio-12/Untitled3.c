#include <stdio.h>
#include <stdlib.h>

int main(){

    int idade;

    printf("Digite a sua idade:\n");
    scanf("%d", &idade);

    if(idade >= 18 && idade < 66){
        printf("Se e maior de idade");
    }
    else if(idade < 18){
        printf("Se e menor de idade");
    }
    else{
        printf("se maior de 65 anos");
    }
return 0;
}
