#include <stdio.h>
#include <stdlib.h>
/*Escreva uma função que receba um número inteiro positivo n. Calcule e retorne
o somatório de 1 até n: 1 + 2 + 3 + ... + n.
*/

int somatorio(int n) {
    int soma = 0;
    for (int i = 1; i <= n; i++) {
        soma = soma + i;
    }
    return soma;
}
int main() {
    printf("Digite um numero: ");
    int n;
    scanf("%d", &n);
    int result = somatorio(n);

    printf("Somatório de 1 até %d: %d", n, result);
}