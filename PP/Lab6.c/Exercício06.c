#include <stdio.h>

#define MAX_ALUNOS 10

struct Aluno 
{
    int matricula;
    char nome[50];
    int codigoDisciplina;
    float nota1;
    float nota2;
};

float calcularMediaFinal(float nota1, float nota2) 
{
    return (nota1 * 1.0 + nota2 * 2.0) / 3.0;
}

int main() 
{
    struct Aluno alunos[MAX_ALUNOS];
    int numAlunos;

    printf("Digite o número de alunos (até %d): ", MAX_ALUNOS);
    scanf("%d", &numAlunos);

    if (numAlunos > MAX_ALUNOS) {
        printf("O número de alunos excede o limite.\n");
        return 0;
    }

    for (int i = 0; i < numAlunos; i++) 
    {
        printf("\nAluno %d:\n", i + 1);
        printf("Matrícula: ");
        scanf("%d", &alunos[i].matricula);
        printf("Nome: ");
        scanf("%s", alunos[i].nome);
        printf("Código da Disciplina: ");
        scanf("%d", &alunos[i].codigoDisciplina);
        printf("Nota1: ");
        scanf("%f", &alunos[i].nota1);
        printf("Nota2: ");
        scanf("%f", &alunos[i].nota2);
    }

    printf("\nListagem Final dos Alunos:\n");
    for (int i = 0; i < numAlunos; i++) 
    {
        float mediaFinal = calcularMediaFinal(alunos[i].nota1, alunos[i].nota2);
        printf("Aluno %d\n", i + 1);
        printf("Matrícula: %d\n", alunos[i].matricula);
        printf("Nome: %s\n", alunos[i].nome);
        printf("Código da Disciplina: %d\n", alunos[i].codigoDisciplina);
        printf("Média Final: %.2f\n\n", mediaFinal);
    }

    return 0;
}
