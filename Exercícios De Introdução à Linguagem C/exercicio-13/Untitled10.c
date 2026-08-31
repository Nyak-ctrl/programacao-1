#include <stdio.h>
#include <stdlib.h>

int main(){

    float saldo, reajuste, saldo2;

    printf("Informe o saldo da conta:\n");
    scanf("%f", &saldo);

    reajuste = saldo * 0.2;

    saldo2 = saldo + reajuste;

    printf("O novo saldo da conta com o reajuste de 2 por cento vai ser de %.2f",saldo2);

return 0;
}
