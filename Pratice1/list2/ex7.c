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
        printf("A and B: 0\n");
    }else{
        printf("A and B: 1\n");
    }

    if(A==0 && B==0){
        printf("A or B: 0\n");
    }else{
        printf("A or B: 1\n");
    }

    if((A==0 && B!=0) || (A!=0 && B==0)){
        printf("A xor B: 1\n");
    }else{
        printf("A xor B: 0\n");
    }

    if(A==0){
        printf("not A: 1\n");
    }else{
        printf("not A: 0\n");
    }
}