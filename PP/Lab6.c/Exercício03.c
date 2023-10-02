#include <stdio.h>

struct informacoes
{
    char nome [100];
    char matricula [100];
    char curso [100];
};
typedef struct informacoes informacoes;

int main ()
{
    informacoes a[5];
    int i;
    for (i=0; i<5; i++)
    {
        printf("\nDigite o nome do aluno: ");
        fgets (a[i].nome, 100, stdin);
        printf ("\nDigite a matricula do aluno: ");
        fgets (a[i].matricula, 100, stdin);
        printf ("\nDigite seu curso: ");
        fgets (a[i].curso, 100, stdin);
    }
    for (i=0; i<5; i++)
    {
        printf("\nInformacoes do aluno %d: \n%s%s%s", i+1, a[i].nome, a[i].matricula, a[i].curso);
    }
    return 0;
}
