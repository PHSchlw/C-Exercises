#include <stdio.h>
#include <stdlib.h>
/*Escreva uma função que receba por parâmetros dois valores inteiros x e y e calcule
e retorne o resultado de x^y para o programa principal. Não use nenhuma função
pronta para isso.
*/

int exponencial(int x, int y) {
    int r, s = 1;
    for (int i = 1; i <= y; i++) {
        r = s * x;
        s = r;
    }
    return r;
}
int main() {
    printf("Digite dois números: ");
    int x, y;
    scanf("%d %d", &x, &y);

    int result = exponencial(x, y);

    printf("Resultado de %d^%d: %d", x, y, result);
}