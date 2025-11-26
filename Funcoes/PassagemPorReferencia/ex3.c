/*Escreva uma função que receba um array de 10 elementos e retorne a sua soma.
*/
#include <stdio.h>
#include <stdlib.h>

float somaArray(float *v, float *soma) {
    for (int i = 0; i < 10; i++) {
        *soma += v[i];
    }
}
int main() {
    float v[10], soma = 0;
    printf("Digite 10 números: ");
    for (int i = 0; i < 10; i++) {
        scanf("%f", &v[i]);
    }
    somaArray(v, &soma);
    printf("Soma: %.2f\n", soma);
}