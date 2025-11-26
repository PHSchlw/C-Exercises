/*Elabore uma função que receba como parâmetro um valor inteiro n e gere como
saída n linhas com pontos de exclamação, conforme o exemplo a seguir, em que
usamos n = 5:
!
!!
!!!
!!!!
!!!!!
*/

#include <stdio.h>
#include <stdlib.h>
void linhasExclamacao(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            printf("!");
        }
        printf("\n");
    }
}

int main() {
    printf("Entre com um número inteiro: ");
    int n;
    scanf("%d", &n);
    linhasExclamacao(n);
}