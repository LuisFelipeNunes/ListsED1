#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main () {

    int bit1,bit2,bit3,bit4,decimal;

    printf("== Conversor de números binários ==\n");

    printf("Digite o 1o. bit:");
    scanf("%d",&bit1);
    printf("Digite o 2o. bit:");
    scanf("%d",&bit2);
    printf("Digite o 3o. bit:");
    scanf("%d",&bit3);
    printf("Digite o 4o. bit:");
    scanf("%d",&bit4);

    decimal = (bit1 * pow(2,3)) +
        (bit2 * pow(2,2)) +
        (bit3 * pow(2,1)) +
        (bit4 * pow(2,0));
    
    printf("O número binário %d%d%d%d corresponde ao número decimal %d\n",bit1,bit2,bit3,bit4,decimal);
}