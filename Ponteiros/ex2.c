/*Escreva um programa que contenha duas variáveis inteiras. Leia essas variáveis do
eclado. Em seguida, compare seus endereços e exiba o conteúdo do maior ende-
reço.
*/
#include <stdio.h>
#include <stdlib.h>

int main() {
    printf("Digite dois números inteiros: ");
    int x, y;
    scanf("%d %d", &x, &y);
    int *px = &x;
    int *py = &y;

    printf("Valor da variável de maior endereço: ");
    if (px > py) {
        printf("%d", *px);
    }
    else {
        printf("%d", *py);
    }
}