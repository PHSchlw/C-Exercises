/*Escreva uma função que, dado um número real passado como parâmetro, retorne
parte inteira e a parte fracionária desse número por referência.
*/
#include <stdio.h>
#include <stdlib.h>

void separador(float n, int *inteiro, float *frac) {
    *inteiro = (int) n;
    *frac = n - *inteiro;
}
int main () {
    float n, frac;
    int inteiro;
    printf("Digite n: ");
    scanf("%f", &n);

    separador(n, &inteiro, &frac);
    printf("Parte Inteira: %d\nParte Fracionária: %.2f\n", inteiro, frac);
}
