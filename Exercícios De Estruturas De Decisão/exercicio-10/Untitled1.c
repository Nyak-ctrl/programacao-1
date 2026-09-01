#include  <stdio.h>
#include <stdlib.h>

int main(){

    int num1, num2, num3, aux;

    printf("Digite tres numeros inteiro:\n");
    scanf("%d %d %d", &num1, &num2, &num3);

    if(num1 > num2){
        aux = num1;
        num1 = num2;
        num2 = aux;
    }
    if(num1 > num3){
        aux = num1;
        num1 = num3;
        num3 = aux;
    }
    if(num2 > num3){
        aux = num2;
        num2 = num3;
        num3 = aux;
    }
    printf("Ordem crescente %d,%d,%d", num1, num2,num3);

return 0;
}
