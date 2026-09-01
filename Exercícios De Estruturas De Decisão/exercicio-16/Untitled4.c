#include <stdio.h>
#include <stdlib.h>

int main(){

    int idade;

    printf("Informe a idade:\n");
    scanf("%d", &idade);

    if(idade >= 5 && idade <= 7){
        printf("Categoria infantil A");
    }
    else if(idade >= 8 && idade <= 10){
        printf("Categoria infantil B");
    }
    else if(idade >= 11 && idade <= 13){
        printf("Categoria juvenit A");
    }
    else if(idade >= 14 && idade <= 17){
        printf("Categoria juvenit B");
    }
    else if(idade >= 18){
        printf("Categoria Senior");
    }
    else{
        printf("Idade nao compativel com as categorias");
    }
return 0;
}
