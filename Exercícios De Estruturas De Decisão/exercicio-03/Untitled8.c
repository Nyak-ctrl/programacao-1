#include <stdio.h>
#include <stdlib.h>

int main(){

    int number;

    printf("Digite um numero inteiro:\n");
    scanf("%d", &number);

    if(number % 3 == 0){
        printf("E multiplo de 3");
    }
    else{
        printf("Nao e multiplo de 3");
    }

return 0;
}
