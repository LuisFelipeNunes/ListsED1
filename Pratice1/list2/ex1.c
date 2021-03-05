#include <stdio.h>
#include <stdlib.h>

int main () {

    float notaProva1,notaProva2;

    printf("<< Cálculo da Média >>\n");

    printf("Digite a nota da prova 1: ");
    scanf("%f", &notaProva1);
    printf("Digite a nota da prova 2: ");
    scanf("%f", &notaProva2);

    printf("A nota média é %.0f\n", (notaProva1+notaProva2)/2);

}