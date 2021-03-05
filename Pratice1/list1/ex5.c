#include <stdio.h>
#include <stdlib.h>

int main () {

    float salario;

    printf("<< Aumento Salarial>>\n");
    
    printf("Digite o valor do salário R$:");
    scanf("%f", &salario);

    printf("Após 25%% de aumento o salário fica em R$ %.2f.\n", (salario * 1.25));

}