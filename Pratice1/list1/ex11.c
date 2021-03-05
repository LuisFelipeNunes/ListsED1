#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main () {

    float z,zi,w,wi,
        parteReal=0,parteImaginaria=0,
        moduloDeZ=0, moduloDeW=0;
    char i = 'i';

    printf("<<Numero complexo>>\n");
    
    printf("Informe a parte real de z: ");
    scanf("%f", &z);
    printf("Informe a parte imaginária de z: ");
    scanf("%f", &zi);
    printf("Informe a parte real de w: ");
    scanf("%f", &w);
    printf("Informe a parte imaginária de w: ");
    scanf("%f", &wi);


    printf("\nz + w = %.1f + %.1f%c\n", z+w, zi+wi,i );
    printf("z - w = %.1f + %.1f%c\n", z-w, zi-wi,i );

    parteReal = (z*w) - (zi*wi);
    parteImaginaria = (z*wi)+(zi*w);

    printf("z * w = %.1f + %.1f%c\n", parteReal, parteImaginaria,i );

    moduloDeZ = sqrt(pow(z,2) + pow(-zi,2));
    moduloDeW = sqrt(pow(w,2) + pow(-wi,2));

    printf("|z| = %.4f\n", moduloDeZ);
    printf("|w| = %.4f\n", moduloDeW);
}