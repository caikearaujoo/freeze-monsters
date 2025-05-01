#include <stdio.h>
#include <stdlib.h>

int main() 
{
    int *p = NULL, tamanho = 0, opcao, posicao, valor, i, qntd;
    
    printf ("Digite o tamanho da memoria: ");
    scanf ("%d", &tamanho);

    if ((tamanho <= 0) || ((tamanho % (sizeof(int))) != 0)) 
    {
        printf ("\nErro: tamanho invalido");
        exit(1);
    }
    
    qntd = tamanho / (sizeof(int));
    
    p = (int*) calloc (qntd, (sizeof(int)));
    
    if (p == NULL) 
    {
        printf ("\nErro: memoria insuficiente");
        exit(1);
    }

    for (i = 0; i < tamanho; i++)
    {
        p[i] = 0;
    }
    do 
    {
        printf ("\nEscolha uma opcao abaixo: ");
        printf ("\n1: Inserir valor");
        printf ("\n2: Consultar valor\n");
        scanf ("%d", &opcao);

        if ((opcao < 1) || (opcao > 2))
        {
            printf ("\nOpcao invalida.\n");
        }

    } while ((opcao < 1) || (opcao > 2));
    switch (opcao)
    {
        case 1:
            do
            {
                printf ("\nDigite em qual posicao deseja inserir um novo valor: ");
                scanf ("%d", &posicao);

                if ((posicao < 0) || (posicao > qntd))
                {
                    printf ("\nErro: posicao invalida\n");
                }

            } while ((posicao < 0) || (posicao > qntd));
            
            printf ("\nDigite o novo valor: ");
            scanf ("%d", &valor);

            p[posicao] = valor;
            printf ("Valor foi armazenado com sucesso: memoria[%d] = %d", posicao, valor);

            break;
        
        case 2:
            do
            {
                printf ("\nDigite a posição que deseja consultar o valor: ");
                scanf ("%d", &posicao);

                if ((posicao < 0) || (posicao > qntd))
                {
                    printf ("\nErro: posicao invalida\n");
                }

            } while ((posicao < 0) || (posicao > qntd));
            
            printf ("\nValor armazenado: memoria[%d] = %d", posicao, p[posicao]);

            break;
        
    }
    
    free(p);
    
    return 0;
}
