#include <stdio.h>
#include <stdlib.h>
/*Faça uma função que receba um número inteiro de 1 a 12 e imprima em tela o
mês.
*/

int ImprimirMes(int x) {
    switch (x) {
        case 1: printf("Janeiro"); break;
        case 2: printf("Fevereiro"); break;
        case 3: printf("Marco"); break;
        case 4: printf("Abril"); break;
        case 5: printf("Maio"); break;
    }
}
int main() {
    digitar_numero:
    int Nmes;
    printf("Digite um número de 1 a 12: ");
    scanf("%d", &Nmes);

    if (Nmes >= 1 && Nmes <= 12) {
        ImprimirMes(Nmes);
    }
    else {
        goto digitar_numero;
    }
}