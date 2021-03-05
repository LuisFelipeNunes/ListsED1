#include <stdio.h>
#include <stdlib.h>

int main () {

    int dias;
    float iss, ir, bruto;

    printf("<< Pagamento encanador >>\n");
    
    printf("Digite o número de dias trabalhados: ");
    scanf("%d", &dias);

    bruto = 30 * dias;

    iss = bruto * 0.04;

    ir = (bruto-iss) * 0.08;

    printf("Valor bruto R$: %.0f\n", bruto);
    printf("Valor liquido R$: %.2f\n", bruto - (iss+ir));
    printf("ISS R$: %.0f\n", iss);
    printf("IR R$: %.2f\n", ir);

}