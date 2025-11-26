/*Crie um programa que contenha um array contendo cinco elementos inteiros.
Leia esse array do teclado e imprima o endereço das posições contendo valores
pares.
*/
#include <stdio.h>
#include <stdlib.h>

int main() {
    int arr[5];
    for (int i = 0; i < 5; i++) {

        printf("Posição [%d]: ", i);
        scanf("%d", &arr[i]);

    }

    for (int i = 0; i < 5; i++) {
        if (arr[i] % 2 == 0) {
            printf("Endereço do valor %d: %p\n", arr[i],&arr[i]);
        }
    }
}