#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main () {

    float precoDoProduto;
    int unidadeDaFederacao;

    printf("<< Valor do Produto com imposto >>\n");

    printf("Digite o valor do produto R$: ");
    scanf("%f", &precoDoProduto);
    printf("Digite a unidade da federação: ");
    scanf("%d",&unidadeDaFederacao);

    if(unidadeDaFederacao == 1){
        printf("Valor final com impostos R$: %.2f\n", precoDoProduto * 1.07);
    } else {

        if(unidadeDaFederacao == 2){
            printf("Valor final com impostos R$: %.2f\n", precoDoProduto * 1.12);
        } else {

            if(unidadeDaFederacao == 3){
                printf("Valor final com impostos R$: %.2f\n", precoDoProduto * 1.15);
            } else {

                if(unidadeDaFederacao == 4){
                    printf("Valor final com impostos R$: %.2f\n", precoDoProduto * 1.08);
                } else {
                    printf("A unidade da Federação nao eh valida!\n");
                }
            
            }

        }

    }

}