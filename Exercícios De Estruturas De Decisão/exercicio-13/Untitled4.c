#include <stdio.h>
#include <stdlib.h>

int main(){

    char nome[100];
    float p1, p2, media;

    printf("Digite o nome do aluno:\n");
    fgets(nome, 100, stdin);

    printf("Digite a nota da primeira e segunda prova:\n");
    scanf("%f %f", &p1, &p2);

    media = (p1 + p2) / 2;

    if(media >= 7){
        printf("nome: %s\n",nome);
        printf("Nota da primeira prova: %.2f\n",p1);
        printf("Nota da segunda prova: %.2f\n",p2);
        printf("Situacao: Aprovando");
    }
    else if(media < 3){
        printf("nome: %s\n",nome);
        printf("Nota da primeira prova: %.2f\n",p1);
        printf("Nota da segunda prova: %.2f\n",p2);
        printf("Situacao: Reprovando");
    }
    else{
        printf("nome: %s",nome);
        printf("Nota da primeira prova: %.2f\n",p1);
        printf("Nota da segunda prova: %.2f\n",p2);
        printf("Situacao: Prova final");
    }
return 0;
}

