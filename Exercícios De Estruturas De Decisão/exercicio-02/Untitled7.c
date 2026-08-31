#include <stdio.h>
#include <stdlib.h>

int main(){

    int number, number0, adicao, adicao1, adicao2;

    printf("Digite dois numeros inteiros:\n");
    scanf("%d %d", &number, &number0);

    adicao = number + number0;

    if(adicao > 20){

        adicao1 = adicao + 8;
        printf("%d", adicao1);
    }
else{
    adicao1 = adicao - 5;
    printf("%d", adicao1);
}

return 0;
}
