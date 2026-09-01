#include <stdio.h>
#include <stdlib.h>

int main(){

    int number;

    printf("Digite um numero:\n");
    scanf("%d", &number);

    if(number > 20){
        printf("%d maior que 20", number);
    }
    else if(number == 20){
        printf("igual a 20");
    }
    else{
        printf("%d menor que 20", number);
    }
return 0;
}
