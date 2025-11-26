#include <stdio.h>
#include <stdlib.h>
/*Escreva uma função que receba o peso (quilos) e a altura (metros) de uma pessoa.
Calcule e retorne o IMC (índice de massa corporal) dessa pessoa:
IMC = peso/(altura * altura)
*/
float imc(float peso, float altura) {
    float imc = peso / (altura * altura);
    return imc;
}
int main() {
    float peso, altura;
    printf("Digite seu peso: ");
    scanf("%f", &peso);
    printf("Digite sua altura: ");
    scanf("%f", &altura);
    float indicemc = imc(peso, altura);
    printf("O Seu IMC é de: %f", indicemc);
}