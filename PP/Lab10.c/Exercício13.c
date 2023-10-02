#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    FILE *fp;
    char nomes[50];
    char telefones[15];

    fp = fopen("lista_telefonica.txt", "w");

    if (fp == NULL) 
    {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }

    printf("Cadastro de Contatos: \n");
    printf("Insira os nomes e telefones, digite 0 para sair do programa:\n");

    while (1) 
    {
        printf("Digite o nome: ");
        fgets(nomes, 50, stdin);
        nomes[strcspn(nomes, "\n")] = '\0';

        if (strcmp(nomes, "0") == 0) 
        {
            break;
        }

        printf("Digite o telefone: ");
        fgets(telefones, 15, stdin);
        telefones[strcspn(telefones, "\n")] = '\0';

        if (strcmp(telefones, "0") == 0) {
            break;
        }

        fprintf(fp, "%s: %s\n", nomes, telefones);
    }

    fclose(fp);

    printf("O cadastro foi concluido e as informacoes foram salvas no arquivo de nome: lista_telefonica.txt \n");

    return 0;
}
