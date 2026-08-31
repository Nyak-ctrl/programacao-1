#include <stdio.h>
#include <stdlib.h>

int main(){

    int number, number2, number3;

    printf("Digite tres numeros inteiros:\n");
    scanf("%d %d %d", &number, &number2, &number3);

    if(number > number2 && number > number3){
        printf("%d", number);
    }
    else if(number2 > number && number2 > number3){
        printf("%d", number2);
    }
    else{
        printf("%d", number3);
    }


return 0;
}
