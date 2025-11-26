/*Crie um programa que contenha um array de float contendo 10 elementos. Im-
prima o endereço de cada posição desse array.
*/

#include <stdio.h>
#include <stdlib.h>

int main () {
    float arr[10];
    for (int i = 0; i < 10; i++) {
        printf("%p\n", &arr[i]);
    }

}