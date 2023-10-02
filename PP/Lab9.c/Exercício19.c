#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_NAMES 5
#define MAX_NAME_LENGTH 31

int main() {
    char matriz[MAX_NAMES][MAX_NAME_LENGTH];
    int i;

    for (i = 0; i < MAX_NAMES; i++) {
        matriz[i][0] = '\0';
    }
    
    int opcao;
    
    do {
        printf("Escolha uma opcao:\n");
        printf("1. Gravar um nome em uma linha da matriz\n");
        printf("2. Apagar o nome contido em uma linha da matriz\n");
        printf("3. Substituir um nome em uma linha da matriz\n");
        printf("4. Apagar um nome em uma linha da matriz\n");
        printf("5. Recuperar o nome contido em uma linha da matriz\n");
        printf("0. Sair\n");
        scanf("%d", &opcao);
        
        int linha;
        
        switch (opcao) {
            case 1:
                printf("Digite o numero da linha (0-%d): ", MAX_NAMES - 1);
                scanf("%d", &linha);
                if (linha >= 0 && linha < MAX_NAMES) {
                    printf("Digite o nome a ser gravado: ");
                    scanf("%s", matriz[linha]);
                    printf("Nome gravado com sucesso.\n");
                } else {
                    printf("Linha invalida.\n");
                }
                break;
                
            case 2:
                printf("Digite o numero da linha (0-%d): ", MAX_NAMES - 1);
                scanf("%d", &linha);
                if (linha >= 0 && linha < MAX_NAMES) {
                    matriz[linha][0] = '\0';
                    printf("Nome apagado com sucesso.\n");
                } else {
                    printf("Linha invalida.\n");
                }
                break;
                
            case 3:
                printf("Digite o nome a ser substituido: ");
                char nomeSubstituir[MAX_NAME_LENGTH];
                scanf("%s", nomeSubstituir);
                
                printf("Digite o novo nome: ");
                char novoNome[MAX_NAME_LENGTH];
                scanf("%s", novoNome);
                
                for (i = 0; i < MAX_NAMES; i++) {
                    if (strcmp(matriz[i], nomeSubstituir) == 0) {
                        strcpy(matriz[i], novoNome);
                        printf("Nome substituido com sucesso.\n");
                        break;
                    }
                }
                
                if (i == MAX_NAMES) {
                    printf("Nome nao encontrado.\n");
                }
                break;
                
            case 4:
                printf("Digite o nome a ser apagado: ");
                char nomeApagar[MAX_NAME_LENGTH];
                scanf("%s", nomeApagar);
                
                for (i = 0; i < MAX_NAMES; i++) {
                    if (strcmp(matriz[i], nomeApagar) == 0) {
                        matriz[i][0] = '\0';
                        printf("Nome apagado com sucesso.\n");
                        break;
                    }
                }
                
                if (i == MAX_NAMES) {
                    printf("Nome nao encontrado.\n");
                }
                break;
                
            case 5:
                printf("Digite o numero da linha (0-%d): ", MAX_NAMES - 1);
                scanf("%d", &linha);
                if (linha >= 0 && linha < MAX_NAMES) {
                    if (matriz[linha][0] != '\0') {
                        printf("Nome na linha %d: %s\n", linha, matriz[linha]);
                    } else {
                        printf("Nenhum nome na linha %d.\n", linha);
                    }
                } else {
                    printf("Linha invalida.\n");
                }
                break;
                
            case 0:
                printf("Saindo do programa.\n");
                break;
                
            default:
                printf("Opcao invalida.\n");
                break;
        }
        
        printf("\n");
        
    } while (opcao != 0);
    
    return 0;
}
