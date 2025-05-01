#include <stdio.h>
#include <string.h>

int main() {
    char s1[21], s2[21], c1, c2;
    int opcao, n,tamanho, posicao;

        printf("\nMENU\n");
        printf("1. Ler uma string S1\n");
        printf("2. Imprimir o tamanho da string S1\n");
        printf("3. Comparar a string S1 com uma nova string S2\n");
        printf("4. Concatenar a string S1 com uma nova string S2\n");
        printf("5. Imprimir a string S1 de forma reversa\n");
        printf("6. Contar quantas vezes um dado caractere aparece na string S1\n");
        printf("7. Substituir a primeira ocorrência do caractere C1 da string S1 pelo caractere C2\n");
        printf("8. Verificar se uma string S2 é substring de S1\n");
        printf("9. Retornar uma substring da string S1\n");
        printf("0. Sair\n");
        printf("Digite a opcao desejada: ");
        scanf("%d", &opcao);

        switch(opcao) {
            case 1:
                printf("Digite a string S1 (tamanho maximo 20 caracteres): ");
                scanf("%s", s1);
                break;
            case 2:
                printf("Tamanho da string S1: %d\n", strlen(s1));
                break;
            case 3:
                printf("Digite a string S2: ");
                scanf("%s", s2);
                if(strcmp(s1, s2) == 0) {
                    printf("As strings sao iguais.\n");
                } else {
                    printf("As strings sao diferentes.\n");
                }
                break;
            case 4:
                printf("Digite a string S2: ");
                scanf("%s", s2);
                n = strlen(s1);
                strncat(s1, s2, 20-n); 
                printf("Resultado da concatenacao: %s\n", s1);
                break;
            case 5:
                printf("String S1 de forma reversa: ");
                for(int i = strlen(s1)-1; i >= 0; i--) {
                    printf("%c", s1[i]);
                }
                printf("\n");
                break;
            case 6:
                printf("Digite o caractere a ser contado: ");
                scanf(" %c", &c1);
                int contador = 0;
                for(int i = 0; i<strlen(s1); i++) {
                    if(s1[i] == c1) {
                        contador++;
                    }
                }
                printf("O caractere %c aparece %d vez(es) na string S1.\n", c1, contador);
                break;
            case 7:
                printf("Digite o caractere a ser substituido: ");
                scanf(" %c", &c1);
                printf("Digite o novo caractere: ");
                scanf(" %c", &c2);
                for(int i = 0; i < strlen(s1); i++) {
                    if(s1[i] == c1) {
                        s1[i] = c2;
                        break;
                    }
                }
                printf("Resultado da substituicao: %s\n", s1);
                break;
            case 8:
            printf("Digite a posição inicial para a substring: ");
            scanf("%d", &posicao);
            printf("Digite o tamanho da substring: ");
            scanf("%d", &tamanho);

            if (posicao < 0 || posicao >= strlen(s1)) 
            {
                printf("Posição inicial inválida!\n");
            } else if (tamanho < 1) {
                printf("Tamanho inválido!\n");
            } else 
            {
                char substring[21];
                int i;
                for (i = 0; i < tamanho && s1[posicao + i] != '\0'; i++) 
                {
                    substring[i] = s1[posicao + i];
                }
                substring[i] = '\0';

                printf("Substring: %s\n", substring);
            }
            break;

        case 9:
            printf("Digite a string S2: ");
            scanf(" %s", s2);

            if (strstr(s1, s2) != NULL) 
            {
                printf("S2 é substring de S1\n");
            } else 
            {
                printf("S2 não é substring de S1\n");
            }
        default:
        printf("\nOpcao Invalida.");
        }
    return 0;
}
