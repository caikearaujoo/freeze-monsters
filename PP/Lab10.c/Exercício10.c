#include <stdio.h>
#include <string.h>

#define MAX_CIDADES 100
#define TAM_NOME 41

typedef struct {
    char nome[TAM_NOME];
    int habitantes;
} Cidade;

int main() {
    char nomeArquivoEntrada[100], nomeArquivoSaida[100];
    FILE *entrada, *saida;
    Cidade cidades[MAX_CIDADES];
    int numCidades = 0;
    int i, maxHabitantes = 0, indiceMaxHabitantes = 0;

    printf("Digite o nome do arquivo de entrada: ");
    scanf("%s", nomeArquivoEntrada);

    printf("Digite o nome do arquivo de saída: ");
    scanf("%s", nomeArquivoSaida);

    entrada = fopen(nomeArquivoEntrada, "r");
    if (entrada == NULL) {
        printf("Erro ao abrir o arquivo de entrada.\n");
        return 1;
    }

    saida = fopen(nomeArquivoSaida, "w");
    if (saida == NULL) {
        printf("Erro ao criar o arquivo de saída.\n");
        return 1;
    }

    while (fscanf(entrada, "%40s %d", cidades[numCidades].nome, &cidades[numCidades].habitantes) == 2) {
        if (cidades[numCidades].habitantes > maxHabitantes) {
            maxHabitantes = cidades[numCidades].habitantes;
            indiceMaxHabitantes = numCidades;
        }
        numCidades++;
    }

    fprintf(saida, "Cidade mais populosa: %s\n", cidades[indiceMaxHabitantes].nome);
    fprintf(saida, "Número de habitantes: %d\n", cidades[indiceMaxHabitantes].habitantes);

    fclose(entrada);
    fclose(saida);

    printf("Arquivo de saída criado com sucesso.\n");

    return 0;
}
