#include <stdio.h>
#include <stdlib.h>
/*Escreva uma função que receba por parâmetro a altura e o raio de um cilindro
circular e retorne o volume desse cilindro. Considere pi = 3.1414592.
*/
const float pi = 3.1414592;
float volume(float alt, float raio) {
    float v = pi * (raio * raio) * alt;
    return v;
}
int main() {
    float altura, raio;
    printf("Entre com uma altura: ");
    scanf("%f", &altura);
    printf("Entre com uma raio: ");
    scanf("%f", &raio);

    float vol = volume(altura, raio);
    printf("O volume do cilindro é %f", vol);
}