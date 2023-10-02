#include "companhiaaerea.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main()
{
    companhiaAerea companhia;
    companhia.cidades = NULL;
    companhia.rotas = NULL;

    int opcao;
    char sigla[4], nome[100], origem[4], destino[4];
    float preco;

    do {
        printf("\nMenu:\n");
        printf("1. Adicionar cidade\n");
        printf("2. Adicionar rota\n");
        printf("3. Rota mais barata\n");
        printf("4. Rota mais cara\n");
        printf("5. Consultar preco de rota\n");
        printf("6. Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        switch (opcao)
        {
            case 1:
                printf("Digite a sigla da cidade: ");
                scanf("%s", sigla);
                printf("Digite o nome da cidade: ");
                scanf("%s", nome);
                adicionarCidade(&companhia, sigla, nome);
                printf("Cidade adicionada com sucesso.\n");
                break;

            case 2:
                printf("Digite a sigla de origem: ");
                scanf("%s", origem);
                printf("Digite a sigla de destino: ");
                scanf("%s", destino);
                printf("Digite o preco da rota: ");
                scanf("%f", &preco);
                adicionarRota(&companhia, origem, destino, preco);
                printf("Rota adicionada com sucesso.\n");
                break;

            case 3:
                maisBarata(&companhia);
                break;

            case 4:
                maisCara(&companhia);
                break;

            case 5:
                printf("Digite a sigla de origem: ");
                scanf("%s", origem);
                printf("Digite a sigla de destino: ");
                scanf("%s", destino);
                preco = consultarPreco(&companhia, origem, destino);
                if (preco == -1.0)
                {
                    printf("Rota nao encontrada.\n");
                } else
                {
                    printf("O preco da rota de %s para %s e %.2f.\n", origem, destino, preco);
                }
                break;

            case 6:
                printf("Saindo do programa.\n");
                break;

            default:
                printf("Opcao invalida. Tente novamente.\n");
                break;
        }
    } while (opcao != 6);

    return 0;
}
