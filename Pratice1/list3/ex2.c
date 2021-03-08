#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main () {

    char unidade;
    float temperatura;

    printf("<< Conversor de Temperatura >>\n");

    printf("Digite a temperatura: ");
    scanf("%f", &temperatura);
    printf("Digite a unidade: ");
    setbuf(stdin,NULL);
    scanf("%c", &unidade);

    if(unidade == 'c'){
        printf("%.0f graus Celsius equivale a %.0f graus Fahrenheit\n", temperatura, ((temperatura *9)/5) + 32);
    } else {

        if(unidade == 'f'){
            printf("%.0f graus Fahrenheit equivale a %.0f graus Celsius\n", temperatura, ((temperatura - 32) * 5)/9);
        } else {
            printf("A unidade nao eh valida!\n");
        }
        
    }
}