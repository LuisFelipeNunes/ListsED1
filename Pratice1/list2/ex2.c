#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main () {

    char inicialDoAluno;
    float notaProva1,notaProva2;

    printf("<< Cálculo da Média >>\n");

    printf("Digite o nome do aluno: ");
    scanf("%c", &inicialDoAluno);
    printf("Digite a nota da prova 1: ");
    scanf("%f", &notaProva1);
    printf("Digite a nota da prova 2: ");
    scanf("%f", &notaProva2);

    printf("A nota média do aluno %c. é %.1f\n", toupper(inicialDoAluno), (notaProva1+notaProva2)/2);

}