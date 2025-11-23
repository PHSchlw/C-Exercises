#include <stdio.h>
#include <stdlib.h>

/*Escreva uma função que receba por parâmetro dois números e retorne o maior
deles.*/

float maior(float a, float b) {
    if (a > b) {
        return a;
    }
    else {
        if (b > a) {
            return b;
        }
        else {
            printf("Iguais");
        }
    }
}
int main() {
    float x, y;
    printf("Digite dois números: ");
    scanf("%f%f", &x, &y);

    printf("O maior número entre %f e %f é %f", x, y, maior(x,y));
}