#include "encadeia.h"

#include <stdio.h>
#include <stdlib.h>

void mostrarMenu();

int main() {
    lista *minhaLista = criar();

    int opcao;
    do {
        mostrarMenu();
        scanf("%d", &opcao);
        setbuf(stdin, NULL);

        switch (opcao)
        {
            case 1:
            {
                aluno novoAluno;
                printf("Digite a matricula, nome e nota do aluno: ");
                scanf("%d %s %f", &novoAluno.mat, novoAluno.nome, &novoAluno.n1);
                inseririnicio(minhaLista, novoAluno);
                printf("Aluno inserido no inicio da lista.\n");
                break;
            }
            case 2:
            {
                aluno novoAluno;
                printf("Digite a matricula, nome e nota do aluno: ");
                scanf("%d %s %f", &novoAluno.mat, novoAluno.nome, &novoAluno.n1);
                inserirfim(minhaLista, novoAluno);
                printf("Aluno inserido no fim da lista.\n");
                break;
            }
            case 3:
            {
                aluno novoAluno;
                int posicao;
                printf("Digite a matricula, nome e nota do aluno: ");
                scanf("%d %s %f", &novoAluno.mat, novoAluno.nome, &novoAluno.n1);
                printf("Digite a posicao de insercao: ");
                scanf("%d", &posicao);
                inserirposicao(minhaLista, novoAluno, posicao);
                printf("Aluno inserido na posicao %d da lista.\n", posicao);
                break;
            }
            case 4:
                removerinicio(minhaLista);
                printf("Aluno removido do inicio da lista.\n");
                break;
            case 5:
                removerfim(minhaLista);
                printf("Aluno removido do fim da lista.\n");
                break;
            case 6:
            {
                int posicao;
                printf("Digite a posicao de remocao: ");
                scanf("%d", &posicao);
                removerposicao(minhaLista, posicao);
                printf("Aluno removido da posicao %d da lista.\n", posicao);
                break;
            }
            case 7:
            {
                int matricula;
                aluno encontrado;
                printf("Digite a matricula a ser buscada: ");
                scanf("%d", &matricula);
                if (buscaritemchave(minhaLista, matricula, &encontrado) == 0) {
                    printf("Aluno encontrado:\n");
                    printf("Matricula: %d\n", encontrado.mat);
                    printf("Nome: %s\n", encontrado.nome);
                    printf("Nota: %.2f\n", encontrado.n1);
                } else {
                    printf("Aluno com a matricula %d não encontrado.\n", matricula);
                }
                break;
            }
            case 8:
            {
                aluno alunoBusca;
                printf("Digite a matricula do aluno a ser verificado: ");
                scanf("%d", &alunoBusca.mat);
                if (contemitem(minhaLista, alunoBusca) == 0) {
                    printf("A lista contem o aluno com matricula %d.\n", alunoBusca.mat);
                } else {
                    printf("A lista nao contem o aluno com matricula %d.\n", alunoBusca.mat);
                }
                break;
            }
            case 9:
                maiornota(minhaLista);
                break;
            case 10:
                mostrar(minhaLista);
                break;
            case 11:
                limpar(minhaLista);
                printf("Lista limpa.\n");
                case 12:
            {
                int n;

                printf("Digite o número de nós a serem removidos: ");

                scanf("%d", &n);

                removeprimeiros(minhaLista, n);

                printf("Os primeiros %d nós foram removidos da lista.\n", n);

                break;
            }
                break;
            case 13:
                printf("Saindo do programa.\n");
                break;
                default:
                printf("Opcao invalida. Tente novamente.\n");
                break;
        }

    } while (opcao != 13);

    free(minhaLista);

    return 0;
}

void mostrarMenu()
{
    printf("Menu:\n");
    printf("1. Inserir aluno no início\n");
    printf("2. Inserir aluno no fim\n");
    printf("3. Inserir aluno em uma posição\n");
    printf("4. Remover aluno do início\n");
    printf("5. Remover aluno do fim\n");
    printf("6. Remover aluno de uma posição\n");
    printf("7. Buscar aluno por matrícula\n");
    printf("8. Verificar se a lista contém um aluno\n");
    printf("9. Mostrar aluno com a maior nota\n");
    printf("10. Mostrar lista\n");
    printf("11. Limpar lista\n");
    printf("12. Limpar primeiros n elementos da lista");
    printf("13. Sair\n");
    printf("Escolha uma opção: ");
}
