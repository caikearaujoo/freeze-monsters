#include <stdio.h>
#include <string.h>

#define MAX_PESSOAS 5
#define MAX_NOME 100
#define MAX_ENDERECO 100
#define MAX_TELEFONE 20

struct Pessoa 
{
    char nome[MAX_NOME];
    char endereco[MAX_ENDERECO];
    char telefone[MAX_TELEFONE];
};

void ordenarPessoas(struct Pessoa pessoas[], int n) 
{
    struct Pessoa temp;
    int i, j;

    for (i = 0; i < n - 1; i++) 
    {
        for (j = 0; j < n - i - 1; j++) 
        {
            if (strcmp(pessoas[j].nome, pessoas[j + 1].nome) > 0) 
            {
                temp = pessoas[j];
                pessoas[j] = pessoas[j + 1];
                pessoas[j + 1] = temp;
            }
        }
    }
}

int main() {
    struct Pessoa pessoas[MAX_PESSOAS];
    int i;

    printf("Digite os dados das pessoas:\n");
    for (i = 0; i < MAX_PESSOAS; i++) 
    {
        printf("Pessoa %d:\n", i + 1);
        printf("Nome: ");
        fgets(pessoas[i].nome, MAX_NOME, stdin);
        printf("Endereço: ");
        fgets(pessoas[i].endereco, MAX_ENDERECO, stdin);
        printf("Telefone: ");
        fgets(pessoas[i].telefone, MAX_TELEFONE, stdin);
    }

    ordenarPessoas(pessoas, MAX_PESSOAS);

    printf("\nPessoas em ordem alfabética:\n");
    for (i = 0; i < MAX_PESSOAS; i++) 
    {
        printf("Pessoa %d:\n", i + 1);
        printf("Nome: %s", pessoas[i].nome);
        printf("Endereço: %s", pessoas[i].endereco);
        printf("Telefone: %s", pessoas[i].telefone);
    }

    return 0;
}
