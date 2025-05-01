#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct pessoa 
{
    char nome[50];
    int dia;
    int mes;
    int ano;
}; typedef pessoa pessoa;

int calcular_idade(int dia_nasc, int mes_nasc, int ano_nasc, int dia_atual, int mes_atual, int ano_atual);

int main() 
{
    FILE *fp1, *fp2;
    char nome_arquivo[50];
    int dia_atual, mes_atual, ano_atual;

    printf ("\nDigite a data atual (DD/MM/AAAA): ");
    scanf ("%d / %d / %d", &dia_atual, &mes_atual, &ano_atual);

    printf("Digite o nome do arquivo de entrada: ");
    fgets(nome_arquivo, 50, stdin);
    nome_arquivo[strcspn(nome_arquivo, "\n")] = '\0';

    fp1 = fopen(nome_arquivo, "r");
    if (fp1 == NULL) 
    {
        printf("Erro ao abrir o arquivo de entrada.\n");
        return 1;
    }

    fp2 = fopen("idades.txt", "w");
    if (fp2 == NULL) 
    {
        printf("Erro ao criar o arquivo de saída.\n");
        fclose(fp1);
        return 1;
    }

    while (!feof(fp1)) 
    {
        pessoa p;
        fscanf(fp1, "%s %d %d %d", p.nome, &p.dia, &p.mes, &p.ano);

        int idade = calcular_idade(p.dia, p.mes, p.ano, dia_atual, mes_atual, ano_atual);

        fprintf(fp2, "%s %d\n", p.nome, idade);
    }

    printf("Arquivo 'idades.txt' criado com sucesso.\n");

    fclose(fp1);
    fclose(fp2);

    return 0;
}

int calcular_idade(int dia_nasc, int mes_nasc, int ano_nasc, int dia_atual, int mes_atual, int ano_atual) 
{
    int idade = ano_atual - ano_nasc;
    if (mes_atual < mes_nasc || (mes_atual == mes_nasc && dia_atual < dia_nasc)) 
    {
        idade--;
    }
    return idade;
}
