#include "filaencadeada.h"
#include <stdio.h>
#include <stdlib.h>

int main ( )
{
    fila *a = criar ( );
    fila *b = criar ( );
    fila *i = NULL;

    int op, retorno, numero;

    while (1)
    {
        printf ("\n\nMENU\n");
        printf ("\n(1) inserir elemento");
        printf ("\n(2) remover elemento");
        printf ("\n(3) mostrar fila");
        printf ("\n(4) intercalar filas");
        printf ("\n(5) remover negativos");
        printf ("\n(6) sair");

        printf ("\n\nopcao escolhida: ");
        scanf ("%d", &op);

        if (op == 6)
        {
            printf ("\nencerrando o programa...");
            break;
        }

        switch (op)
        {
            case 1:
                printf ("\ndigite o numero: ");
                scanf ("%d", &numero);

                retorno = inserir (a, numero);
                if (retorno == -2)
                    printf ("\nerro: fila nao alocada");
                if (retorno == -1)
                    printf ("\nerro: fila cheia");
                if (retorno == 0)
                    printf ("\nnumero inserido na fila");

                break;

            case 2:
                retorno = remover (a, &numero);
                if (retorno == -2)
                    printf ("\nerro: fila nao alocada");
                if (retorno == -1)
                    printf ("\nerro: fila vazia");
                if (retorno == 0)
                    printf ("\nnumero %d removido na fila", numero);

                break;

            case 3:
                mostrar (a);
                break;

            case 4:
                inserir (b, 20);
                inserir (b, 25);
                inserir (b, 30);
                inserir (b, 35);
                inserir (b, 40);

                i = intercalada (a, b);

                printf ("\nfilas intercaladas:\n");
                mostrar (i);

                break;

            case 5:
                retorno = remover_negativos (a);
                if (retorno == -2)
                    printf ("\nerro: lista nao alocada");
                if (retorno == -1)
                    printf ("\nerro: lista vazia");
                if (retorno == 0)
                    printf ("\nnumero(s) removido(s)");

                break;

            default:
                printf ("\nopcao invalida, tente novamente...");
        }
    }

    limpar (a);
    limpar (b);
    limpar (i);

    return 0;
}
