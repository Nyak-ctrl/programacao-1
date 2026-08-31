#include <stdio.h>
#include <stdlib.h>

int main(){

    float salario_bruto, ultrapassar, emprestimo;

    printf("Informe o salairo burto do funcionario:\n");
    scanf("%f", &salario_bruto);

    ultrapassar = salario_bruto * 0.30;

    printf("Digite o valor do emprestimo:\n");
    scanf("%f", &emprestimo);

    if(emprestimo > ultrapassar){
        printf("Nao sera possivel solicitar o emprestimo:\n");
    }
    else{
        printf("emprstimo realizado com sucesso:");
    }

return 0;
}
