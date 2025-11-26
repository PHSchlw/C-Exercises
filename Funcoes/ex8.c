#include <stdio.h>
#include <stdlib.h>
/*Elabore uma função para verificar se um número é um quadrado perfeito. Um
quadrado perfeito é um número inteiro não negativo que pode ser expresso como
o quadrado de outro número inteiro. Exemplos: 1, 4, 9.
*/

void quadradoPerfeito(int x) {
    for (int i = 1; i <= x; i++) {
        if (i * i == x) {
            printf("%d é um quadrado perfeito", x);
            return;
        }
    }
    printf("%d não é um quadrado perfeito");
}

int main() {
    printf("Digite um número inteiro: ");
    int x;
    scanf("%d", &x);

    quadradoPerfeito(x);
}