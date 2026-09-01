#include <stdio.h>
#include <stdlib.h>

int main(){

    int number;

    printf("Digite um numero:\n");
    scanf("%d", &number);

    if(number % 5 == 0){
        printf("E divisivel por 5");
    }
    else{
        printf("Nao e divisivel por 5");
    }

return 0;
}
