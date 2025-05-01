#include <stdio.h>

#define NUM_ALUNOS 10
#define NOTA_MINIMA_APROVACAO 5.0

struct Aluno 
{
    char nome[50];
    int matricula;
    float mediaFinal;
};

int main() 
{
    struct Aluno alunos[NUM_ALUNOS];
    struct Aluno aprovados[NUM_ALUNOS];
    struct Aluno reprovados[NUM_ALUNOS];

    int numAprovados = 0;
    int numReprovados = 0;

    printf("Digite os dados dos alunos:\n");
    for (int i = 0; i < NUM_ALUNOS; i++) 
    {
        printf("Aluno %d:\n", i + 1);
        printf("Nome: ");
        scanf("%s", alunos[i].nome);
        printf("Matrícula: ");
        scanf("%d", &alunos[i].matricula);
        printf("Média Final: ");
        scanf("%f", &alunos[i].mediaFinal);

        if (alunos[i].mediaFinal >= NOTA_MINIMA_APROVACAO) 
        {
            aprovados[numAprovados] = alunos[i];
            numAprovados++;
        } else 
        {
            reprovados[numReprovados] = alunos[i];
            numReprovados++;
        }
    }

    printf("\nAlunos Aprovados:\n");
    for (int i = 0; i < numAprovados; i++) 
    {
        printf("Aluno %d:\n", i + 1);
        printf("Nome: %s\n", aprovados[i].nome);
        printf("Matrícula: %d\n", aprovados[i].matricula);
        printf("Média Final: %.2f\n", aprovados[i].mediaFinal);
        printf("\n");
    }

    printf("\nAlunos Reprovados:\n");
    for (int i = 0; i < numReprovados; i++) 
    {
        printf("Aluno %d:\n", i + 1);
        printf("Nome: %s\n", reprovados[i].nome);
        printf("Matrícula: %d\n", reprovados[i].matricula);
        printf("Média Final: %.2f\n", reprovados[i].mediaFinal);
        printf("\n");
    }

    return 0;
}
