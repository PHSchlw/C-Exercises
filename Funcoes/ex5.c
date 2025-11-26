#include <stdio.h>
#include <stdlib.h>
/*Escreva uma função para o cálculo do volume de uma esfera*/
const float PI = 3.1414592;
float volume(float raio) {
    float v = 4 / 3 * PI * (raio * raio * raio);
    return v;
}
int main() {
    float r;
    printf("Entre com o valor de um raio: ");
    scanf("%f", &r);

    float vol = volume(r);
    printf("Volume da esfera: %f", vol);
}