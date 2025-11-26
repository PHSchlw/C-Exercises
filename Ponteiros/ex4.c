/*Crie um programa que contenha uma matriz de float contendo três linhas e três
colunas. Imprima o endereço de cada posição dessa matriz.
*/

#include <stdio.h>
#include <stdlib.h>

int main () {
    float arr[3][3];
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("Posição [%d][%d]: ", i, j);
            scanf("%f", &arr[i][j]);

        }
    }

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("Posição [%d][%d]: %p\n", i, j, &arr[i][j]);


        }
    }
}