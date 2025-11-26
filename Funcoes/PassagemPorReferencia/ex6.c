/*Escreva uma função que receba uma string e retorne se ela é um palíndromo (1)
ou não (0). Um palíndromo é uma palavra que tem a propriedade de poder ser
lida tanto da direita para a esquerda como da esquerda para a direita. Exemplos:
ovo, arara, rever, asa, osso etc.
*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

void ehPalindrono(char *palavra) {
    char palavraInvertida[strlen(palavra)];
    int fim = strlen(palavra) - 1;
    if (palavra[fim] == '\n') {
        palavra[fim] = '\0';
        fim--;
    }

    for (int i = 0, j = fim; i <= fim; i++, j--) {
        palavraInvertida[i] = palavra[j];
    }
    palavraInvertida[fim+1] = '\0';
    printf("Palavra invertida: %s\n", palavraInvertida);
    if (strcmp(palavraInvertida, palavra) == 0) {
        printf("1");
    }
    else {
        printf("0");
    }

}

int main() {
    printf("Escreva uma palavra: ");
    char palavra[30];
    fgets(palavra, 30, stdin);

    printf("É palíndrono: ");
    ehPalindrono(palavra);

}