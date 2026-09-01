#include <stdio.h>
#include <stdlib.h>

int main(){

    int placa, digito;

    printf("Informe o numero da placa do veiculo (APENAS OS NUMEROS)\n");
    scanf("%d", &placa);

    digito = placa % 10;

    printf("Final da placa %d\n", digito);

    switch(digito)
    {
    case 1:
    printf("Mes de renovacao: Janeiro");
    break;
    case 2:
    printf("Mes de renovacao: Fevereiro");
    break;
    case 3:
    printf("Mes de renovaocao: Marco");
    break;
    case 4:
    printf("Mes de renovacao: Abril");
    break;
    case 5:
    printf("Mes de renovacao: Maio");
    break;
    case 6:
    printf("Mes de renovacao: Junho");
    break;
    case 7:
    printf("Mes de renovacao: Julho");
    break;
    case 8:
    printf("Mes de renovacao: Agosto");
    break;
    case 9:
    printf("Mes de renovacao: Setembro");
    break;
    case 10:
    printf("Mes de renovacao: Outubro");
    break;
    case 11:
    printf("Mes de renovacao: Novembro");
    break;
    case 12:
    printf("Mes de renovacao: Dezembro");
    default: printf("Por gentileza entre em contato com o detran");
    }

return 0;
}
