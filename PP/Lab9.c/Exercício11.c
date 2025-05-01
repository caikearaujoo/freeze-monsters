#include <stdio.h>
#include <stdlib.h>

struct aluno
{
    int matricula;
    char sobrenome[50];
    int anoNascimento;
};
typedef struct aluno aluno;

int main() 
{
    aluno *alunos;
    int num_alunos;
    int i;

    printf("Digite o numero de alunos: ");
    scanf("%d", &num_alunos);

    alunos = (aluno *) malloc(num_alunos * sizeof(aluno));
    for (i = 0; i < num_alunos; i++) 
    {
        printf("Aluno %d:\n", i+1);
        printf("Matrícula: ");
        scanf("%d", &alunos[i].matricula);
        printf("Sobrenome: ");
        scanf("%s", alunos[i].sobrenome);
        printf("Ano de Nascimento: ");
        scanf("%d", &alunos[i].anoNascimento);
    }

    printf("\nDados dos alunos:\n");
    for (i = 0; i < num_alunos; i++) 
    {
        printf("Aluno %d:\n", i+1);
        printf("Matrícula: %d\n", alunos[i].matricula);
        printf("Sobrenome: %s\n", alunos[i].sobrenome);
        printf("Ano de Nascimento: %d\n", alunos[i].anoNascimento);
        printf("\n");
    }

    free(alunos);

    return 0;
}
