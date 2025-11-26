/*Crie uma estrutura representando um aluno de uma disciplina. Essa estrutura
deve conter o número de matrícula do aluno, seu nome e as notas de três provas.
Agora, escreva uma função que receba um vetor de tamanho N dessa estrutura.
Essa função deve retornar o índice do aluno que possui a maior média geral entre
todos os alunos.
*/
#include <stdio.h>
#include <stdlib.h>
struct aluno {
    int nMatricula;
    char nome[50];
    float notas[3];
};

void indiceMaior(struct aluno *aluno, float *media_notas) {
    //float media_notas[3];
    for (int i = 0; i < 3; i++) {
        float soma_notas = 0;
        for (int j = 0; j < 3; j++) {
            soma_notas += aluno[i].notas[j];
        }
        media_notas[i] = soma_notas / 3.0;
    }
}

int main() {
    printf("Digite os dados dos alunos: ");
    struct aluno aluno[10];
    for (int i = 0; i < 10; i++) {
        printf("Aluno [%d]: \n", i);
        printf("Número da matrícula: ");
        scanf("%d", &aluno[i].nMatricula);
        printf("Nome: ");
        scanf("%s", &aluno[i].nome);
        printf("Notas: ");
        scanf("%f %f %f", &aluno[i].notas[0], &aluno[i].notas[1], &aluno[i].notas[2]);

        printf("--------------------------------\n");

    }
    float mediaNotas[3];
    indiceMaior(aluno, mediaNotas);
    int maiorIndice = 0;
    for (int i = 0; i < 3; i++) {
        if (mediaNotas[i] > mediaNotas[maiorIndice]) {
            maiorIndice = i;
        }
    }
    printf("Índice do aluno com a maior média: %d", maiorIndice);


}