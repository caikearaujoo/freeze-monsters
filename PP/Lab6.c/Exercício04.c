#include <stdio.h>

#define NUM_ALUNOS 5
#define NOTA_APROVACAO 6.0

struct Aluno 
{
    int matricula;
    char nome[50];
    float nota1;
    float nota2;
    float nota3;
};

struct Aluno encontrarMaiorNota1(struct Aluno alunos[]) 
{
    struct Aluno alunoMaiorNota1 = alunos[0];
    for (int i = 1; i < NUM_ALUNOS; i++) {
        if (alunos[i].nota1 > alunoMaiorNota1.nota1) {
            alunoMaiorNota1 = alunos[i];
        }
    }
    return alunoMaiorNota1;
}

struct Aluno encontrarMaiorMedia(struct Aluno alunos[]) {
    struct Aluno alunoMaiorMedia = alunos[0];
    float maiorMedia = (alunos[0].nota1 + alunos[0].nota2 + alunos[0].nota3) / 3;
    for (int i = 1; i < NUM_ALUNOS; i++) {
        float media = (alunos[i].nota1 + alunos[i].nota2 + alunos[i].nota3) / 3;
        if (media > maiorMedia) {
            maiorMedia = media;
            alunoMaiorMedia = alunos[i];
        }
    }
    return alunoMaiorMedia;
}

struct Aluno encontrarMenorMedia(struct Aluno alunos[]) {
    struct Aluno alunoMenorMedia = alunos[0];
    float menorMedia = (alunos[0].nota1 + alunos[0].nota2 + alunos[0].nota3) / 3;
    for (int i = 1; i < NUM_ALUNOS; i++) {
        float media = (alunos[i].nota1 + alunos[i].nota2 + alunos[i].nota3) / 3;
        if (media < menorMedia) {
            menorMedia = media;
            alunoMenorMedia = alunos[i];
        }
    }
    return alunoMenorMedia;
}

void verificarAprovacao(struct Aluno aluno) {
    float media = (aluno.nota1 + aluno.nota2 + aluno.nota3) / 3;
    if (media >= NOTA_APROVACAO) {
        printf("%s foi aprovado(a).\n", aluno.nome);
    } else {
        printf("%s foi reprovado(a).\n", aluno.nome);
    }
}

