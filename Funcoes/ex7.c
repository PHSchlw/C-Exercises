#include <stdio.h>
#include <stdlib.h>
/*Elabore uma função que receba três números inteiros como parâmetro, represen-
ando horas, minutos e segundos. A função deve retornar esse horário convertido
em segundos.
*/
int toSec(int h, int m, int s) {
    int segundos = h * 3600 + m * 60 + s;
}

int main() {
    int h, m, s;
    printf("Entre com um horário: ");
    scanf("%d:%d:%d", &h, &m, &s);

    int seg = toSec(h, m, s);
    printf("%d segundos", seg);
}