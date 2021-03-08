#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main () {

    float venda;

    scanf("%f", &venda);

    if(venda < 20000){
        printf("Comissao= %.2f\n", 400+(venda*0.14));
    }

    if(venda >= 20000 && venda < 40000){
        printf("Comissao= %.2f\n", 500+(venda*0.14));
    }

    if(venda >= 40000 && venda < 60000){
        printf("Comissao= %.2f\n", 550+(venda*0.14));
    }

    if(venda >= 60000 && venda < 80000){
        printf("Comissao= %.2f\n", 600+(venda*0.14));
    }

    if(venda >= 80000 && venda < 100000){
        printf("Comissao= %.2f\n", 650+(venda*0.14));
    }

    if(venda >= 100000){
        printf("Comissao= %.2f\n", 700+(venda*0.16));
    }
}