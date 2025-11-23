#include <stdio.h>
#include <stdlib.h>
/*Escreva uma função que receba por parâmetro uma temperatura em graus Fahrenheit
e a retorne convertida em graus Celsius. A fórmula de conversão é: C = (F – 32.0) *
5.0/9.0), sendo F a temperatura em Fahrenheit e C a temperatura em Celsius.
*/
float toCelsius(float f) {
    float c = (f - 32.0) * (5.0 / 9.0);
    return c;
}

int main() {
    printf("Digite uma temperatura em Farenheit: ");
    float n;
    scanf("%f", &n);

    float celsius = toCelsius(n);

    printf("A temperatura de %fº Farenheit equivale a %fº Celsius.", n, celsius);
}