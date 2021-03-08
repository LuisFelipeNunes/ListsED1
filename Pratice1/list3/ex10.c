#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main () {

    int A,B;

    printf("== Operadores Booleanos ==\nDigite 0 para falso e não 0 para verdadeiro\n");

    printf("Entre com o primeiro valor (A): ");
    scanf("%d",&A);
    printf("Entre com o primeiro valor (B): ");
    scanf("%d",&B);

    if(A==0 || B==0){
        printf("A and B: FALSO\n");
    }else{
        printf("A and B: VERDADEIRO\n");
    }

    if(A==0 && B==0){
        printf("A or B: FALSO\n");
    }else{
        printf("A or B: VERDADEIRO\n");
    }

    if((A==0 && B!=0) || (A!=0 && B==0)){
        printf("A xor B: VERDADEIRO\n");
    }else{
        printf("A xor B: FALSO\n");
    }

    if(A==0){
        printf("not A: VERDADEIRO\n");
    }else{
        printf("not A: FALSO\n");
    }
}