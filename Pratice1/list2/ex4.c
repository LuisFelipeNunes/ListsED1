#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main () {

    char inicialDoAluno;
    float notaProva1,notaProva2,notaProva3;
    int pesoProva1,pesoProva2,pesoProva3;
    double media;

    printf("<< Cálculo da Média >>\n");

    printf("Digite o nome do aluno: ");
    scanf("%c", &inicialDoAluno);

    printf("Digite a nota da prova 1: ");
    scanf("%f", &notaProva1);
    printf("Digite a nota da prova 2: ");
    scanf("%f", &notaProva2);
    printf("Digite a nota da prova 3: ");
    scanf("%f", &notaProva3);
    
    printf("Digite o peso da prova 1: ");
    scanf("%d", &pesoProva1);
    printf("Digite o peso da prova 2: ");
    scanf("%d", &pesoProva2);
    printf("Digite o peso da prova 3: ");
    scanf("%d", &pesoProva3);

    media = ((notaProva1*pesoProva1)+(notaProva2*pesoProva2)+(notaProva3*pesoProva3))/
                (pesoProva1+pesoProva2+pesoProva3);

    printf("A nota média do aluno %c. é: %.2f\n", toupper(inicialDoAluno), media);

}