#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main () {

    char nomeAluno1,nomeAluno2,nomeAluno3, alunoComMaiorNota, alunoComMenorNota;
    float notaAluno1,notaAluno2,notaAluno3, maior = 0, menor = 0;

    printf("<< Notas da Turma >>\n");

    printf("Entre com o nome do aluno #1: ");
    setbuf(stdin,NULL);
    scanf("%c", &nomeAluno1);
    printf("Entre com a nota do aluno #1: ");
    scanf("%f", &notaAluno1);
    printf("Entre com o nome do aluno #2: ");
    setbuf(stdin,NULL);
    scanf("%c", &nomeAluno2);
    printf("Entre com a nota do aluno #2: ");
    scanf("%f", &notaAluno2);
    printf("Entre com o nome do aluno #3: ");
    setbuf(stdin,NULL);
    scanf("%c", &nomeAluno3);
    printf("Entre com a nota do aluno #3: ");
    scanf("%f", &notaAluno3);

    if(notaAluno1>notaAluno2 && notaAluno1>notaAluno3){
        maior = notaAluno1;
        alunoComMaiorNota = nomeAluno1;
    }

    if(notaAluno2>notaAluno1 && notaAluno2>notaAluno3){
        maior = nomeAluno2;
        alunoComMaiorNota = nomeAluno2;
    }

    if(notaAluno3>notaAluno1 && notaAluno3>notaAluno2){
        maior = notaAluno3;
        alunoComMaiorNota = nomeAluno3;
    }

    if(notaAluno1<notaAluno2 && notaAluno1<notaAluno3){
        menor = notaAluno1;
        alunoComMenorNota = nomeAluno1;
    }

    if(notaAluno2<notaAluno1 && notaAluno2<notaAluno3){
        menor = notaAluno2;
        alunoComMenorNota = nomeAluno2;
    }

    if(notaAluno3<notaAluno1 && notaAluno3<notaAluno2){
        menor = notaAluno3;
        alunoComMenorNota = nomeAluno3;
    }

    printf("\n %c. tem a maior nota (%.1f) e %c. a menor (%.1f)\n", alunoComMaiorNota, maior, alunoComMenorNota, menor);
}