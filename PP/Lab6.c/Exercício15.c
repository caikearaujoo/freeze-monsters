#include <stdio.h>
#include <string.h>

#define MAX_TITULO 30
#define MAX_AUTOR 15
#define MAX_LIVROS 5

typedef struct 
{
    char titulo[MAX_TITULO];
    char autor[MAX_AUTOR];
    int ano;
} Livro;

int main() 
{
    Livro livros[MAX_LIVROS];
    int i, qtdEncontrados = 0;
    char busca[MAX_TITULO];

    for (i = 0; i < MAX_LIVROS; i++) 
    {
        printf("Livro %d:\n", i + 1);
        printf("Título: ");
        fgets(livros[i].titulo, MAX_TITULO, stdin);
        livros[i].titulo[strcspn(livros[i].titulo, "\n")] = '\0'; 
        printf("Autor: ");
        fgets(livros[i].autor, MAX_AUTOR, stdin);
        livros[i].autor[strcspn(livros[i].autor, "\n")] = '\0';
        printf("Ano: ");
        scanf("%d", &livros[i].ano);
        setbuf(stdin, NULL); 
        printf("\n");
    }

    printf("Digite o título do livro a ser buscado: ");
    fgets(busca, MAX_TITULO, stdin);
    busca[strcspn(busca, "\n")] = '\0'; 

    printf("\nLivros encontrados:\n");
    for (i = 0; i < MAX_LIVROS; i++) 
    {
        if (strcmp(busca, livros[i].titulo) == 0) 
        {
            printf("Título: %s\n", livros[i].titulo);
            printf("Autor: %s\n", livros[i].autor);
            printf("Ano: %d\n\n", livros[i].ano);
            qtdEncontrados++;
        }
    }

    if (qtdEncontrados == 0) 
    {
        printf("Nenhum livro encontrado com o título '%s'\n", busca);
    }

    return 0;
}
