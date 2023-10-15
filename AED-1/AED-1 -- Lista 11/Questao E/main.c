#include "listarecursiva.h"
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int op, valor, num, i, result;
    int str[11];
    Lista *l;

    while(1)
    {
        printf("\n(1)Criar.");
        printf("\n(2) Inserir valor no inicio.");
        printf("\n(3) Retornar ultimo elemento.");
        printf("\n(4) Retorno da soma dos elementos.");
        printf("\n(5) Exibe em ordem reversa.");
        printf("\n(6) Remove repetidos.");
        printf("\n(7) Numero binario.");
        printf("\n(8) Sair.");
        printf("\n");


        scanf("%d", &op);

        if(op == 8) break;

        switch(op)
        {
            case 1:
                l = criar();
                break;
            case 2:
                printf("\nDigite um valor para inserir no inicio: ");
                scanf("%d", &valor);
                if(inserirInicio(l, valor) == 0) printf("\nInserido com sucesso.");
                if(inserirInicio(l, valor) == 1) printf("\nLista NULL.");
                break;
            case 3:
                if(ultimoElemento(l, &num) == 0) printf("\nInserido com sucesso.");
                if(ultimoElemento(l, &num) == 1) printf("\nLista NULL.");
            case 4:
                result = somaElementos(l);
                printf("\n %d ", result);
                break;
            case 5:
                mostrarReversa(l);
                break;
            case 6:
                printf("\nDigite um numero para excluir suas repeticoes: ");
                scanf("%d", &num);
                if(removeOcorrencias(l, num) == 0) printf("\nRemovido com sucesso.");
                break;
            case 7:
                printf("\nDigite um numero em binario(8 bits): ");

                for(i=0; i<8; i++)
                {
                    printf("\nDigite o digito do numero binario: ");
                    scanf("%d", &valor);
                    inserirInicio(l,valor);
                }

                printf("\nDigite um inteiro para somar: " );
                scanf("%d", &num);

                for(i = 0; i < num; i++)
                {
                    incrementar(l);
                }

                mostrarReversa(l);

                break;
            default:
                printf("\nOpcao invalida");
                break;
        }
    }

    return 0;
}
