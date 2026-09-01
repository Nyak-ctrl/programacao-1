#include <stdio.h>
#include <stdlib.h>

int main(){

    int prato, sobremesa, bebida, total_calorias;

    printf("----Escolha o Prato----\n");
    printf("0 - Vegetariano (180cal)\n");
    printf("1 - Peixe (230cal)\n");
    printf("2 - Frango (250cal)\n");
    printf("3 - Carne (350cal)\n");
    printf("Opcao: ");
    scanf("%d", &prato);

    switch(prato)
    {
    case 0:
    total_calorias += 180;
    break;
    case 1:
    total_calorias += 230;
    break;
    case 2:
    total_calorias += 250;
    break;
    case 3:
    total_calorias += 350;
    break;
    default: printf("Opcao invalida");
    }

    printf("----Escolha a Sobremesa----\n");
    printf("0 - Abacaxi (75cal)\n");
    printf("1 - Sorvete Diet (110cal)\n");
    printf("2 - Mousse Diet (170cal)\n");
    printf("3 - Mousse Chocolate (200cal)\n");
    printf("Opcao: ");
    scanf("%d", &sobremesa);

    switch(sobremesa)
    {
    case 0:
    total_calorias += 75;
    break;
    case 1:
    total_calorias += 110;
    break;
    case 2:
    total_calorias += 170;
    break;
    case 3:
    total_calorias += 200;
    break;
    default: printf("Opcao invalida");
    }

    printf("----Escolha a Bebida----\n");
    printf("0 - Cha (20cal)\n");
    printf("1 - Suco De Laranja (70cal)\n");
    printf("2 - Suco De melao (100cal)\n");
    printf("3 - Refrigerante diet (65cal)\n");
    printf("Opcao: ");
    scanf("%d", &bebida);

    switch(bebida)
    {
    case 0:
    total_calorias += 20;
    break;
    case 1:
    total_calorias += 70;
    break;
    case 2:
    total_calorias += 100;
    break;
    case 3:
    total_calorias += 65;
    break;
    default: printf("Opcao invalida");
    }
    printf("Total de calorias %d", total_calorias);

return 0;
}
