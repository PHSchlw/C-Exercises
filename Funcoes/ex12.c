#include <stdio.h>
#include <stdlib.h>
/*Escreva uma função que receba um número inteiro positivo e retorne o maior
fator primo desse número.
*/
int maiorPrimo(int a) {
    int maior = 2;

    for (int i = 1; i <= a; i++) {
        int nDivisores = 0;

        for (int j = 1; j <= i; j++) {
            if (i % j == 0) {
                nDivisores++;

            }
        }
        if (!(nDivisores > 2)) {
            if (i > maior) {
                maior = i;
            }
        }

    }

    return maior;
}

int main() {
    printf("Digite um numero: ");
    int x;
    scanf("%d", &x);

    int r = maiorPrimo(x);
    printf("Maior primo até %d é %d", x, r);
}