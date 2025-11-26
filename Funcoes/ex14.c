#include <stdio.h>
#include <stdlib.h>
/*Escreva uma função que receba um número inteiro positivo n. Calcule e retorne
o seu fatorial n!: n! = n * ( – 1) * (n – 2) * ... * 1.
*/

int fatorial(int n) {
    int f = 1;
    for (int i = 1; i <= n; i++) {
        f = f * i;
    }
    return f;

}

int main() {
    printf("Digite um numero: ");
    int n;
    scanf("%d", &n);
    printf("Fatorial de %d = %d", n, fatorial(n));
}