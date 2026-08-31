#include <Stdio.h>
#include <stdlib.h>

int main(){

    int temp;
    float velocidade, d, l;

    printf("Digite o tempo percorrido:\n");
    scanf("%d", &temp);

    printf("Digite a velocidade percorido:\n");
    scanf("%f", &velocidade);

    d = temp * velocidade;

    l = d / 12;

    printf("Distancia percorrida: %.2f\n", d);
    printf("Litros de combustivek consumidos: %.2f\n", l);

return 0;
}
