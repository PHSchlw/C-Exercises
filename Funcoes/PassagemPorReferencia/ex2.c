/*Escreva uma função para o cálculo do volume e área de uma esfera
V = 4/3 π + r^3,
A = 4 π * r^2
m que π = 3.1414592. O valor do raio r deve ser passado por parâmetro, e os
alores calculados devem ser retornados por referência.
*/
#include <stdio.h>
#include <stdlib.h>
const float PI = 3.1414592;

void esfera(float raio, float *volume, float *area) {
    *volume = 4 / 3 * PI + (raio * raio * raio);
    *area = 4 * PI * (raio * raio);
}

int main() {
    float raio, volume, area;
    printf("De o valor do raio de uma esfera: ");
    scanf("%f", &raio);
    esfera(raio, &volume, &area);

    printf("Volume da esfera: %.2f\n", volume);
    printf("Area da esfera: %.2f", area);
}