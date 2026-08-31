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

return 0;
}
