#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct livro
{
    char titulo [50];
    int ano;
    int paginas;
    float preco;
};
typedef struct livro livro;

int main()
{
   livro livros[5];
   int i, media, contapaginas = 0;
   for (i=0; i<5; i++)
   {
       printf("\nDigite o titulo do livro: ");
       setbuf(stdin,NULL);
       fgets(livros[i].titulo, 50, stdin);
       livros[i].titulo[strcspn(livros[i].titulo, "\n")] = '\0';

       printf("\nDigite o ano de edicao do livro: ");
       scanf("%d", &livros[i].ano);

       printf("\nDigite o numero de paginas: ");
       scanf("%d", &livros[i].paginas);

       printf("\nDigite o preco do livro: ");
       scanf("%f", &livros[i].preco);
   }
   for (i=0; i<5; i++)
   {
       contapaginas += livros[i].paginas;
   }

   media = contapaginas / 5;

   printf("\nA media de paginas eh: %d", media);

   return 0;
}
