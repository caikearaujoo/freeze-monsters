#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct pessoa 
{
    char nome[41];
    int ano_nascimento;
}; typedef struct pessoa pessoa;

void escrever_idade_arquivo(FILE *arquivo_saida, const char *nome, int idade);

int main() 
{
    int ano_atual;
    char nome_arquivo_entrada[50], nome_arquivo_saida[50];

    printf("Digite o ano atual: ");
    if (scanf("%d", &ano_atual) != 1) 
    {
        printf("Erro ao ler o ano atual.\n");
        return 1;
    }
    
    setbuf(stdin,NULL);
    printf("Digite o nome do arquivo que deseja que seja lido: ");
    fgets(nome_arquivo_entrada, sizeof(nome_arquivo_entrada), stdin);
    nome_arquivo_entrada[strcspn(nome_arquivo_entrada, "\n")] = '\0';

    printf("Digite o nome do arquivo que vai ser criado: ");
    fgets(nome_arquivo_saida, sizeof(nome_arquivo_saida), stdin);
    nome_arquivo_saida[strcspn(nome_arquivo_saida, "\n")] = '\0';

    FILE *arquivo_entrada = fopen(nome_arquivo_entrada, "r");
    if (arquivo_entrada == NULL) 
    {
        printf("Erro ao abrir o arquivo de entrada.\n");
        return 1;
    }

    FILE *arquivo_saida = fopen(nome_arquivo_saida, "w");
    if (arquivo_saida == NULL) 
    {
        printf("Erro ao criar o arquivo de saída.\n");
        fclose(arquivo_entrada);
        return 1;
    }

    pessoa p;

    while (fscanf(arquivo_entrada, "%40[^\n]%*c%d", p.nome, &p.ano_nascimento) == 2) 
    {
        int idade = ano_atual - p.ano_nascimento;
        escrever_idade_arquivo(arquivo_saida, p.nome, idade);
    }

    printf("Arquivo de saída gerado com sucesso.\n");

    fclose(arquivo_entrada);
    fclose(arquivo_saida);

    return 0;
}

void escrever_idade_arquivo(FILE *arquivo_saida, const char *nome, int idade) 
{
    if (idade < 18) 
    {
        fprintf(arquivo_saida, "%s: Menor de idade\n", nome);
    } 
    else if (idade > 18) 
    {
        fprintf(arquivo_saida, "%s: Maior de idade\n", nome);
    } 
    else 
    {
        fprintf(arquivo_saida, "%s: Entrando na maior idade\n", nome);
    }
}
