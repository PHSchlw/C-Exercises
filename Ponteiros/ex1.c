/*Escreva um programa que contenha duas variáveis inteiras. Compare seus endereç-
os e exiba o maior endereço.
*/
#include <stdio.h>
#include <stdlib.h>


int main() {
    int x, y;
    int *px = &x;
    int *py = &y;
    if (px > py) {
        printf("Endereço de X é maior: %p", (void*)px);
    }
    else {
        printf("Endereço de Y é maior:  %p", (void*)py);
    }

}