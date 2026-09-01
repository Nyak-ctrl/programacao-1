#include <stdio.h>
#include <stdlib.h>

int main (){

    int number;

    printf("Digite um numero entre 1 e 12:\n");
    scanf("%d", &number);

    switch(number)
    {
    case 1:
        printf("Janeiro");
        break;
    case 2:
        printf("Feveiro");
        break;
    case 3:
        printf("Marco");
        break;
    case 4:
        printf("Abril");
        break;
    case 5:
        printf("Maio");
        break;
    case 6:
        printf("Junho");
        break;
    case 7:
        printf("Julho");
        break;
    case 8:
        printf("Agosto");
        break;
    case 9:
        printf("Setembro");
        break;
    case 10:
        printf("Outubro");
        break;
    case 11:
        printf("Novembro");
        break;
    case 12:
        printf("Dezembro");
        break;
    default:
        printf("O numero nao esta entre 1 e 12");
    }


return 0;
}
