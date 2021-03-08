#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

    float a,b,c, delta, x1, x2;

    scanf("%f", &a);
    scanf("%f", &b);
    scanf("%f", &c);

    delta = pow(b,2) - (4*a*c);

    x1 = (delta - b)/2*a;
    x2 = (delta + b)/2*a;

    printf("x1 = %.1f\n", x1);
    printf("x2 = %.1f\n", x2);
}