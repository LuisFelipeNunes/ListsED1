#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main () {

    int A,B,aux;

    printf("== Troca do conteúdo de variáveis ==\n");

    printf("Entre com o valor de A: ");
    scanf("%d",&A);
    printf("Entre com o valor de B: ");
    scanf("%d",&B);

    aux = A;
    A = B;
    B = aux;
    
    printf("Após a troca, o valor de A é %d e o de B é %d\n",A,B);
}