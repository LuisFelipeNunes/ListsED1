#include <stdio.h>
#include <stdlib.h>

int main () {

    float C;

    printf("<< Conversor Temperatura>>\n");
    printf("Digite a temperatura (em Celsius): ");
    scanf("%f", &C);
    printf("%.0f graus Celsius correspondem a %.0f Fahrenheit\n", C, C*(9.0/5.0)+32.0);

}