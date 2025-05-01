#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SIZE_1KB 1024
#define MATRIX_ROWS 10
#define MATRIX_COLS 10
#define NUM_PRODUCTS 50
#define PRODUCT_NAME_SIZE 30
#define TEXT_LINES 100
#define TEXT_LINE_SIZE 80

typedef struct {
    char nome[PRODUCT_NAME_SIZE];
    int codigo;
    float preco;
} Registro;

int main() {
    char* vetor1KB = (char*)malloc(SIZE_1KB);
    int** matriz = (int**)malloc(MATRIX_ROWS * sizeof(int*));
    Registro* vetorRegistros = (Registro*)malloc(NUM_PRODUCTS * sizeof(Registro));
    char** texto = (char**)malloc(TEXT_LINES * sizeof(char*));
    
    int i, j;
    
    for (i = 0; i < MATRIX_ROWS; i++) {
        matriz[i] = (int*)malloc(MATRIX_COLS * sizeof(int));
    }
    
    for (i = 0; i < TEXT_LINES; i++) {
        texto[i] = (char*)malloc((TEXT_LINE_SIZE + 1) * sizeof(char));
    }
    
    strcpy(vetor1KB, "Exemplo de vetor de 1024 Bytes");
    printf("Vetor 1KB: %s\n", vetor1KB);
    
    for (i = 0; i < MATRIX_ROWS; i++) {
        for (j = 0; j < MATRIX_COLS; j++) {
            matriz[i][j] = i + j;
        }
    }
    
    printf("\nMatriz 10x10:\n");
    for (i = 0; i < MATRIX_ROWS; i++) {
        for (j = 0; j < MATRIX_COLS; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
    
    for (i = 0; i < NUM_PRODUCTS; i++) {
        sprintf(vetorRegistros[i].nome, "Produto %d", i + 1);
        vetorRegistros[i].codigo = i + 1;
        vetorRegistros[i].preco = (float)(i + 1) * 10.0;
    }
    
    printf("\nVetor de registros:\n");
    for (i = 0; i < NUM_PRODUCTS; i++) {
        printf("Registro %d: Nome=%s, Codigo=%d, Preco=%.2f\n", i + 1, vetorRegistros[i].nome,
               vetorRegistros[i].codigo, vetorRegistros[i].preco);
    }
    
    for (i = 0; i < TEXT_LINES; i++) {
        sprintf(texto[i], "Linha %d: ", i + 1);
        for (j = 0; j < TEXT_LINE_SIZE; j++) {
            texto[i][j + 10] = 'A' + (j % 26);
        }
        texto[i][TEXT_LINE_SIZE + 10] = '\0';
    }
    
    printf("\nTexto de 100 linhas:\n");
    for (i = 0; i < TEXT_LINES; i++) {
        printf("%s\n", texto[i]);
    }
    
    free(vetor1KB);
    
    for (i = 0; i < MATRIX_ROWS; i++) {
        free(matriz[i]);
    }
    free(matriz);
    
    free(vetorRegistros);
    
    for (i = 0; i < TEXT_LINES; i++) {
        free(texto[i]);
    }
    free(texto);
    
    return 0;
}
