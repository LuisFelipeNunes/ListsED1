#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

    float A,B,C;

    scanf("%f", &A);
    scanf("%f", &B);
    scanf("%f", &C);

    if(A < 0 || B < 0 || C < 0){
        printf("Numeros negativos nao sao permitivos\n");
    } else {

        if(A > B+C || B > A+C || C > A+B){
            printf("Nenhum triangulo eh formado\n");
        } else {

            if(pow(A,2) == pow(B,2) + pow(C,2)){
                printf("Triangulo retangulo\n");
            }

            if(pow(A,2) > pow(B,2) + pow(C,2)){
                printf("Triangulo obtusângulo\n");
            }

            if(pow(A,2) < pow(B,2) + pow(C,2)){
                printf("Triangulo acutângulo\n");
            }
        }
    }

}