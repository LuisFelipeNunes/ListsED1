#include <stdio.h>
#include <stdlib.h>

int main () {

    printf("<< Loteria >>\n");
    
    printf("Valor total do prêmio: 780000\n");
    printf("Primeiro vencedor: %.0f\n", 780000 * 0.46);
    printf("Segundo vencedor: %.0f\n", 780000 * 0.32);
    printf("Terceiro vencedor: %.0f\n", 780000 * 0.22);

}