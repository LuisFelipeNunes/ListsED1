#include <stdio.h>
#include <stdlib.h>

int main () {

    float x;

    printf("<< Cálculo da Quadrado de n>>\n");
    printf("Digite um número: ");
    scanf("%f", &x);
    printf("O valor de %.1f ao quadrado é %.2f\n", x, x*x);

}