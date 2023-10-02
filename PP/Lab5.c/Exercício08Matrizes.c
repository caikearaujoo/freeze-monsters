#include <stdio.h>

int main() 
{

    float mat1[2][2], mat2[2][2], constante;
    char opcao;

    printf("Digite os valores da primeira matriz (2 x 2):\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            scanf("%f", &mat1[i][j]);
        }
    }

    printf("Digite os valores da segunda matriz (2 x 2):\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            scanf("%f", &mat2[i][j]);
        }
    }

    printf("Escolha uma das opcoes abaixo:\n");
    printf("( a ) Somar as duas matrizes\n");
    printf("( b ) Subtrair a primeira matriz da segunda\n");
    printf("( c ) Adicionar uma constante as duas matrizes\n");
    printf("( d ) Imprimir as matrizes\n");
    scanf(" %c", &opcao);

    switch(opcao) 
    {
        case 'a':
            for (int i = 0; i < 2; i++) 
            {
                for (int j = 0; j < 2; j++) 
                {
                    mat1[i][j] += mat2[i][j];
                }
            }
            printf("Resultado da soma das matrizes:\n");
            for (int i = 0; i < 2; i++) 
            {
                for (int j = 0; j < 2; j++) 
                {
                    printf("%.2f ", mat1[i][j]);
                }
                printf("\n");
            }
            break;

        case 'b':
            for (int i = 0; i < 2; i++) 
            {
                for (int j = 0; j < 2; j++) 
                {
                    mat2[i][j] -= mat1[i][j];
                }
            }
            printf("Resultado da subtracao da primeira matriz da segunda:\n");
            for (int i = 0; i < 2; i++) 
            {
                for (int j = 0; j < 2; j++) 
                {
                    printf("%.2f ", mat2[i][j]);
                }
                printf("\n");
            }
            break;

        case 'c':
            printf("Digite a constante que deseja adicionar: ");
            scanf("%f", &constante);

            for (int i = 0; i < 2; i++) 
            {
                for (int j = 0; j < 2; j++) 
                {
                    mat1[i][j] += constante;
                    mat2[i][j] += constante;
                }
            }
            printf("Matrizes com a constante adicionada:\n");
            printf("Matriz 1:\n");
            for (int i = 0; i < 2; i++)
            {
                for (int j = 0; j < 2; j++)
                {
                    printf("%.2f ", mat1[i][j]);
                }
                printf("\n");
            }

            printf("Matriz 2:\n");
            for (int i = 0; i < 2; i++)
            {
                for (int j=0; j<2; j++)
                {
                    printf("%.2f", mat2[i][j]);
                }
                printf("\n");
            }
            break;
            case 'd':
            printf("Matriz 1:\n");
            for (int i = 0; i < 2; i++)
            {
                for (int j = 0; j < 2; j++)
                {
                    printf("%.2f ", mat1[i][j]);
                }
                printf("\n");
            }

            printf("Matriz 2:\n");
            for (int i = 0; i < 2; i++)
            {
                for (int j=0; j<2; j++)
                {
                    printf("%.2f ", mat2[i][j]);
                }
                printf("\n");
            }
            break;
            default: 
            printf("\nOpcao invalida.");
        }

    return 0;
}
