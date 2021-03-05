#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main () {

    int x,y;

    printf("<< Distância >>\n");
    
    printf("Entre com a coordenada x: ");
    scanf("%d", &x);
    printf("Entre com a coordenada y: ");
    scanf("%d", &y);

    printf("\nA distância entre os pontos (%d,%d) e (0,0)  eh %.1f\n",x,y, sqrt((pow(x,2)+pow(y,2))));

}