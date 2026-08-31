#include <stdio.h>
#include <stdlib.h>

int main(){

    int number;

    printf("Digite um numero:\n");
    scanf("%d", &number);

    if(number >= 20 && number <= 50){
        printf("O numero esta comprendido entre 20 e 50");
    }
    else{
        printf("Nao esta comprendido");
    }
return 0;
}
