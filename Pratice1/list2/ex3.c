#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main () {

    char inicialDoAluno;
    float notaProva1,notaProva2,notaProva3,media;

    printf("<< Cálculo da Média >>\n");

    printf("Digite o nome do aluno: ");
    scanf("%c", &inicialDoAluno);
    printf("Digite a nota da prova 1: ");
    scanf("%f", &notaProva1);
    printf("Digite a nota da prova 2: ");
    scanf("%f", &notaProva2);
    printf("Digite a nota da prova 3: ");
    scanf("%f", &notaProva3);

    media = (notaProva1+notaProva2+(notaProva3*2))/4;

    printf("A nota média do aluno %c. é %.0f\n", toupper(inicialDoAluno), media);

}