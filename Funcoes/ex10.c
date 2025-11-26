#include <stdio.h>
#include <stdlib.h>

float operacao(float a, float b, char c) {

    switch (c) {
        case '+': return (a + b);
        case '-': return (a - b);
        case '*': return (a * b);
        case '/': return (a / b);
        default: printf("Operacao Inválida");
    }
}
int main() {
    printf("Digite dois valores: ");
    float a, b;
    scanf("%f %f", &a, &b);
    printf("Entre uma operação (+, -, *, /): ");
    char op;
    scanf(" %c", &op);

    float result = operacao(a, b, op);
    printf("Resultado: %.2f", result);
}