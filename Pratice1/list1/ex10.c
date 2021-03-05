#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main () {

    int x,y,z;
    float premio,aposta=0;

    printf("<<Loteria>>\n");
    
    printf("Bolão jogador 1 R$: ");
    scanf("%d", &x);
    printf("Bolão jogador 2 R$: ");
    scanf("%d", &y);
    printf("Bolão jogador 3 R$: ");
    scanf("%d", &z);

    printf("\nInforme o valor do prêmio: ");
    scanf("%f", &premio);

    aposta = x+y+z;

    printf("\nJogador 1 receberá R$: %.1f\n", premio * (x/aposta));
    printf("Jogador 2 receberá R$: %.1f\n", premio * (y/aposta));
    printf("Jogador 3 receberá R$: %.1f\n", premio * (z/aposta));

}