#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int codigo;
    char nome[50];
    int quantidade;
    float preco;
} Produto;

int main() {
    int numProdutos;
    int i;
    int maxPrecoIndex = 0;
    int maxQuantidadeIndex = 0;

    printf("Digite o número de produtos: ");
    scanf("%d", &numProdutos);

    Produto *estoque = (Produto *) malloc(numProdutos * sizeof(Produto));

    for (i = 0; i < numProdutos; i++) {
        printf("\nProduto %d:\n", i+1);
        printf("Código: ");
        scanf("%d", &estoque[i].codigo);
        printf("Nome: ");
        scanf(" %s", estoque[i].nome);
        printf("Quantidade: ");
        scanf("%d", &estoque[i].quantidade);
        printf("Preço: ");
        scanf("%f", &estoque[i].preco);


        if (estoque[i].preco > estoque[maxPrecoIndex].preco) {
            maxPrecoIndex = i;
        }

        if (estoque[i].quantidade > estoque[maxQuantidadeIndex].quantidade) {
            maxQuantidadeIndex = i;
        }
    }

    printf("\nProdutos cadastrados:\n");
    for (i = 0; i < numProdutos; i++) {
        printf("\nProduto %d:\n", i+1);
        printf("Código: %d\n", estoque[i].codigo);
        printf("Nome: %s\n", estoque[i].nome);
        printf("Quantidade: %d\n", estoque[i].quantidade);
        printf("Preço: %.2f\n", estoque[i].preco);
    }

    printf("\nProduto com o maior preço de venda:\n");
    printf("Código: %d\n", estoque[maxPrecoIndex].codigo);
    printf("Nome: %s\n", estoque[maxPrecoIndex].nome);
    printf("Quantidade: %d\n", estoque[maxPrecoIndex].quantidade);
    printf("Preço: %.2f\n", estoque[maxPrecoIndex].preco);

    printf("\nProduto com a maior quantidade disponível no estoque:\n");
    printf("Código: %d\n", estoque[maxQuantidadeIndex].codigo);
    printf("Nome: %s\n", estoque[maxQuantidadeIndex].nome);
    printf("Quantidade: %d\n", estoque[maxQuantidadeIndex].quantidade);
    printf("Preço: %.2f\n", estoque[maxQuantidadeIndex].preco);

    free(estoque);

    return 0;
}
