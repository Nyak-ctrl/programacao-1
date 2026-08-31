#include <stdio.h>

int main (){

    int number;
    int sucessor;
    int antecessor;

    printf("Digite um numero inteiro:\n");
    scanf("%d", &number);

    sucessor = number + 1;
    antecessor = number - 1;

    printf("Numero digitado %d\n", number);
    printf("Sucessor: %d\n", sucessor);
    printf("Antecessor: %d\n", antecessor);


return 0;
}
