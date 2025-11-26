/*Crie um programa que contenha um array de inteiros contendo cinco elementos.
Utilizando apenas aritmética de ponteiros, leia esse array do teclado e imprima o
dobro de cada valor lido.
*/
#include <stdio.h>
#include <stdlib.h>

int main() {
    int arr[5];
    for (int i = 0; i < 5; i++) {

        printf("Posição [%d]: ", i);
        scanf("%d", &arr[i]);

    }
    printf("Dobro do array:\n");
    for (int i = 0; i < 5; i++) {
        printf("Posição [%d]: %d\n", i, arr[i]*2);

    }
}