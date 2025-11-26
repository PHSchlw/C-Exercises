/*Faça uma função que receba, por parâmetro, uma matriz A contendo seis linhas
e seis colunas. Essa função deve retornar, por referência, a soma dos elementos da
ua diagonal principal e da sua diagonal secundária.
*/
#include <stdio.h>
#include <stdlib.h>
void somaMatriz (float mat[6][6], float *soma) {
    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < 6; j++) {
            if (i == j || j == i + 1 || j == i - 1) {
                *soma += mat[i][j];
            }
        }
    }
}

int main() {
    float mat[6][6], soma;
    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < 6; j++) {
            printf("Posição [%d][%d]: ", i, j);
            scanf("%f", &mat[i][j]);

        }
    }

    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < 6; j++) {
            printf("%.2f ", mat[i][j]);

        }
        printf("\n");
    }

    somaMatriz(mat, &soma);
    printf("Soma: %.2f\n", soma);
}