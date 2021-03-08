#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    
    float massa, altura, imc = 0;

    printf("<<Entre com seu peso e sua altura>>\n");

    printf("Digite aqui seu peso: ");
    scanf("%f", &massa);
    printf("Digite aqui sua altura: ");
    scanf("%f", &altura);

    imc = massa/pow(altura,2);

    if(imc < 18.5){
        printf("Sua Classificação IMC eh Magreza!\n");
    }

    if(imc >= 18.5 && imc < 25){
        printf("Sua Classificação IMC eh Saudável!\n");
    }

    if(imc >= 25 && imc < 30){
        printf("Sua Classificação IMC eh Sobrepeso!\n");
    }

    if(imc >= 30 && imc < 35){
        printf("Sua Classificação IMC eh Obesidade Grau I!\n");
    }

    if(imc >= 35 && imc < 40){
        printf("Sua Classificação IMC eh Obesidade Grau II(severa)!\n");
    }

    if(imc >= 40){
        printf("Sua Classificação IMC eh Obesidade Grau III(morbida)!\n");
    }
}