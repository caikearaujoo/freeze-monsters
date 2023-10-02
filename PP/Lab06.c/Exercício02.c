#include <stdio.h>

struct informacoes_pessoais
{
    char nome [100];
    int idade;
    char endereco [300];
};

typedef struct informacoes_pessoais informacoes_pessoais;

int main ()
{
    informacoes_pessoais infos;
    printf("\nDigite o nome: ");
    fgets (infos.nome, 100, stdin);
    printf("\nDigite a idade: ");
    scanf("%d", &infos.idade);
    printf("\nDigite o endereco: ");
    setbuf(stdin,NULL);
    fgets(infos.endereco, 100, stdin);
    printf ("\nAs informacoes digitadas sao: \n %s \n%d \n %s", infos.nome, infos.idade, infos.endereco);

    return 0;
}
