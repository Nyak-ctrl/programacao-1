#include <stdio.h>
#include <stdlib.h>

int main(){

    int number, number0, adicao;

    printf("Digite dois valores inteiros:\n");
    scanf("%d %d", &number, &number0);

    adicao = number + number0;

    if(adicao > 10){
        printf("%d", adicao);
    }
    else{
        printf("a adicao nao foi maior a 10");
    }

return 0;
}
