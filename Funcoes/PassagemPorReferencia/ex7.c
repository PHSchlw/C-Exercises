/*Escreva uma função que receba uma string e converta todos os seus caracteres
em maiúscula. Dica: subtraia 32 dos caracteres cujo código ASCII está entre 97 e
122.
*/
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void toLowerCase(char *palavra) {
    for (int i = 0; i < strlen(palavra); i++) {
        if (palavra[i] >= 97 || palavra[i] <= 122) {
            palavra[i] -=32;
        }
    }
}

int main() {
    printf("Escreva uma palavra: ");
    char palavra[100];
    fgets(palavra, 100, stdin);
    toLowerCase(palavra);
    printf("Palavra convertida para maiúscula: %s", palavra);
}
