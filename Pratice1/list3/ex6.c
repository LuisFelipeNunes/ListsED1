#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

    float numero, quadrado = 0;

    printf("<<Verificar se o numero é quadrado perfeito>>\n");

    printf("Digite um numero: ");
    scanf("%f", &numero);

    quadrado = sqrt(numero);

    if(quadrado == (int) quadrado){
        printf("O numero eh quadrado perfeito!\n");
    } else {
        printf("O numero nao eh quadrado perfeito!\n");
    }
}