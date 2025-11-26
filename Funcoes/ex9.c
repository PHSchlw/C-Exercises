#include <stdio.h>
#include <stdlib.h>
/*Elabore uma função que receba três notas de um aluno como parâmetros e uma
etra. Se a letra for “A”, a função deverá calcular a média aritmética das notas do
aluno; se for “P”, deverá calcular a média ponderada, com pesos 5, 3 e 2. Retorne
a média calculada para o programa principal.
*/

float media(float a, float b, float c, char let) {
    if (let == 'a' || let == 'A') {
        float media = (a + b + c) / 3;
        return media;
    }

    else {
        float media = (a*5 + b*3 + c*2) / 10;
        return media;
    }
}
int main() {
    printf("Digite três notas: ");
    float a, b, c;
    scanf("%f%f%f", &a, &b, &c);
    char let;
    float m;
    digitar_letra:
    scanf("%c", &let);
    if (let == 'a' || let == 'A') {
        m = media(a, b, c, let);
    }
    else {
        if (let == 'b' || let == 'B') {
            m = media(a, b, c, let);
        }
        else {
            goto digitar_letra;
        }
    }
    printf("Sua média é %f", m);


}