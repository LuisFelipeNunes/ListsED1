#include <stdio.h>
#include <stdlib.h>

int main () {

    int nota1,nota2,nota3,nota4;

    printf("<< Média aritmética>>\n");
    
    printf("Digite a 1a nota:");
    scanf("%d", &nota1);

    printf("Digite a 2a nota:");
    scanf("%d", &nota2);

    printf("Digite a 3a nota:");
    scanf("%d", &nota3);

    printf("Digite a 4a nota:");
    scanf("%d", &nota4);

    printf("===Notas==\n");
    printf("Nota 1: %d; Nota 2: %d; Nota 3: %d; Nota 4: %d\n", nota1, nota2, nota3, nota4);
    printf("Média: %d\n", (nota1+nota2+nota3+nota4)/4);

}