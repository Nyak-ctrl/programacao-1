#include <stdio.h>
#include <stdlib.h>

int main(){

    char nome_livro[100];
    int usuario;

    printf("Digite o nome do livro:\n");
    fgets(nome_livro, 100, stdin);

    printf("Digite o tipo de usuario:\n");
    scanf("%d", &usuario);

    if(usuario == 0){
        printf("Nome do livro: %s", nome_livro);
        printf("Tipo de usuario: Professor\n");
        printf("O usuario tem dez dias para devolver");
    }
    else if(usuario == 1){
        printf("Nome do livro: %s", nome_livro);
        printf("Tipo de usuario: Aluno\n");
        printf("O usuario tem tres dias para devolver");
    }
    else{
        printf("Tipo de usuario invalido");
    }

return 0;
}
