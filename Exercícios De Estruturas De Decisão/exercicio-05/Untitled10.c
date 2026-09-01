#include <stdio.h>
#include <stdlib.h>

int main(){

    int number;

    printf("Digite um numero:\n");
    scanf("%d", &number);

    if(number % 3 == 0 && number % 7 == 0){
        printf("%d e divisivel por 3 e por 7:\n", number);
    }
    else{
        printf("%d nao e divisivel por 3 e por 7:\n", number);
    }

return 0;
}
