#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct clientes
{
    char cpf[20];
    char **filhos;
    char civil[50];
};
typedef struct clientes clientes;

int main()
{
    int n, opcao, op1, op2, op3, j, i, k, temfilhos, qntdfilhos;
    clientes *cadastro;

    printf("\nDigite o tamanho desejado do vetor: ");
    scanf("%d", &n);

    cadastro = (clientes *)calloc(n, sizeof(clientes));

    do
    {
        printf("\nMenu de opções: ");
        printf("\nOpção (1) - Adicionar clientes");
        printf("\nOpção (2) - Remover clientes");
        printf("\nOpção (3) - Mostrar CPF dos clientes");
        printf("\nOpção (4) - Sair");
        printf("\nDigite a opção desejada: ");
        scanf("%d", &opcao);

        switch (opcao)
        {
            case 1:
                do
                {
                    printf("\nVamos adicionar novos clientes: ");

                    do
                    {
                        printf("\nDigite a posição do vetor que deseja alterar: ");
                        scanf("%d", &i);
                    } while((i < 0) || (i >= n)) ;

                    printf("\nDigite o CPF do cliente: ");
                    setbuf(stdin, NULL);
                    fgets(cadastro[i].cpf, sizeof(cadastro[i].cpf), stdin);
                    cadastro[i].cpf[strcspn(cadastro[i].cpf, "\n")] = '\0';

                    printf("\nDigite o estado civil do cliente: ");
                    setbuf(stdin, NULL);
                    fgets(cadastro[i].civil, sizeof(cadastro[i].civil), stdin);
                    cadastro[i].civil[strcspn(cadastro[i].civil, "\n")] = '\0';

                    printf("\nO cliente tem filhos? Digite 1 para sim e 0 para não: ");
                    scanf("%d", &temfilhos);

                    if (temfilhos == 1)
                    {
                        printf("\nQuantos filhos?");
                        scanf("%d", &qntdfilhos);
                        cadastro[i].filhos = (char **)calloc(qntdfilhos, sizeof(char *));
                        for (j = 0; j < qntdfilhos; j++)
                        {
                            cadastro[i].filhos[j] = (char *)calloc(150, sizeof(char));
                            printf("\nDigite o nome de um filho: ");
                            setbuf(stdin, NULL);
                            fgets(cadastro[i].filhos[j], 150, stdin);
                            cadastro[i].filhos[j][strcspn(cadastro[i].filhos[j], "\n")] = '\0';
                        }
                    }

                    printf("\nDeseja adicionar outro cliente? 0 para não, qualquer coisa para sim: ");
                    scanf("%d", &op1);
                } while (op1 != 0);
                break;

            case 2:
                printf("\nRemoção de clientes: ");

                do
                {
                    printf("\nEscolha a posição do cliente no vetor (veja a lista da opção 3 primeiro):");
                    scanf("%d", &i);
                } while ((i < 0) || (i >= n));

                free(cadastro[i].filhos);
                for (j = i; j < n ; j++)
                {
                    strcpy(cadastro[j].cpf, cadastro[j + 1].cpf);
                    strcpy(cadastro[j].civil, cadastro[j + 1].civil);
                    cadastro[j].filhos = cadastro[j + 1].filhos;
                }

                printf("\nCliente removido com sucesso.");

                n--;

                printf("\nDeseja remover outro cliente? 0 para não, qualquer coisa para sim: ");
                scanf("%d", &op2);
                if (op2 != 0)
                {
                    continue;
                }
                break;

            case 3:
                printf("\nLista de clientes: ");
                for (i = 0; i < n+1; i++)
                {
                    printf("\nCPF: %s, Estado Civil: %s\n", cadastro[i].cpf, cadastro[i].civil);
                    printf("\n");
                }
                printf("\nPressione 1 para voltar para a tela inicial: ");
                scanf("%d", &op3);
                if (op3 == 1)
                {
                    continue;
                }
                break;

            case 4:
                free(cadastro);
                exit(0);
                break;

            default:
                printf("\nOpção inválida. Por favor, escolha uma opção válida.\n");
                break;
        }
    } while (1);

    return 0;
}
